#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void cpp(int,int,int,int);
void cpp(int xc,int yc,int r)
{
int x=0,y=r;
int p=(1-r);
while(x<y)
{
x++;
if(p<0)
p=p+2*x+1;
else
{
y--;
p=p+2*(x-y)+1;
}
cpp(xc,yc,x,y);
delay(20);
}
}
void cpp(int xc,int yc,int x,int y)
{
putpixel(xc+x,yc+y,15);
putpixel(xc-x,yc+y,15);
putpixel(xc+x,yc-y,15);
putpixel(xc-x,yc-y,15);
putpixel(xc+y,yc+x,15);
putpixel(xc-y,yc+x,15);
putpixel(xc+y,yc-x,15);
putpixel(xc-y,yc-x,15);
}
void main()
{
int d=DETECT,g,p,q,r;
clrscr();
initgraph(&d,&g,"");
cout<<"Enter the coordinates:"<<endl;
cin>>p>>q;
cout<<"Radius:"<<endl;
cin>>r;
putpixel(p,q,15);
cpp(p,q,r);
getch();
}