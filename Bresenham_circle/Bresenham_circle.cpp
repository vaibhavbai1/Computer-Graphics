#include <graphics.h>  
#include <stdlib.h>  
#include <stdio.h>  
#include <conio.h>  
#include <math.h>  

int main()  
{   
	int xc,yc,r,gdriver = DETECT, gmode;    
    printf("Enter the values of xc and yc :");  
    scanf("%d%d",&xc,&yc);  
    printf("Enter the value of radius  :");  
    scanf("%d",&r);
    
	initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI"); 
    int x=0,y=r,d=3-(2*r);  
    putpixel(x+xc,y+yc,7);  
    putpixel(x+xc,-y+yc,7);  
    putpixel(-x+xc,-y+yc,7);  
    putpixel(-x+xc,y+yc,7);  
    putpixel(y+xc,x+yc,7);  
    putpixel(y+xc,-x+yc,7);  
    putpixel(-y+xc,-x+yc,7);  
    putpixel(-y+xc,x+yc,7);
    while(x<=y){  
    	if(d<=0){  
        	d=d+(4*x)+6;  
    	}  
     	else{
        	d=d+(4*x)-(4*y)+10;  
        	y=y-1;  
        }  
        x=x+1;
        delay(100);
       	putpixel(x+xc,y+yc,7);  
	    putpixel(x+xc,-y+yc,7);  
	    putpixel(-x+xc,-y+yc,7);  
	    putpixel(-x+xc,y+yc,7);  
	    putpixel(y+xc,x+yc,7);  
	    putpixel(y+xc,-x+yc,7);  
	    putpixel(-y+xc,-x+yc,7);  
	    putpixel(-y+xc,x+yc,7);
    }
    getch();  
    closegraph();  
    return 0;  
}  
