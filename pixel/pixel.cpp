#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main(){
	int gd = DETECT, gm;
	initgraph(&gd,&gm,(char *)"");
	putpixel(50,50,WHITE);
	getch();
	return 0;
}
