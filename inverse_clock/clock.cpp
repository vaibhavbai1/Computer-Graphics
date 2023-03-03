
#include <stdio.h>
#include <graphics.h>
#include <math.h>

#define PI 3.14159265


void drawHands(int x, int y, int length, float angle)
{
int endX, endY;

endX = x + length * cos(angle);
endY = y - length * sin(angle);


line(x, y, endX, endY);
}
int main()
{
int gd = DETECT, gm;
int x, y, radius;

initgraph(&gd, &gm, "");


x = 350;
y = 200;
radius = 130;

for (float angle = 0; angle < 2 * PI; angle += 0.01)
{

    cleardevice();

    circle(x, y, radius);
    settextstyle(0, 0, 3);
    outtextxy(690-300, 100, "11");
    outtextxy(720-300, 140, "10");
    outtextxy(742-300, 190, "9");
    outtextxy(721-300, 240, "8");
    outtextxy(690-300, 280, "7");
    outtextxy(630-300, 300, "6");
    outtextxy(578-300, 280, "5");
    outtextxy(540-300, 240, "4");
    outtextxy(530-300, 190, "3");
    outtextxy(537-300, 140, "3");
    outtextxy(569-300, 100, "1");
    outtextxy(630-300, 80, "12");

    drawHands(x, y, radius - 30, angle);
    drawHands(x, y, radius - 60, angle / 12);
    delay(100);
}


closegraph();
return 0;
}
