#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main(){
	int gd = DETECT, gm;
	initgraph(&gd,&gm,(char *)"");
	line(0,0,getmaxx(),getmaxy());
	line(319,0,319,479);
	line(0,239,639,239);
	line(0,getmaxy(),getmaxx(),0);
	for(int i=1;i<=4;i++){
		circle(319,239,50*i);
	}
	
	getch();
	return 0;
}
