#include<iostream.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int d=DETECT,g;
initgraph(&d,&g,"");

int xc,yc,r;
cout<<"Enter Coordinates";
cin>>xc>>yc;
cout<<"Enter Radius";
cin>>r;
float x=0,y=0;
for(int i=0;i<=r;i++)
{
double ang=double(i)*(3.142/180);
x=r*cos(ang);
y=r*sin(ang);
putpixel(xc+floor(x),yc+floor(y),12);
putpixel(xc-floor(x),yc+floor(y),12);
putpixel(xc+floor(x),yc-floor(y),12);
putpixel(xc-floor(x),yc-floor(y),12);
putpixel(xc+floor(y),yc+floor(x),12);
putpixel(xc-floor(y),yc+floor(x),12);
putpixel(xc+floor(y),yc-floor(x),12);
putpixel(xc-floor(y),yc-floor(x),12);
delay(100);
}
getch();
}