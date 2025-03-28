/*
Nicol� Mele
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ANSIcolors.h"


void textbackground(short color) {
	if(color>=0 && color<=DEFAULTCOLOR)
		printf("\033[0;%im", 40+color); 
}

void textcolor(short color) {
	if(color>=0 && color<=DEFAULTCOLOR)
		printf("\033[%im", 30+color);
}

void textcolorRGB(short r, short g, short b) {
	printf("\033[38;2;%i;%i;%im",r,g,b);
} 

void textcolorHEX(char* hexColorCode) {
    if(hexColorCode[0] != '#') {
        return;
    }
    hexColorCode++;

    char red[3], green[3], blue[3];

    strncpy(red, hexColorCode, 2);
    red[2] = '\0';

    strncpy(green, hexColorCode + 2, 2);
    green[2] = '\0';

    strncpy(blue, hexColorCode + 4, 2);
    blue[2] = '\0';

    int r = (int)strtol(red, NULL, 16);
    int g = (int)strtol(green, NULL, 16);
    int b = (int)strtol(blue, NULL, 16);

    textcolorRGB(r, g, b);
}