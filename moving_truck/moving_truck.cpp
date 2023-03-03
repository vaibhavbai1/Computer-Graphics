#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
int main(){
	int gd=DETECT, gm, i;
	initgraph(&gd,&gm,(char *)"");
	for(i=0;i<=640;i=i+20){
		rectangle(50+i,50,150+i,150);
		rectangle(150+i,100,200+i,150);
		circle(80+i,160,10);
		circle(180+i,160,10);
		delay(50);
		cleardevice();
	}
	getch();
	return 0;
}
