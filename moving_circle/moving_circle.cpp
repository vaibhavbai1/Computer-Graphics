#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
int main(){
	int gd=DETECT, gm, i;
	initgraph(&gd,&gm,(char *)"");
	line(0,350,640,350);
	for(i=10;i<=700;i=i+10){
		circle(50+i,319,30);
		delay(100);
		cleardevice();
		line(0,350,640,350);
	}
	getch();
	return 0;
}
