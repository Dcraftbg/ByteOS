// This file is part of basicOS.
// Copyright (C) 2024 Guilherme Oliveira Santos

// This is free software: you can redistribute it and/or modify it 
// under the terms of the GNU GPL3 or (at your option) any later version.

// This program is distributed in hope that it will be useful, but 
// WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
// or FITNESS FOR A PARTICULAR PURPOSE. See at LICENSE file for more details.

#include "kernel.h"

void kmain(void){
    stdio_init();       // Initialize the VGA text mode
    heap_init();        // Initialize the heap
    idt_init();         // Initialize the IDT
    kb_init();          // Initialize the keyboard
    shell("init");     // Initialize the shell
    while (1);          // Loop forever
}