#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main(){
	int gd = DETECT, gm;
	initgraph(&gd,&gm,(char *)"");
	
	setfillstyle(SOLID_FILL,YELLOW);
	setcolor(YELLOW);
	circle(319,239,160);
	floodfill(319,239,14);
	
	setfillstyle(SOLID_FILL,WHITE);
	setcolor(WHITE);
	circle(229,159,50);
	floodfill(229,159,15);
	
	setfillstyle(SOLID_FILL,WHITE);
	setcolor(WHITE);
	circle(409,159,50);
	floodfill(409,159,15);
	
	setfillstyle(SOLID_FILL,BLACK);
	setcolor(BLACK);
	circle(229,184,25);
	floodfill(229,184,0);
	
	setfillstyle(SOLID_FILL,BLACK);
	setcolor(BLACK);
	circle(409,184,25);
	floodfill(409,184,0);
	
	
	
	
	setcolor(BLACK);
	arc(319,239,215,325,100);
	arc(319,239,215,325,99);
	arc(319,239,215,325,98);
	arc(319,239,215,325,97);
	arc(319,239,215,325,96);
	arc(319,239,215,325,95);
	arc(319,239,215,325,94);
	arc(319,239,215,325,93);
	
	
	
	getch();
	return 0;
}
