#include <graphics.h>
#include <conio.h>
#define pi 3.1415
void main(){
initgraph(640,480);
setorigin(320,240);
setbkcolor(WHITE);
cleardevice();
setfillcolor(BLUE);
setlinecolor(BLACK);
fillroundrect(-100,-200,100,10,180,180);
setfillcolor(WHITE);
fillellipse(-85,-145,85,8);
fillroundrect(-50,-174,0,-114,45,45);
fillroundrect(0,-174,50,-114,45,45);
setfillcolor(BLACK);
solidcircle(-15,-130,4);
solidcircle(15,-130,4);
setfillcolor(RED);
fillcircle(0,-120,10);
line(0,-110,0,-35);
arc(-80,-210,80,-35,pi*5/4,pi*7/4);
line(-35,-90,-75,-115);
line(35,-90,75,-115);
line(-34,-85,-75,-85);
line(34,-85,75,-85);
line(-35,-80,-75,-55);
line(35,-80,75,-55);
line(-45,30,-120,80);
line(45,30,120,80);
line(-60,80,-100,97);
line(60,80,100,97);
line(-60,80,-60,160);
line(60,80,60,160);
arc(-10,154,10,176,0,pi);
setfillcolor(WHITE);
fillcircle(-113,82,18);
fillcircle(113,82,18);
fillroundrect(-2,160,-100,180,21,21);
fillroundrect(2,160,100,180,21,21);
setfillcolor(BLUE);
floodfill(0,100,BLACK);
setfillcolor(WHITE);
fillcircle(0,70,60);
solidrectangle(-60,4,60,20);
pie(-48,23,48,108,pi,0);
setfillcolor(RED);
fillroundrect(-65,4,65,30,15,15);
setfillcolor(YELLOW);
fillcircle(0,30,15);
setfillcolor(BLACK);
solidellipse(-4,30,4,37);
setlinestyle(PS_SOLID,3);
line(0,37,0,45);
setlinestyle(PS_SOLID,1);
line(-12,22,12,22);
line(-14,24,14,24);
_getch();
closegraph();
}