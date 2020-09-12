#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void draw(int x1, int y1, int x2, int y2)
{
int dx,dy,p;
dx=x2-x1;
dy=y2-y2;


p=2*dy-dx;

while(x1<x2)
{
   if(p>=0)
    {
      putpixel(x1,y1,3);
      y1=y1+1;
      p=p+2*dy-2*dx;
    }
     else
   {
    putpixel(x1,y1,3);
    p=p+2*dy;
}
x1=x1+1;
}
}
int main()
{
int d,g,x1,y1,x2,y2;
d=DETECT;
initgraph(&d,&g," ");
cout<<"Enter the vaues of initial coordinates";
cin>>x1>>y1;
cout<<"Enter the values of final coordinates";
cin>>x2>>y2;
draw(x1,y1,x2,y2);
return 0;
getch();
closegraph();
}
