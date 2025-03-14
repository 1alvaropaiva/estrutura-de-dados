cmake_minimum_required(VERSION 3.30)
project(lista01 C)

set(CMAKE_C_STANDARD 11)

add_executable(lista01 main.c
        files/pratica/recursive.c
        files/pratica/struct.c
        files/pratica/exerciciostruct.c
        files/pratica/listaNet.c
        files/pratica/Estacionamento.c
)
