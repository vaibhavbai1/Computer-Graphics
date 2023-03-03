#include <graphics.h>  
#include <stdlib.h>  
#include <stdio.h>  
#include <conio.h>  
#include <math.h>  

int main()  
{   
    int gdriver = DETECT,gmode, errorcode;  
    int midx, midy, i,r,y,x,xc,yc,p;  
    printf("Enter the values of xc and yc :");  
    scanf("%d%d",&xc,&yc);  
    printf("Enter the value of radius  :");  
    scanf("%d",&r);
    initgraph (&gdriver, &gmode, "C:\\TURBOC3\\BGI"); 
	x=0;    
    y=r;  
    putpixel(x+xc,y+yc,RED);  
    putpixel(x+xc,-y+yc,YELLOW);  
    putpixel(-x+xc,-y+yc,GREEN);  
    putpixel(-x+xc,y+yc,YELLOW);  
    putpixel(y+xc,x+yc,12);  
    putpixel(y+xc,-x+yc,14);  
    putpixel(-y+xc,-x+yc,15);  
    putpixel(-y+xc,x+yc,6); 
    p=(5/4)-r;  
    while (x<=y)  
    {  
        if (p<0){
			p+= (4*x)+6;
		}
        else  
        {  
            p+=(2*(x-y))+5;  
            y--;  
        }  
        x++;  
        putpixel(x+xc,y+yc,RED);  
    	putpixel(x+xc,-y+yc,YELLOW);  
    	putpixel(-x+xc,-y+yc,GREEN);  
    	putpixel(-x+xc,y+yc,YELLOW);  
    	putpixel(y+xc,x+yc,12);  
    	putpixel(y+xc,-x+yc,14);  
    	putpixel(-y+xc,-x+yc,15);  
    	putpixel(-y+xc,x+yc,6);  
    } 
    getch();  
    closegraph();  
    return 0;
}  
