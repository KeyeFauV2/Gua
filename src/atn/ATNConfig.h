/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */

#pragma once

#include <unordered_set>
#include <vector>
#include <string>
#include <cstddef>
#include <cassert>

#include "antlr4-common.h"
#include "atn/ATNState.h"
#include "atn/SemanticContext.h"

namespace antlr4 {
namespace atn {

  /// <summary>
  /// A tuple: (ATN state, predicted alt, syntactic, semantic context).
  ///  The syntactic context is a graph-structured stack node whose
  ///  path(s) to the root is the rule invocation(s)
  ///  chain used to arrive at the state.  The semantic context is
  ///  the tree of semantic predicates encountered before reaching
  ///  an ATN state.
  /// </summary>
  class ANTLR4CPP_PUBLIC ATNConfig {
  public:
    struct Hasher
    {
      size_t operator()(Ref<ATNConfig> const& k) const {
        return k->hashCode();
      }

      size_t operator()(ATNConfig const& k) const {
        return k.hashCode();
      }
    };

    struct Comparer {
      bool operator()(Ref<ATNConfig> const& lhs, Ref<ATNConfig> const& rhs) const {
        return (lhs == rhs) || (*lhs == *rhs);
      }

      bool operator()(ATNConfig const& lhs, ATNConfig const& rhs) const {
        return (&lhs == &rhs) || (lhs == rhs);
      }
    };

    using Set = std::unordered_set<Ref<ATNConfig>, Hasher, Comparer>;

    /// The ATN state associated with this configuration.
    ATNState *state = nullptr;

    /// What alt (or lexer rule) is predicted by this configuration.
    const size_t alt = 0;

    /// The stack of invoking states leading to the rule/states associated
    /// with this config.  We track only those contexts pushed during
    /// execution of the ATN simulator.
    ///
    /// Can be shared between multiple ANTConfig instances.
    Ref<const PredictionContext> context;

    /**
     * We cannot execute predicates dependent upon local context unless
     * we know for sure we are in the correct context. Because there is
     * no way to do this efficiently, we simply cannot evaluate
     * dependent predicates unless we are in the rule that initially
     * invokes the ATN simulator.
     *
     * <p>
     * closure() tracks the depth of how far we dip into the outer context:
     * depth > 0.  Note that it may not be totally accurate depth since I
     * don't ever decrement. TODO: make it a boolean then</p>
     *
     * <p>
     * For memory efficiency, the {@link #isPrecedenceFilterSuppressed} method
     * is also backed by this field. Since the field is publicly accessible, the
     * highest bit which would not cause the value to become negative is used to
     * store this field. This choice minimizes the risk that code which only
     * compares this value to 0 would be affected by the new purpose of the
     * flag. It also ensures the performance of the existing {@link ATNConfig}
     * constructors as well as certain operations like
     * {@link ATNConfigSet#add(ATNConfig, DoubleKeyMap)} method are
     * <em>completely</em> unaffected by the change.</p>
     */
    size_t reachesIntoOuterContext = 0;

    /// Can be shared between multiple ATNConfig instances.
    Ref<const SemanticContext> semanticContext;

    ATNConfig(ATNState *state, size_t alt, Ref<const PredictionContext> context);
    ATNConfig(ATNState *state, size_t alt, Ref<const PredictionContext> context, Ref<const SemanticContext> semanticContext);

    ATNConfig(ATNConfig const& other, Ref<const SemanticContext> semanticContext);
    ATNConfig(ATNConfig const& other, ATNState *state);
    ATNConfig(ATNConfig const& other, ATNState *state, Ref<const SemanticContext> semanticContext);
    ATNConfig(ATNConfig const& other, ATNState *state, Ref<const PredictionContext> context);
    ATNConfig(ATNConfig const& other, ATNState *state, Ref<const PredictionContext> context, Ref<const SemanticContext> semanticContext);

    ATNConfig(ATNConfig const&) = default;

    ATNConfig(ATNConfig&&) = default;

    virtual ~ATNConfig() = default;

    virtual size_t hashCode() const;

    /**
     * This method gets the value of the {@link #reachesIntoOuterContext} field
     * as it existed prior to the introduction of the
     * {@link #isPrecedenceFilterSuppressed} method.
     */
    size_t getOuterContextDepth() const;
    bool isPrecedenceFilterSuppressed() const;
    void setPrecedenceFilterSuppressed(bool value);

    /// An ATN configuration is equal to another if both have
    /// the same state, they predict the same alternative, and
    /// syntactic/semantic contexts are the same.
    bool operator==(const ATNConfig &other) const;
    bool operator!=(const ATNConfig &other) const;

    virtual std::string toString() const;
    std::string toString(bool showAlt) const;

  private:
    ATNConfig(ATNState *state, size_t alt, Ref<const PredictionContext> context, size_t reachesIntoOuterContext, Ref<const SemanticContext> semanticContext);
  };

} // namespace atn
} // namespace antlr4


// Hash function for ATNConfig.

namespace std {
  using antlr4::atn::ATNConfig;

  template <> struct hash<ATNConfig>
  {
    size_t operator() (const ATNConfig &x) const
    {
      return x.hashCode();
    }
  };

  template <> struct hash<std::vector<Ref<ATNConfig>>>
  {
    size_t operator() (const std::vector<Ref<ATNConfig>> &vector) const
    {
      std::size_t seed = 0;
      for (const auto &config : vector) {
        seed ^= config->hashCode() + 0x9e3779b9 + (seed << 6) + (seed >> 2);
      }
      return seed;
    }
  };
}
