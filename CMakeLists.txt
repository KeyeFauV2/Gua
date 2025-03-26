cmake_minimum_required(VERSION 3.10)
project(GuaInterpreter)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Chemin vers le runtime ANTLR (ajustez si nécessaire)
set(ANTLR4_RUNTIME_DIR "C:/Gua/libs/antlr4-runtime/install")

# Inclure les en-têtes ANTLR et les fichiers générés
include_directories(${ANTLR4_RUNTIME_DIR}/include)
include_directories(${CMAKE_SOURCE_DIR}/src) # Inclure les fichiers générés

# Lier les bibliothèques ANTLR
link_directories(${ANTLR4_RUNTIME_DIR}/lib)

# Ajouter les fichiers sources
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Créer l'exécutable
add_executable(GuaInterpreter ${SOURCES})

# Lier le runtime ANTLR
target_link_libraries(GuaInterpreter antlr4-runtime)