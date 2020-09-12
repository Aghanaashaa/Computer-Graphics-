#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int d,g;
d=DETECT;
initgraph(&g,&d,"");
line(100,100,80,150);
line(100,100,120,150);
line(95,117,125,117);
line(125,117,80,150);
line(120,150,75,115);
getch();
}