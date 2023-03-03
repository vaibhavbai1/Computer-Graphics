#include <graphics.h>  
#include <stdlib.h>  
#include <stdio.h>  
#include <conio.h>  
#include <math.h> 
 
#define SIN(x) sin(x * 3.141592653589 / 180)
#define COS(x) cos(x * 3.141592653589 / 180)
int main()  
{   
	int gdriver = DETECT, gmode;
	int x1,y1,x2,y2,x3,y3,angle, shy, shx;
	char ch;
	float c,s;
	initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
	x1=100;
	y1=100;
	x2=200;
	y2=100;
	x3=150;
	y3=200;
	setcolor(WHITE);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	setcolor(RED);
	printf("Enter rotation angle factor: ");
	scanf("%d", &angle);
	c= COS(angle);
	s= SIN(angle);
	x1= floor(x1*c+y1*s);
	y1= floor(-x1*s+y1*c);
	x2= floor(x2*c+y2*s);
	y2= floor(-x2*s+y2*c);
	x3= floor(x3*c+y3*s);
	y3= floor(-x3*s+y3*c);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	delay(5000);
	cleardevice();
	printf("\n\n Enter 1 for x-axis \n 2 for y-axis: ");
	scanf("%d",&ch);
	if(ch==1) {
		printf("\n\n Enter the x-SHEAR (^.^) Value: ");
		scanf("%d",&shx);
	}
	else{
		printf("\n\n Enter the y-SHEAR (^.^) Value: ");
		scanf("%d",&shy);
	}
	if(ch==1)
	{
		x1=x1+shx*y1;
		y1=y1;
		x2=x1+shx*y1;
		y2=y2;
		x3=x1+shx*y1;
		y3=y3;
	}
	else
	{
		x1=x1;
		y1=y1+shy*x1;
		x2=x2;
		y2=y2+shy*x2;
		x3=x3;
		y3=y3+shy*x3;
	}
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	getch();  
	return 0;
}
