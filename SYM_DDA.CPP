#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main()
{
int d,g,n;
float x1,x2,y1,y2,dx,dy,length,xi,yi;
d=DETECT;
initgraph(&d,&g," ");
cout<<"Enter the value of x1 and y1";
cin>>x1>>y1;
cout<<"Enter the value of x2 and y2";
cin>>x2>>y2;

dx=x2-x1;
dy=y2-y1;
if(abs(dy)>abs(dx))
{
length=abs(dy);
}
else
{
length=abs(dx);
}

n=log10(length)/log10(2);

xi=dx/pow(2,n);
yi=dy/pow(2,n);

while(x1<=x2)
{
putpixel(abs(x1),abs(y1),3);
x1=x1+xi;
y1=y1+yi;
delay(70);
}
getch();
closegraph();
}
