cmake_minimum_required(VERSION 3.2)
project(02_Listas)

set(CMAKE_CXX_STANDARD 11)

# Agrego todos los test.
add_subdirectory(test)

set(SOURCE_FILES_01 01_Invierte/main.cpp Lista/Lista.h Lista/Nodo.h)
add_executable(01_Invierte ${SOURCE_FILES_01})

set(SOURCE_FILES_02 02_Insertar/main.cpp)
add_executable(02_Insertar ${SOURCE_FILES_02})

set(SOURCE_FILES_03 03_Eliminar/main.cpp)
add_executable(03_Eliminar ${SOURCE_FILES_03})

set(SOURCE_FILES_04 04_Union/main.cpp)
add_executable(04_Union ${SOURCE_FILES_04})

set(SOURCE_FILES_05 05_CircList/main.cpp)
add_executable(05_CircList ${SOURCE_FILES_05})

set(SOURCE_FILES_06 06_insertAfter/main.cpp)
add_executable(06_insertAfter  ${SOURCE_FILES_06})