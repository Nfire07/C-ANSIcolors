/*
Nicol� Mele
the color must be modified for every printf statement
*/
#include "ANSIcolors.c"
#include "ANSIcolors.h"

int main(void){
	textcolorRGB(0,0,0);
	printf("H");
	textcolorRGB(10,10,10);
	printf("e");
	textcolorRGB(20,20,20);
	printf("l");
	textcolorRGB(30,30,30);
	printf("l");
	textcolorRGB(40,40,40);
	printf("o");
	textcolorRGB(50,50,50);
	printf(" W");
	textcolorRGB(60,60,60);
	printf("o");
	textcolorRGB(70,70,70);
	printf("r");
	textcolorRGB(80,80,80);
	printf("l");
	textcolorRGB(90,90,90);
	printf("d");
	textcolorRGB(100,100,100);
	printf("!\n");
	textcolor(DEFAULTCOLOR);
	
	
	textcolorHEX("#FFFFFF");
	printf("Hello World!\n");
	textcolor(DEFAULTCOLOR);

	return 0;
}
