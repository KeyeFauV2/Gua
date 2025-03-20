cmake_minimum_required(VERSION 3.10)
project(GuaCompiler)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Inclure les en-têtes
include_directories(src/)
include_directories(C:/antlr/runtime/Cpp/runtime/src) # Chemin vers les en-têtes du runtime ANTLR

# Ajouter les fichiers sources générés par ANTLR
file(GLOB ANTLR_GEN_SRC src/*.cpp)

# Ajouter vos propres fichiers sources
file(GLOB Gua_SRC
    src/*.cpp
    src/*.h
)

# Créer l'exécutable
add_executable(GuaCompiler main.cpp ${ANTLR_GEN_SRC} AST.cpp TypeInference.cpp Codegen.cpp)

# Lier le runtime ANTLR (ajustez le chemin si nécessaire)
target_link_libraries(GuaCompiler antlr4_static)

# Trouver LLVM
find_package(LLVM REQUIRED CONFIG)
message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})

# Lier les bibliothèques LLVM
llvm_map_components_to_libnames(llvm_libs
    support
    core
    irreader
    orcjit
    nativecodegen
)

target_link_libraries(GuaCompiler
    ${llvm_libs}
    antlr4_static
)