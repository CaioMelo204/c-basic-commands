cmake_minimum_required(VERSION 3.29)
project(learning C)

set(CMAKE_C_STANDARD 11)

add_executable(learning main.c
        basic/variables.c
        basic/estruturas-decisao.c
        basic/switch.c
        basic/repetition-structures.c
        data-types/data-types.c
        data-types/matematical-operations.c
        vectors/vectors.c
        vectors/matrix.c
        binaries/bynary.c
        functions/functions.c
        functions/prototipos.c
        pointers/pointers.c
        pointers/using-pointers.c
        pointers/array-pointers.c
        structs/structs.c
        structs/alias.c
        structs/uniao.c
        structs/enum.c
        alocacao-de-memoria/maloc.c
        alocacao-de-memoria/caloc.c
        alocacao-de-memoria/realoc.c
)
