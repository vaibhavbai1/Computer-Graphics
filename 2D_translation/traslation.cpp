#include <graphics.h>  
#include <stdlib.h>  
#include <stdio.h>  
#include <conio.h>  
#include <math.h>  

int main()  
{   
	int gdriver = DETECT, gmode;
	int x1,y1,x2,y2,x3,y3,tx,ty;
	initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
	x1=50;
	y1=50;
	x2=100;
	y2=50;
	x3=75;
	y3=100;
	setcolor(WHITE);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	setcolor(RED);
	printf("Enter translation factor: ");
	scanf("%d%d", &tx,&ty);
	x1=x1+tx;
	y1=y1+ty;
	x2=x2+tx;
	y2=y2+ty;
	x3=x3+tx;
	y3=y3+ty;
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	getch();  
	return 0;
}

