/*
Nicolò Mele
*/
#include <stdio.h>
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

