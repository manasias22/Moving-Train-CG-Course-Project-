
#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
{
   int i;
   int gd = DETECT, gm=0, errorcode;
   int xmax, ymax;
   detectgraph(&gd,&gm);
   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

   for(i=0;i<=640;i++)
   {
     cleardevice();

   //for track
   line(0,450,640,450);
   line(0,475,640,475);
   line(0,480,640,480);

   //for back
   rectangle(30+i,340,180+i,350);
   rectangle(40+i,350,170+i,425);

   //for back wheels
   circle(70+i,437,12);
   circle(140+i,437,12);

   //for back incircle
   circle(70+i,437,8);
   circle(140+i,437,8);
   rectangle(70+i,435,140+i,439);

   //for back windows
   rectangle(55+i,365,155+i,400);
   line(83+i,365,83+i,400);
   line(122+i,365,122+i,400);

   //for join
   rectangle(170+i,400,210+i,390);

   //for engine
   rectangle(200+i,320,260+i,330);
   rectangle(210+i,330,250+i,400);
   rectangle(250+i,340,345+i,425);
   rectangle(250+i,340,330+i,410);

   //for front wheels
   circle(225+i,425,25);
   circle(320+i,437,12);
   circle(280+i,437,12);

   //for front small incircle
   circle(320+i,437,8);
   circle(280+i,437,8);
   rectangle(320+i,435,280+i,439);

   //for front big incircle
   circle(225+i,425,15);

   //for front windows
   rectangle(220+i,335,240+i,365);

   //for fire
   rectangle(300+i,300,330+i,340);
   rectangle(290+i,290,340+i,300);

   //front tracker
   line(332+i,425,332+i,450);
   line(345+i,425,355+i,450);

   //for light
   rectangle(345+i,360,355+i,380);

   //for hills
   line(0,200,50,150);
   line(50,150,150,200);
   line(150,200,300,100);
   line(300,100,450,175);
   line(450,175,640,125);

   //for sun
   circle(475,75,25);

   delay(25);
   }
   getch();
   closegraph();

}

