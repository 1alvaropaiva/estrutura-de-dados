cmake_minimum_required(VERSION 3.30)
project(lista01 C)

set(CMAKE_C_STANDARD 11)

add_executable(lista01 main.c
        files/recursive.c
        files/struct.c
        files/exerciciostruct.c
        files/listaNet.c
)
