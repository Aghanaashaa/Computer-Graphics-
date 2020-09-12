#include<iostream.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<conio.h>
void cpp(int,int,int,int);
void cpoly(int xc,int yc,int r)
{
int x=0,y=r;
float xend=r/1.41;
while(x<=xend)
{
y=sqrt((r*r)-(x*x));
cpp(xc,yc,x,y);
x++;
delay(20);
}
}
void cpp(int xc,int yc,int x,int y)
{
putpixel(xc+x,yc+y,15);
putpixel(xc-x,yc+y,13);
putpixel(xc+x,yc-y,11);
putpixel(xc-x,yc-y,10);
putpixel(xc+y,yc+x,9);
putpixel(xc-y,yc+x,8);
putpixel(xc+y,yc-x,7);
putpixel(xc-y,yc-x,6);
}
void main()
{
int g=DETECT,d,h,e,f;
clrscr();
initgraph(&d,&g,"");
cout<<"Enter Center Coordinates"<<endl;
cout<<"X:";
cin>>h;
cout<<"Y:";
cin>>e;
cin>>f;
putpixel(h,e,15);
cpoly(h,e,f);
getch();
}
