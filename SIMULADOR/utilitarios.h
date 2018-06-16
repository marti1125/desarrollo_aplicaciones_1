#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

using namespace std;

void printXY(int X, int Y, const char *format, ...)
{
    va_list args;
    va_start(args, format);
    printf("\033[%d;%dH", Y, X);
    vprintf(format, args);
    va_end(args);
    fflush(stdout);
}

void cursorXY(int X, int Y){
    printf("\033[%d;%dH", Y, X);
}
