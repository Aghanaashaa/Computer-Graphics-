#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int d,g;
d=DETECT;
initgraph(&d,&g,"");
int n[]={300,100,325,150,375,150,350,200,375,250,325,250,300,300,275,250,225,250,250,200,225,150,275,150,300,100};
setfillstyle(6,BLUE);
fillpoly(13,n);
settextstyle(4,0,4);
outtextxy(270,300,"Star");
getch();
}