# OSSP Week 2 - Dynamic Command Input

## Project Description

This project implements a simple shell that supports commands of arbitrary length using dynamic memory allocation.

## Week 2 Objectives

- Understand the C compilation pipeline
- Understand stack and heap memory
- Use malloc(), realloc(), and free()
- Use header and source files
- Read commands of arbitrary length
- Build a modular C program

## Files

- main.c - Main shell program
- input.c - Dynamic command input implementation
- input.h - Function declaration/header file

## Dynamic Memory

The program initially allocates memory using malloc().

When the input buffer becomes full, realloc() is used to increase the buffer size.

After the command is processed, free() releases the allocated memory.

## Compilation

Compile the program using:

gcc -Wall -Wextra main.c input.c -o shell

## Run

./shell

## Example

ossp> hello
You entered: hello

ossp> This is a long command
You entered: This is a long command

## Compilation Pipeline

Source Code
    ↓
Preprocessor
    ↓
Compiler
    ↓
Assembler
    ↓
Object Files
    ↓
Linker
    ↓
Executable

## Week 2 Features

- Dynamic command input
- Memory allocation using malloc()
- Automatic buffer expansion using realloc()
- Proper memory cleanup using free()
