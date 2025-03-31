cmake_minimum_required(VERSION 3.30)
project(lista01 C)

set(CMAKE_C_STANDARD 11)

add_executable(lista01 main.c
        files/pratica/Recursive.c
        files/pratica/Struct.c
        files/pratica/ExercicioStruct.c
        files/pratica/ListaNet.c
        files/pratica/Estacionamento.c
        files/pratica/Fibo.c
        files/pratica/FiboRecursive.c
)
