#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <drivers/keyboard.h>

#define MAX_INPUT 255

/* TODO: Make a better implementation */
int scanf(const char *format, ...){
    va_list parameters;
    va_start(parameters, format);
    
    char * buffer = (char *) va_arg(parameters, char*);
    keyboard_scanf(buffer);

    return 0;
    
}