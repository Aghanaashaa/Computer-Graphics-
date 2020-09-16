#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
#include<graphics.h>
void main()
{

int d,g;
d=DETECT;
initgraph(&d,&g,"");
float x1w,y1w,x2w,y2w,x1v,y1v,x2v,y2v;
float xwmin,ywmin,xwmax,ywmax,xvmin,yvmin,xvmax,yvmax;
cout<<"Enter the coordinates of Window(xwmin,ywmin,xwmax,ywmax)";
cin>>xwmin>>ywmin>>xwmax>>ywmax;
cout<<"Enter the coordinates of Viewport(xvmin,yvmin.xvmax,yvmax)";
cin>>xvmin>>yvmin>>xvmax>>yvmax;

cout<<"Enter the coordinates of a line(x1w,y1w,x2w,y2w)";
cin>>x1w>>y1w>>x2w>>y2w;

int sx=(xvmax-xvmin)/(xwmax-xwmin);
int sy=(yvmax-yvmin)/(ywmax-ywmin);

rectangle(xwmin,ywmin,xwmax,ywmax);
rectangle(xvmin,yvmin,xvmax,yvmax);

outtextxy(100,150,"Window");
outtextxy(400,150,"Viewport");


line(x1w,y1w,x2w,y2w);
x1v=xvmin+sx*(x1w-xwmin);
y1v=yvmin+sy*(y1w-ywmin);
x2v=xvmin+sx*(x2w-xwmin);
y2v=yvmin+sy*(y2w-ywmin);
line(x1v,y1v,x2v,y2v);

getch();
closegraph();
}