#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main(){
	int gd = DETECT, gm;
	initgraph(&gd,&gm,(char *)"");
	setcolor(YELLOW);
	settextstyle(10, 0, 7);
	
    outtextxy(100, 100, "Hello world");
	getch();
	return 0;
}
