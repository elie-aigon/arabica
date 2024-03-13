//
// Created by eliea on 12/03/2024.
//
#include <dirent.h>
#include <ncurses.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>
#include <ctype.h>

#define LOAD_VAL       0x01
#define READ_VAR       0x02
#define STORE_VAR      0x03
#define ADD            0x04
#define SUB            0x05
#define MUL            0x06
#define DIV            0x07
#define MOD            0x08
#define JMP            0x09
#define JMP_IF_ZERO    0x0A
#define JMP_IF_TRUE    0x0B
#define EQ             0x0C
#define NEQ            0x0D
#define GT             0x0E
#define LT             0x0F
#define GTE            0x10
#define LTE            0x11
#define PRINT_VAL      0x12
#define INPUT_VAL      0x13
#define HALT           0x14
#define LOAD_STR       0x15
#define PRINT_STR      0x16
#define INPUT_STR      0x17
#define STR_LEN        0x18
#define CONCAT         0x19
#define GET_CHAR       0x1A
#define SET_CHAR       0x1B
#define STR_CMP        0x1C

#define MAX_LINES 100
#define MAX_LINE_LENGTH 256
#ifndef ARABICA_ARABICA_HEADER_H
#define ARABICA_ARABICA_HEADER_H

#endif //ARABICA_ARABICA_HEADER_H
