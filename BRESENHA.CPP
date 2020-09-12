#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int d=DETECT,g;
initgraph(&d,&g,"");
int x,y,x1,y1,x2,y2,dx,dy,xnew,ynew,pk,s1,s2,e,temp;
cout<<"Enter the starting point of the line:";
cin>>x1>>y1;
cout<<"Enter the ending points of the line:";
cin>>x2>>y2;
dx=x2-x1;
dy=y2-y1;
x=x1;
y=y1;

if(dx>0)
 s1=1;
else
 s1=-1;
if(dy>0)
 s2=1;
else
 s2=-1;

int swap=0;
if(dy>dx)
{
temp=dx;
dx=dy;
dy=temp;
swap=1;
}
e=2*dy-dx;
for(int i=0; i<dx;i++)
{
putpixel(x,y,WHITE);
while(e>=0)
 {
 if(swap==1)
 x=x+s1;
 else
 y=y+s2;
 e=e-2*dx;
 }
 if(swap==1)
 y=y+s2;
 else
 x=x+s1;
 e=e+2*dy;
 i++;
}
getch();
closegraph();
}