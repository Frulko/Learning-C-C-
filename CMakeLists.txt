# Nous voulons un cmake "récent" pour utiliser les dernières fonctionnalités
cmake_minimum_required(VERSION 3.10)

# Notre projet est étiqueté hello
project(hello)

set(EXEC hello)

set(CMAKE_CXX_STANDARD 14)

# Créé des variables avec les fichiers à compiler
# file(GLOB_RECURSE SOURCES src/*.cpp)
# file(GLOB_RECURSE SOURCES src/*.c)
# file(GLOB_RECURSE HEADERS src/*.hpp)
# file(GLOB_RECURSE HEADERS src/*.h)

# file(GLOB_RECURSE CPP_SOURCES src/*.cpp)
# file(GLOB_RECURSE C_SOURCES src/*.c)

set(CPP_SOURCES src/main.cpp src/test.cpp)
set(C_SOURCES src/hello.c)

# file(GLOB_RECURSE H_INCLUDES includes/*.h)

# SET_SOURCE_FILES_PROPERTIES( ${SOURCES} PROPERTIES LANGUAGE CXX )
INCLUDE_DIRECTORIES(includes)

set(INCLUDES includes/test/test.c includes/quickjs/quickjs.c includes/quickjs/quickjs.c includes/quickjs/quickjs-libc.c)

# On indique que l'on veut un exécutable "hello" compilé à partir des fichiers décrit par les variables SRCS et HEADERS
add_executable(${EXEC} ${CPP_SOURCES} ${C_SOURCES} ${INCLUDES})
