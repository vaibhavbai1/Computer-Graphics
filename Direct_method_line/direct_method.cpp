#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int gd = DETECT, gm;
	initgraph(&gd,&gm,(char *)"");
	int x1,y1,x2,y2,i,x,y;
	cin>>x1>>y1>>x2>>y2;
	float m, c;
	if((x2-x1)==0){
		for(i=y1;i<y2;i++){
			putpixel(x1,i,WHITE);
		}
	}
	else{
		m = (y2-y1)/(x2-x1);
		c= y2 - (m*x2);
		if(m>1){
			for(i=y1;i<y2;i++){
				x = round((i-c)/m);
				putpixel(x,i,WHITE);
			}
		}
		else{
			for(i=x1;i<x2;i++){
				y = round((m*i)+c);
				putpixel(i,y,WHITE);
			}
		}
	}	
	getch();
	return 0;
}
