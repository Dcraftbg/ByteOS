// This file is part of basicOS.
// Copyright (C) 2024 Guilherme Oliveira Santos

// This is free software: you can redistribute it and/or modify it 
// under the terms of the GNU GPL3 or (at your option) any later version.

// This program is distributed in hope that it will be useful, but 
// WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
// or FITNESS FOR A PARTICULAR PURPOSE. See at LICENSE file for more details.

#ifndef SHELL_H
#define SHELL_H

#include <stdint.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wbuiltin-declaration-mismatch" // Ignore GCC warning

#define OS_PROMPT " _               _       ___  ____  \n"\
                  "| |__   __ _ ___(_) ___ / _ \\/ ___| \n"\
                  "| '_ \\ / _` / __| |/ __| | | \\___ \\ \n"\
                  "| |_) | (_| \\__ \\ | (__| |_| |___) |\n"\
                  "|_.__/ \\__,_|___/_|\\___|\\___/|____/ \n"\
                  "A x86 kernel written from scratch!\n\n"

#define MAX_COMMAND_LENGTH 100      

// Function prototypes based on MINIX implementation
void shell_initialize (void);

size_t num_builtins(void);
void shell(char* command);
void shell_exit(char** args);
void shell_echo(char** args);
void shell_clear(char** args);
void shell_help(char** args);
void shell_status(char** args);
void shell_color(char** args);

#endif // SHELL_H