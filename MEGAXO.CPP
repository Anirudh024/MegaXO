#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<graphics.h>
#include<dos.h>
#include<ctype.h>
#include<stdlib.h>
#include<fstream.h>


class graphic
{ public:
  void vs(char name1[20],char name2[20]);
  void loading();
  void opening();
  int confirm();
  void rewin(char ch[20],int sts) ;
}gra;


void graphic::rewin(char ch[20],int sts)
{ int ke;
  int i;
  int s1=strlen(ch);

   int a=230,b=200,pnt;

  for(i=0;i<301;i++){
  setfillstyle(1,WHITE);
  bar(170,140,170+i,200);
  bar(170,260,170+i,340);
  setfillstyle(1,0);
  bar(171,200,169+i,260);
  delay(2);
  }
  for(i=0;i<61;i++)
  {line(170,200,170,200+i);
   line(470,200,470,200+i);
   delay(2);
  }  if(sts==1){
    setcolor(0);
  settextstyle(8,0,4);
  outtextxy(250,145,"VICTORY");  }

    if(sts==2){
    setcolor(0);
  settextstyle(8,0,4);
  outtextxy(260,145,"DEFEAT");  }

    if(sts==3){
    setcolor(0);
  settextstyle(8,0,4);
  outtextxy(275,145,"DRAW");  }
   if(sts==2) {
   setcolor(0);
   setfillstyle(1,0); }
   if(sts==3) {
   setcolor(0);
   setfillstyle(1,0); }
   if(sts==1) {
   setcolor(0);
   setfillstyle(1,0); }
  circle(90+a,100+b,20);
  circle(90+a,100+b,21);
  sector(90+a,100+b,0,360,15,15);
  settextstyle(0,0,2);
  setcolor(WHITE);
  outtextxy(83+a,94+b,"-");
  outtextxy(87+a,94+b,">");

  if(sts==1)
  { setcolor(WHITE);
  settextstyle(0,0,2);
  outtextxy(320-(s1/2)*17,210,ch);
  outtextxy(290,230,"wins");
  }

  if(sts==2)
  { setcolor(WHITE);
  settextstyle(0,0,2);
  outtextxy(260,225,"YOU LOSE");

    }


   if(sts==3)
  { setcolor(WHITE);
  settextstyle(0,0,2);
  outtextxy(295,225,"TIE");

    }
    settextstyle(0,0,1);
    setfillstyle(1,WHITE);
    setcolor(WHITE);
}


int graphic::confirm()
{ int a=170,b=200,pnt=1,ke;
  int i,lim=0;
  for(i=0;i<301;i++){
  setfillstyle(1,WHITE);
  bar(170,140,170+i,200);
  bar(170,260,170+i,340);
  setfillstyle(1,0);
  bar(171,200,169+i,260);
  delay(1);
  }
  for(i=0;i<61;i++)
  {line(170,200,170,200+i);
   line(470,200,470,200+i);
   delay(2);
  }

  while(lim<100)
  { lim++;
  rectangle(170,140,470,340);
  setfillstyle(1,WHITE);
  bar(170,140,470,200);
  bar(170,260,470,340);
  setfillstyle(1,0);
  bar(171,200,469,260);

  setcolor(0);
  settextstyle(8,0,4);
  outtextxy(285,145,"EXIT");

   setcolor(WHITE);
  settextstyle(0,0,2);
  outtextxy(225,220,"Are you sure?");

  setcolor(LIGHTBLUE);
  if(pnt==2)
  setcolor(DARKGRAY);
  circle(90+a,100+b,20);
  circle(90+a,100+b,21);
  setfillstyle(1,LIGHTBLUE);
  if(pnt==2)
  setfillstyle(1,DARKGRAY);
  sector(90+a,100+b,0,360,15,15);
  settextstyle(0,0,2);
  setcolor(WHITE);
  outtextxy(83+a,94+b,"O");

  setcolor(LIGHTRED);
  if(pnt==1)
  setcolor(DARKGRAY);
  circle(210+a,100+b,20);
  circle(210+a,100+b,21);
  setfillstyle(1,LIGHTRED);
  if(pnt==1)
  setfillstyle(1,DARKGRAY);
  sector(210+a,100+b,0,360,15,15);
  settextstyle(0,0,2);
  setcolor(WHITE);
  outtextxy(203+a,94+b,"X");
     setfillstyle(1,WHITE);
   ke=getch();

   if(pnt==1)
    {if(ke==77)
     {pnt=2;}
     else if(ke==13)
     {  settextstyle(0,0,1); return(1); }

    }

    else
    {if(ke==75)
     {pnt=1;}
     else if(ke==13)
     { settextstyle(0,0,1); return(2); }

    }
}

return(0); }


void graphic::opening()
{ int inc,i,a=190,j,b=100;

   for(i=0;i<32;i++) {
   cleardevice();
     for( inc=0;inc<8;inc++){
   setcolor(12);
   line(60+a-320+i*10,90+inc+b,140+a-320+i*10,170+inc+b);
   line(60+a-320+i*10,170+inc+b,140+a-320+i*10,90+inc+b);
   }
   setcolor(11);
   for( inc=-4;inc<3;inc+=1)
   circle(170+a+320-i*10,132+b,42+inc);
   delay(6);
   }

 for(i=0;i<20;i++) {
   cleardevice();
     for( inc=0;inc<8;inc++){
   setcolor(12);
   line(60+a-i,90+inc+b,140+a-i,170+inc+b);
   line(60+a-i,170+inc+b,140+a-i,90+inc+b);
   }
   setcolor(11);
   for( inc=-4;inc<3;inc+=1)
   circle(170+a+i,132+b,42+inc);
   delay(5);
   } delay(200);
  setcolor(WHITE);
  settextstyle(0,HORIZ_DIR,6);
  outtextxy(230,130,"M");   delay(200);
  outtextxy(281,130,"E");   delay(200);
  outtextxy(332,130,"G");   delay(200);
  outtextxy(383,130,"A");   delay(240);


 for(i=0;i<20;i++) {
   cleardevice();
     for( inc=0;inc<8;inc++){
   setcolor(12);
   line(60+a-20,90+inc+b-i*4,140+a-20,170+inc+b-i*4);
   line(60+a-20,170+inc+b-i*4,140+a-20,90+inc+b-i*4);
   }
   setcolor(11);
   for( inc=-4;inc<3;inc+=1)
   circle(170+a+20,132+b-i*4,42+inc);


  setcolor(WHITE);
  settextstyle(0,HORIZ_DIR,6);
  outtextxy(230,130-i*4,"M");
  outtextxy(281,130-i*4,"E");
  outtextxy(332,130-i*4,"G");
  outtextxy(383,130-i*4,"A");

  delay(1);
}



for(i=0;i<180;i++)
{ for(j=0;j<5;j++)
{arc(325,330,0,0+i,50+j);
arc(325,330,180,181+i,50+j); }
delay(4);    }

for(i=0;i<26;i++)
{
int points[6]={303+25-i,300+25-i,303+25-i,360-25+i,363-25+i,330};
fillpoly(3,points);
for(j=0;j<2;j++)
{line(275,330+j,275-i*30,330+j);
 line(375,330+j,375+i*30,330+j);}
delay(10);
}
int l1;
int l2;
int l3;
int l4;


for(i=0;i<10000;i++)
{
  l1=i%6;
  l2=(i+1)%6;
  l3=(i+2)%6;
  l4=(i+3)%6;
  settextstyle(0,HORIZ_DIR,6);
  setcolor(9+l1);
  outtextxy(230,130-19*4,"M");
  setcolor(9+l2);
  outtextxy(281,130-19*4,"E");
  setcolor(9+l3);
  outtextxy(332,130-19*4,"G");
  setcolor(9+l4);
  outtextxy(383,130-19*4,"A");
  setcolor(DARKGRAY);
  settextstyle(0,HORIZ_DIR,1);
  outtextxy(280,460,"Press any key");
  setcolor(WHITE);
  if(kbhit())
   break;

   delay(80);
} delay(100);


for(i=0;i<26;i++)
{ cleardevice();
    for( inc=0;inc<8;inc++){
   setcolor(12);
   line(60+a-20-i*30,90+inc+b-19*4,140+a-20-i*30,170+inc+b-19*4);
   line(60+a-20-i*30,170+inc+b-19*4,140+a-20-i*30,90+inc+b-19*4);
   }
   setcolor(11);
   for( inc=-4;inc<3;inc+=1)
   circle(170+a+20+i*30,132+b-19*4,42+inc);


  settextstyle(0,HORIZ_DIR,6);
  setcolor(9+l1);
  outtextxy(230,130-19*4-i*30,"M");
  setcolor(9+l2);
  outtextxy(281,130-19*4-i*30,"E");
  setcolor(9+l3);
  outtextxy(332,130-19*4-i*30,"G");
  setcolor(9+l4);
  outtextxy(383,130-19*4-i*30,"A");
setcolor(WHITE);
for(j=0;j<5;j++)
{arc(325,330,0,360,50+j);}
int points[6]={303+i*1.2,300+i*1.2,303+i*1.2,360-i*1.2,363-i*1.2,330};
fillpoly(3,points);
for(j=0;j<2;j++)
{line(275-25*30+i*30,330+j,275,330+j);
 line(375+25*30-i*30,330+j,375,330+j);
}
delay(8);

}
cleardevice();
for(j=0;j<5;j++)
{arc(325,330,0,360,50+j);}

delay(150);

for(i=0;i<30;i++)
{ cleardevice();
for(j=0;j<5;j++)
{arc(325,330,0,360,50+j+i*20);}
}

delay(150);
for(i=0;i<9;i++){ cleardevice();
setcolor(LIGHTRED);
settextstyle(0,HORIZ_DIR,6);
outtextxy(140-160+i*20,60,"MAIN");
setcolor(LIGHTCYAN);
settextstyle(0,HORIZ_DIR,6);
outtextxy(330+160-i*20,60,"MENU");
delay(10);
}
for(i=0;i<4;i++){ cleardevice();
setcolor(LIGHTRED);
settextstyle(0,HORIZ_DIR,6);
outtextxy(140-i*5,60,"MAIN");
setcolor(LIGHTCYAN);
settextstyle(0,HORIZ_DIR,6);
outtextxy(330+i*5,60,"MENU");
delay(20);
}
delay(100);
setcolor(8);
for(i=0;i<219;i++){
line(328-i,117,328+i,117);
line(328-i,118,328+i,118); delay(2);}
getch();
delay(100);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
setcolor(WHITE);
outtextxy(0+160,190-10,"      K     "); delay(100);
outtextxy(0+160,190-10,"     CK G   "); delay(100);
outtextxy(0+160,190-10,"    ICK GA  "); delay(100);
outtextxy(0+160,190-10,"   UICK GAM "); delay(100);
outtextxy(0+160,190-10,"  QUICK GAME"); delay(100);
setcolor(WHITE);
outtextxy(0+160,235-10+10,"      NA    "); delay(100);
outtextxy(0+160,235-10+10,"     RNAM   "); delay(100);
outtextxy(0+160,235-10+10,"    URNAME  "); delay(100);
outtextxy(0+160,235-10+10,"   OURNAMEN "); delay(100);
outtextxy(0+160,235-10+10,"  TOURNAMENT"); delay(100);
setcolor(WHITE);
outtextxy(0+160,280-10+20,"      EB    "); delay(100);
outtextxy(0+160,280-10+20,"     REBO   "); delay(100);
outtextxy(0+160,280-10+20,"    OREBOA  "); delay(100);
outtextxy(0+160,280-10+20,"   COREBOAR "); delay(100);
outtextxy(0+160,280-10+20,"  SCOREBOARD"); delay(100);

setcolor(WHITE);
outtextxy(0+230,325-10+30,"   EL "); delay(100);
outtextxy(0+230,325-10+30,"  HELP"); delay(100);
setcolor(WHITE);
outtextxy(0+230,370-10+40,"   XI "); delay(100);
outtextxy(0+230,370-10+40,"  EXIT"); delay(100);
setcolor(WHITE);
}


void graphic::loading()
{ int inc,j,i,a=565,b=57,c,l=250,k=180;

   for(c=-25;c<1;c++)
   { cleardevice();
    int points[10]={90-c*8,230+c*2,130-c*8,150-c*2,550+c*8,150-c*2,510+c*8,230+c*2,90-c*8,230+c*2};
    drawpoly(5,points);

    for( inc=-2;inc<4;inc++){
    setcolor(WHITE);
    line(41-322+8+a-c+l,95+b+inc+5+42+15-10-c+k,125+l+a-16-302-22+8-10+c,185+b+inc-5+42-10-10+c+k);
    line(35+16-322+8-10+a-c+l,185+b+inc-5+42-10-10+c+k,125+l+a-16-302-22+8-10+c,95+b+inc+5+42+15-10-c+k);
    }
    delay(10);
    }
   delay(100);

   for(i=0;i<91;i++)
   {
   int points[10]={90,230,130,150,130+i*4.66,150,90+i*4.66,230,90,230};
   fillpoly(5,points);
   setcolor(0);   settextstyle(0,HORIZ_DIR,5);
   outtextxy(160,175,"LOADING");
   setcolor(WHITE);
   settextstyle(0,HORIZ_DIR,1);
   sector(320+l,230+k,135,135-i,42,42);
   sector(320+l,230+k,225,225-i,42,42);
   sector(320+l,230+k,315,315-i,42,42);
   if(i>45)
   sector(320+l,230+k,360+45-i,360,42,42);
   else
   sector(320+l,230+k,45,45-i,42,42);
   delay(1);
   }
  delay(150);

  for(i=0;i<101;i++)
  {
  setcolor(WHITE);
  sector(320+l,230+k,0,360,42,42);
  setcolor(0);
  for(j=0;j<2;j++){
  arc(320+l,230+k,90-(i*3.6),90,28+j);
  }

  char per[4];
  sprintf(per,"%d%",i);
  outtextxy(312+l,230+k,per);

  setcolor(WHITE);
  if(i%50<=8)
   {if(i%50==1)
    {setfillstyle(1,WHITE);
     int points[10]={90,230,130,150,550,150,510,230,90,230};
     fillpoly(5,points);
    }
   setcolor(0);
   settextstyle(0,HORIZ_DIR,5);
   outtextxy(160,175,"LOADING");
   }
  else if(i%50<=16)
   {setcolor(0);
    settextstyle(0,HORIZ_DIR,5);
    outtextxy(160,175,"LOADING");
     setcolor(0);
     settextstyle(0,HORIZ_DIR,2);
     outtextxy(454,194,"x");
  }

  else if(i%50<=24)
  {setcolor(0);
    settextstyle(0,HORIZ_DIR,5);
    outtextxy(160,175,"LOADING");
     setcolor(0);
     settextstyle(0,HORIZ_DIR,2);
     outtextxy(454,194,"x x");
  }


  else if(i%50<=32)
   {if(i%50==25)
      {setfillstyle(1,WHITE);
       int points[10]={90,230,130,150,550,150,510,230,90,230};
       fillpoly(5,points);
     }

     setcolor(0);
    settextstyle(0,HORIZ_DIR,5);
    outtextxy(160,175,"LOADING");
    }

  else if(i%50<=40)
   {
    setcolor(0);
    settextstyle(0,HORIZ_DIR,5);
    outtextxy(160,175,"LOADING");
     setcolor(0);
     settextstyle(0,HORIZ_DIR,2);
     outtextxy(454,194,"o");
    }


  else if(i%50<=50)
   {setcolor(0);
    settextstyle(0,HORIZ_DIR,5);
    outtextxy(160,175,"LOADING");
     setcolor(0);
     settextstyle(0,HORIZ_DIR,2);
     outtextxy(454,194,"o o"); }
    settextstyle(0,HORIZ_DIR,1) ;
delay(35);
}

delay(50);

for(i=0;i<27;i++){
setcolor(WHITE);
sector(320+l,230+k,0,360,42,42);
setcolor(0);
for(j=0;j<3;j++)
{
arc(320+l,230+k,0,360,28+j-i*2);
}
delay(10);
}
for(i=0;i<6;i++)
{setcolor(0);
 setfillstyle(1,0);
 sector(320+l,230+k,0,360,108*i,80*i);

 delay(1);
} cleardevice();
delay(500);
 setfillstyle(1,WHITE);
 setcolor(WHITE);
  settextstyle(0,HORIZ_DIR,1) ;
}

void graphic::vs(char name1[20],char name2[20])
{ clrscr();
 cleardevice();
 int j;
 int p=40;
 int gap=639-((strlen(name2)*40)+p);
setcolor(WHITE);
for(int i=0;i<180;i++)
{ for(j=0;j<6;j++)
{arc(320,230,45,45+i,50+j);
arc(320,230,269-45,271-45+i,50+j); }
delay(4);    }
for(i=0;i<230;i++)
{for(j=0;j<4;j++)
 {line(325+35,225-35+j,325+35+i,225-35-i+j);
 line(315-34,235+34+j,315-i-34,235+i+34+j);}
 delay(1);
}
delay(100);


 setcolor(8);
  settextstyle(10,HORIZ_DIR,5);
  setcolor(DARKGRAY);
 outtextxy(285,180,"V");delay(200);
   setcolor(DARKGRAY);
 outtextxy(295,180," S");
 delay(300);


 setcolor(WHITE);


 for(i=0;i<15;i++){ cleardevice();
  setcolor(WHITE);
  for(j=0;j<6;j++)
 {circle(320,230,50+j); }
 for(j=0;j<4;j++)
 {line(325+35,225-35+j,325+35+230,225-35-230+j);
 line(315-34,235+34+j,315-230-34,235+230+34+j);}

   settextstyle(10,HORIZ_DIR,5);
  setcolor(DARKGRAY);
 outtextxy(285,180,"V");
   setcolor(DARKGRAY);
 outtextxy(295,180," S");
 if(i<12){
 settextstyle(0,HORIZ_DIR,5);
 setcolor(LIGHTRED);
 outtextxy(p,-50+(i*10),name1);
 setcolor(LIGHTCYAN);
 outtextxy(gap,479-(i*10),name2); delay(1); }
 else
 { int kn ;
  if(i==12)
  kn=11;
  else if(i==13)
  kn=10;
  else
  kn=9;
 settextstyle(0,HORIZ_DIR,5);
 setcolor(LIGHTRED);
 outtextxy(p,-50+(kn*10),name1);
 setcolor(LIGHTCYAN);
 outtextxy(gap,479-(kn*10),name2); delay(11); }


     }
skp:
int k=getch() ;
if(k!=13)
goto skp;

 for(i=0;i<10;i++){ cleardevice();
  setcolor(WHITE);
  for(j=0;j<6;j++)
 {circle(320,230,50+j); }
 for(j=0;j<4;j++)
 {line(325+35,225-35+j,325+35+230,225-35-230+j);
 line(315-34,235+34+j,315-230-34,235+230+34+j);}

   settextstyle(10,HORIZ_DIR,5);
  setcolor(DARKGRAY);
 outtextxy(285,180,"V");
   setcolor(DARKGRAY);
 outtextxy(295,180," S");

 settextstyle(0,HORIZ_DIR,5);
 setcolor(LIGHTRED);
 outtextxy(p,50-(i*10),name1);
 setcolor(LIGHTCYAN);
 outtextxy(gap,379+(i*10),name2); delay(2);     }

delay(290);
 cleardevice();
  setcolor(WHITE);
  for(j=0;j<6;j++)
 {circle(320,230,50+j); }
 for(j=0;j<4;j++)
 {line(325+35,225-35+j,325+35+230,225-35-230+j);
 line(315-34,235+34+j,315-230-34,235+230+34+j);}

  settextstyle(10,HORIZ_DIR,5);
  setcolor(DARKGRAY);
 outtextxy(285,180,"V");

 delay(290);

 cleardevice();
  setcolor(WHITE);
  for(j=0;j<6;j++)
 {circle(320,230,50+j); }
 for(j=0;j<4;j++)
 {line(325+35,225-35+j,325+35+230,225-35-230+j);
 line(315-34,235+34+j,315-230-34,235+230+34+j);}

  settextstyle(3,HORIZ_DIR,7);
for(i=0;i<78;i++)
 {cleardevice();
 for(j=0;j<6;j++)
 {circle(320,230,50+j); }
 for(j=0;j<4;j++)
 {line(325+35,225-35+j,325+35+230-i*3,225-35-230+j+i*3);
 line(315-34,235+34+j,315-230-34+i*3,235+230+34+j-i*3);}
 delay(1);

  }
  delay(120);
  for(i=0;i<30;i++){
  for(j=0;j<6;j++)
 {circle(320,230,50+j+(i*20)); }
 delay(1);
 cleardevice();
 }
 clrscr();
 cleardevice();
}

struct matrix
{int sg[3][3];
 int bg;
};

int checkbg(matrix a[3][3])
{ int k=3;
if(a[0][0].bg!=2&&a[0][1].bg!=2&&a[0][2].bg!=2&&a[1][0].bg!=2&&a[1][1].bg!=2&&a[1][2].bg!=2&&a[2][0].bg!=2&&a[2][1].bg!=2&&a[2][2].bg!=2)
k=2;
if(a[0][0].bg==0&&a[0][1].bg==0&&a[0][2].bg==0)
k=0;
if(a[0][0].bg==1&&a[0][1].bg==1&&a[0][2].bg==1)
k=1;
if(a[1][0].bg==0&&a[1][1].bg==0&&a[1][2].bg==0)
k=0;
if(a[1][0].bg==1&&a[1][1].bg==1&&a[1][2].bg==1)
k=1;
if(a[2][0].bg==0&&a[2][1].bg==0&&a[2][2].bg==0)
k=0;
if(a[2][0].bg==1&&a[2][1].bg==1&&a[2][2].bg==1)
k=1;
if(a[0][0].bg==0&&a[1][0].bg==0&&a[2][0].bg==0)
k=0;
if(a[0][0].bg==1&&a[1][0].bg==1&&a[2][0].bg==1)
k=1;
if(a[0][1].bg==0&&a[1][1].bg==0&&a[2][1].bg==0)
k=0;
if(a[0][1].bg==1&&a[1][1].bg==1&&a[2][1].bg==1)
k=1;

if(a[0][2].bg==0&&a[1][2].bg==0&&a[2][2].bg==0)
k=0;
if(a[0][2].bg==1&&a[1][2].bg==1&&a[2][2].bg==1)
k=1;
if(a[0][0].bg==0&&a[1][1].bg==0&&a[2][2].bg==0)
k=0;
if(a[0][0].bg==1&&a[1][1].bg==1&&a[2][2].bg==1)
k=1;
if(a[0][2].bg==0&&a[1][1].bg==0&&a[2][0].bg==0)
k=0;
if(a[0][2].bg==1&&a[1][1].bg==1&&a[2][0].bg==1)
k=1;
return (k);
}

int checksg(matrix a[3][3],int x,int y)
{ int k=2;
if(a[x][y].sg[0][0]==0&&a[x][y].sg[0][1]==0&&a[x][y].sg[0][2]==0)
k=0;
else if(a[x][y].sg[0][0]==1&&a[x][y].sg[0][1]==1&&a[x][y].sg[0][2]==1)
k=1;
if(a[x][y].sg[1][0]==0&&a[x][y].sg[1][1]==0&&a[x][y].sg[1][2]==0)
k=0;
else if(a[x][y].sg[1][0]==1&&a[x][y].sg[1][1]==1&&a[x][y].sg[1][2]==1)
k=1;
if(a[x][y].sg[2][0]==0&&a[x][y].sg[2][1]==0&&a[x][y].sg[2][2]==0)
k=0;
else if(a[x][y].sg[2][0]==1&&a[x][y].sg[2][1]==1&&a[x][y].sg[2][2]==1)
k=1;
if(a[x][y].sg[0][0]==0&&a[x][y].sg[1][0]==0&&a[x][y].sg[2][0]==0)
k=0;
else if(a[x][y].sg[0][0]==1&&a[x][y].sg[1][0]==1&&a[x][y].sg[2][0]==1)
k=1;
if(a[x][y].sg[0][1]==0&&a[x][y].sg[1][1]==0&&a[x][y].sg[2][1]==0)
k=0;
else if(a[x][y].sg[0][1]==1&&a[x][y].sg[1][1]==1&&a[x][y].sg[2][1]==1)
k=1;

if(a[x][y].sg[0][2]==0&&a[x][y].sg[1][2]==0&&a[x][y].sg[2][2]==0)
k=0;
else if(a[x][y].sg[0][2]==1&&a[x][y].sg[1][2]==1&&a[x][y].sg[2][2]==1)
k=1;
if(a[x][y].sg[0][0]==0&&a[x][y].sg[1][1]==0&&a[x][y].sg[2][2]==0)
k=0;
else if(a[x][y].sg[0][0]==1&&a[x][y].sg[1][1]==1&&a[x][y].sg[2][2]==1)
k=1;
if(a[x][y].sg[0][2]==0&&a[x][y].sg[1][1]==0&&a[x][y].sg[2][0]==0)
k=0;
else if(a[x][y].sg[0][2]==1&&a[x][y].sg[1][1]==1&&a[x][y].sg[2][0]==1)
k=1;

return (k);
}

int full(int a[3][3])
{ int k=0;
  for(int i=0;i<3;i++)
 { for(int j=0;j<3;j++)
  {if(a[i][j]==2)
   k=1; }}
   return (k);
}

void help()
{ lo1:

clrscr();
cleardevice();
 char ch;
 int ic,i,l;

  int ext=280;
setcolor(15);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
for(ic=-1;ic<3;ic++)
 line(30+ext,90+ic,30+320+ext,90+ic);//box top
  for(ic=-1;ic<3;ic++)
 line(350+ext+ic,90,350+ext+ic,90+320);//box right
  for(ic=-1;ic<3;ic++)
  line(350+ext,410+ic,350-320+ext,410+ic);//box bottom
  for(ic=-1;ic<3;ic++)
  line(30+ext+ic,410,30+ext+ic,410-320);//box left
  for(ic=-1;ic<3;ic++)
 {line(135+ext+ic,90,135+ext+ic,90+320);//vert 1
  line(245+ext+ic,90,245+ext+ic,90+320); //vert 2
  }for(ic=-1;ic<3;ic++)
  {line(30+ext,195+ic,30+320+ext,195+ic);//hori 1
  line(30+ext,305+ic,30+320+ext,305+ic);//hori 2
   }
  for(int j=0;j<=220;j+=110)   {
  for(int i=0;i<=220;i+=110)
  {
 line(65+i+ext,95+j,65+i+ext,95+90+j);//s vert  1
    line(95+i+ext,95+j,95+i+ext,95+90+j); //s vert  2

    line(35+i+ext,125+j,35+90+i+ext,125+j);// s hori 1
    line(35+i+ext,155+j,35+90+i+ext,155+j);// s hori 2
  }                             }
  setcolor(7);
  outtextxy(45+ext,75,"A");
  outtextxy(75+ext,75,"B");
  outtextxy(105+ext,75,"C");
  outtextxy(155+ext,75,"D");
  outtextxy(185+ext,75,"E");
  outtextxy(215+ext,75,"F");
  outtextxy(265+ext,75,"G");
  outtextxy(295+ext,75,"H");
  outtextxy(325+ext,75,"I");
  outtextxy(15+ext,105,"1");
  outtextxy(15+ext,135,"2");
  outtextxy(15+ext,165,"3");
  outtextxy(15+ext,215,"4");
  outtextxy(15+ext,245,"5");
  outtextxy(15+ext,275,"6");
  outtextxy(15+ext,325,"7");
  outtextxy(15+ext,355,"8");
  outtextxy(15+ext,385,"9");
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
setcolor(WHITE);
outtextxy(0,50+80,"1. Each turn, you mark one of the");
outtextxy(0,60+83,"   the small squares");
outtextxy(0,100+80,"2. When you get three X or O in a");
outtextxy(0,110+83,"   row on a small grid, you've won");
outtextxy(0,120+86,"   that grid");
outtextxy(0,160+80,"3. To win the game,you need to win ");
outtextxy(0,170+83,"   three small grids in a row");
outtextxy(0,220+80,"4. Use coordinates to mark the small");
outtextxy(0,230+83,"   squares");
outtextxy(0,270+80,"5. First move can be placed anywhere");
  setcolor(DARKGRAY);
  settextstyle(0,HORIZ_DIR,1);
  outtextxy(240,465,"use arrows to navigate");
  outtextxy(250,455,"Press Esc to return");
  setcolor(WHITE);

mrl:
int mr=getch();
if(mr!=77&&mr!=27)
goto mrl;
if(mr==27)
goto lo4;
lo2:
cleardevice();
ext=280;
setcolor(15);
for(ic=-1;ic<3;ic++)
 line(30+ext,90+ic,30+320+ext,90+ic);//box top
  for(ic=-1;ic<3;ic++)
 line(350+ext+ic,90,350+ext+ic,90+320);//box right
  for(ic=-1;ic<3;ic++)
  line(350+ext,410+ic,350-320+ext,410+ic);//box bottom
  for(ic=-1;ic<3;ic++)
  line(30+ext+ic,410,30+ext+ic,410-320);//box left
  for(ic=-1;ic<3;ic++)
 {line(135+ext+ic,90,135+ext+ic,90+320);//vert 1
  line(245+ext+ic,90,245+ext+ic,90+320); //vert 2
  }for(ic=-1;ic<3;ic++)
  {line(30+ext,195+ic,30+320+ext,195+ic);//hori 1
  line(30+ext,305+ic,30+320+ext,305+ic);//hori 2
   }
  for( j=0;j<=220;j+=110)   {
  for(i=0;i<=220;i+=110)
  {
 line(65+i+ext,95+j,65+i+ext,95+90+j);//s vert  1
    line(95+i+ext,95+j,95+i+ext,95+90+j); //s vert  2

    line(35+i+ext,125+j,35+90+i+ext,125+j);// s hori 1
    line(35+i+ext,155+j,35+90+i+ext,155+j);// s hori 2
  }                             }
  setcolor(7);
  outtextxy(45+ext,75,"A");
  outtextxy(75+ext,75,"B");
  outtextxy(105+ext,75,"C");
  outtextxy(155+ext,75,"D");
  outtextxy(185+ext,75,"E");
  outtextxy(215+ext,75,"F");
  outtextxy(265+ext,75,"G");
  outtextxy(295+ext,75,"H");
  outtextxy(325+ext,75,"I");
  outtextxy(15+ext,105,"1");
  outtextxy(15+ext,135,"2");
  outtextxy(15+ext,165,"3");
  outtextxy(15+ext,215,"4");
  outtextxy(15+ext,245,"5");
  outtextxy(15+ext,275,"6");
  outtextxy(15+ext,325,"7");
  outtextxy(15+ext,355,"8");
  outtextxy(15+ext,385,"9");

  setcolor(LIGHTRED);

  outtextxy(46+ext+(30*2)+(1*110),108+(30*1)+(1*110),"X");
  setcolor(LIGHTBLUE);
  for( j=0;j<3;j++)
  for( l=0;l<3;l++)
  outtextxy(46+ext+(30*j)+(2*110),108+(30*l)+(1*110)-1,".");
//6. your opponent doesn't get to pick which of the nine grids to blay on.that's determined
  // by your move
//7. Which ever square you pick,that's the grid your opponent plays on next
setcolor(WHITE);
 outtextxy(0,50+83,"6.Your opponent doesn't get to pick");
 outtextxy(0,50+96,"  which of the nine grids to play on.");
outtextxy(0,50+109,"  That's determined by your move");
outtextxy(0,150+80,"7.Which ever square you pick,that's");
outtextxy(0,150+93,"  the grid your opponent plays next");
  setcolor(DARKGRAY);
  settextstyle(0,HORIZ_DIR,1);
  outtextxy(240,465,"use arrows to navigate");
  outtextxy(250,455,"Press Esc to return");
  setcolor(WHITE);
  mrn:
 mr=getch();
 if(mr!=77&&mr!=75&&mr!=27)
 goto mrn;
 if(mr==27)
 goto lo4;
 if(mr==75)
 goto lo1;
 lo3:
 cleardevice();
 ext=280;
 setcolor(15);


for(ic=-1;ic<3;ic++)
 line(30+ext,90+ic,30+320+ext,90+ic);//box top
  for(ic=-1;ic<3;ic++)
 line(350+ext+ic,90,350+ext+ic,90+320);//box right
  for(ic=-1;ic<3;ic++)
  line(350+ext,410+ic,350-320+ext,410+ic);//box bottom
  for(ic=-1;ic<3;ic++)
  line(30+ext+ic,410,30+ext+ic,410-320);//box left
  for(ic=-1;ic<3;ic++)
 {line(135+ext+ic,90,135+ext+ic,90+320);//vert 1
  line(245+ext+ic,90,245+ext+ic,90+320); //vert 2
  }for(ic=-1;ic<3;ic++)
  {line(30+ext,195+ic,30+320+ext,195+ic);//hori 1
  line(30+ext,305+ic,30+320+ext,305+ic);//hori 2
   }
  for( j=0;j<=220;j+=110)   {
  for(i=0;i<=220;i+=110)
  {
 line(65+i+ext,95+j,65+i+ext,95+90+j);//s vert  1
    line(95+i+ext,95+j,95+i+ext,95+90+j); //s vert  2

    line(35+i+ext,125+j,35+90+i+ext,125+j);// s hori 1
    line(35+i+ext,155+j,35+90+i+ext,155+j);// s hori 2
  }                             }
  setcolor(7);
  outtextxy(45+ext,75,"A");
  outtextxy(75+ext,75,"B");
  outtextxy(105+ext,75,"C");
  outtextxy(155+ext,75,"D");
  outtextxy(185+ext,75,"E");
  outtextxy(215+ext,75,"F");
  outtextxy(265+ext,75,"G");
  outtextxy(295+ext,75,"H");
  outtextxy(325+ext,75,"I");
  outtextxy(15+ext,105,"1");
  outtextxy(15+ext,135,"2");
  outtextxy(15+ext,165,"3");
  outtextxy(15+ext,215,"4");
  outtextxy(15+ext,245,"5");
  outtextxy(15+ext,275,"6");
  outtextxy(15+ext,325,"7");
  outtextxy(15+ext,355,"8");
  outtextxy(15+ext,385,"9");

  setcolor(LIGHTRED);

  outtextxy(46+ext+(30*2)+(1*110),108+(30*1)+(1*110),"X");
  setcolor(LIGHTBLUE);
  for( j=0;j<3;j++)
  for( l=0;l<3;l++){ if(j==2&&l==2) continue;   //add continue function's header file
  outtextxy(46+ext+(30*j)+(2*110),108+(30*l)+(1*110)-1,".");
		       }

   outtextxy(46+ext+(30*2)+(2*110),108+(30*2)+(1*110),"O");
     setcolor(LIGHTRED);
  for( j=0;j<3;j++)
  for( l=0;l<3;l++)
  outtextxy(46+ext+(30*j)+(2*110),108+(30*l)+(2*110)-1,".");
// 8. and vice versa
//9. dots you see indicate your possible moves
//10.  if your opponent sends you to a grid that has no squares left to fill,
  // the opponent gets to choose which grid you get to play on,
setcolor(WHITE);
 outtextxy(0,50+83,"8.And vice versa");
  outtextxy(0,80+96,"9.Dots you see indicate your");
 outtextxy(0,80+109,"  possible moves");
 outtextxy(0,150+80,"10.If your opponent sends you to ");
 outtextxy(0,150+93,"   a grid that has no squares left,");
outtextxy(0,150+106,"   to fill,the opponent gets to ");
   outtextxy(0,150+119,"   choose which grid you get to ");
outtextxy(0,150+119+13,"   play on.");

  setcolor(DARKGRAY);
  settextstyle(0,HORIZ_DIR,1);
  outtextxy(240,465,"use arrows to navigate");
  outtextxy(250,455,"Press Esc to return");
  setcolor(WHITE);
mrx:
mr=getch();
if(mr!=27&&mr!=75)
goto mrx;
if(mr==75)
goto lo2;
lo4:
clrscr();
cleardevice();

}

int ext=280;

class game
{matrix mat[3][3];

  public:
  char p1[20];char p2[20] ;
  void cons();
  void display(int indx,int indy,int trn);
  int input();
  int input1();
  int winchk(int x, int y,int i,int cnt) ;
  int wincho(int ox,int oy,int x, int y,int cnt);
  int lose(int x,int y);
  int winning(int ox,int oy,int x, int y);
  int choose(int ox,int oy,int cse);
  void navigate(int i)
  { int a,b;
   if(i==2)
  { a=120;b=318;}
  else if(i==3)
  { a=120;b=368;
    }
    else if(i==1)
    { a=150;b=265;
      }



   line (11+a,10+b,11+a,20+b);
   line (0+a,15+b,11+a,10+b);
   line (0+a,15+b,11+a,20+b);
   floodfill(4+a,15+b,WHITE);
  }
  };
int game::choose(int ox,int oy,int cse)
{int ln,jn,chox,choy,count1,count2,count3;
//chox=-1;
//choy=0;

re:
chox++;
//if(chox==3)
//{choy++; chox=0;}
chox=random(3);
choy=random(3);


if(cse==0){

if(mat[ox][oy].sg[chox][choy]!=2)
goto re;
if(winning(ox,oy,chox,choy)==2)goto re;
else if(winning(ox,oy,chox,choy)==1)goto final;
count1=0;
for(ln=0;ln<3;ln++)
{for(jn=0;jn<3;jn++)
{if(mat[ox][oy].sg[ln][jn]==1)
 count1++;
 else if(mat[ox][oy].sg[ln][jn]==0)
 count1++;
else if(winchk(ln,jn,1,1)==1)
 count1++;
}}

if(count1==9)
{goto final;  }

count3=0;
for(ln=0;ln<3;ln++)
{for(jn=0;jn<3;jn++)
{if(mat[ox][oy].sg[ln][jn]!=2)
 count3++;


}}

if(count3==8)
{goto final;}  }
if(cse==1)
{count1=0;
for(ln=0;ln<3;ln++)
{for(jn=0;jn<3;jn++)
{ if(full(mat[ln][jn].sg)==0)
  count1++;
else if(winchk(ln,jn,1,1)==1)
 count1++;
}}

if(count1==9)
{goto final;  }

}

if(lose(chox,choy)==1)
goto re;
if(cse==0){
if(wincho(ox,oy,chox,choy,1)==2)
goto re;
if(wincho(ox,oy,chox,choy,1)==3)
goto final;
if(wincho(ox,oy,chox,choy,2)==2)
goto re;
if(wincho(ox,oy,chox,choy,2)==3)
goto final;
if(wincho(ox,oy,chox,choy,3)==2)
goto re;
if(wincho(ox,oy,chox,choy,3)==3)
goto final;
if(wincho(ox,oy,chox,choy,4)==2)
goto re;
if(wincho(ox,oy,chox,choy,4)==3)
goto final;
 }
count2=0;
//check if all grids are possible to win
for(ln=0;ln<3;ln++)
{for(jn=0;jn<3;jn++)
{if(winchk(ln,jn,1,1)==1)
 count2++;
 else if(full(mat[ln][jn].sg)==0)
 count2++;
}}
if(count2==9)
goto final;
if(winchk(chox,choy,1,1)==1)
goto re;

final:
int choice;
if(cse==0)
choice=(((ox*3)+chox)*10)+((oy*3)+choy);
if(cse==1)
choice=(chox*30)+(choy*3);

return(choice);

}
int game::winning(int ox,int oy,int x, int y)
{int k=0;
if(mat[ox][oy].bg==2)
 {if(winchk(ox,oy,0,1)==1){
mat[ox][oy].bg=0;
 if(checkbg(mat)==0)
 k=1;
 else k=0;
  mat[ox][oy].bg=2;
		      }
if(k==1)
{ if(wincho(ox,oy,x,y,1)==1)
 k=1;
else
k=2;
}

}
return(k);
}

int game::lose(int x,int y)
{int k=0;int bu ;
if(mat[x][y].bg==2)
{
if(winchk(x,y,1,1)==1)
{
mat[x][y].bg=1;
 if(checkbg(mat)==1)
 k=1;
 mat[x][y].bg=2;

}     }
return(k);
}
int game::wincho(int ox,int oy,int x, int y,int cnt)
{int k=1;
if(mat[ox][oy].bg==2)
{ if(lose(x,y)!=1) {
if(winchk(ox,oy,0,cnt)==1)
{ mat[ox][oy].sg[x][y]=0;
 if(checksg(mat,ox,oy)==0)
 k=3;
 else
 k=2;
  mat[ox][oy].sg[x][y]=2;
}   }     }
return(k);
}
int game::winchk(int x,int y,int i,int cnt)
{ int ret=0; int c=0;
if(mat[x][y].bg==2){
for(int l=0;l<3;l++)
{int xm=0,nm=0,xr=0,nr=0,xl=0,nl=0,xc=0,nc=0;
for(int k=0;k<3;k++)
{if(mat[x][y].sg[l][k]==i)
xm+=1;
if(mat[x][y].sg[k][l]==i)
xc+=1;
if(mat[x][y].sg[l][k]==2)
nm+=1;
if(mat[x][y].sg[k][l]==2)
nc+=1;
if(l==1){
if(mat[x][y].sg[k][k]==i)
xl+=1;
if(mat[x][y].sg[k][k]==2)
nl+=1 ;
if(mat[x][y].sg[k][2-k]==i)
xr+=1;
if(mat[x][y].sg[k][2-k]==2)
nr+=1 ;
	 }

}
if(xm==2&&nm==1)
c++;
if(c==cnt)
{ret=1;break;}
if(l==1)
{if(xl==2&&nl==1)
c++;
if(c==cnt)
{ret=1;break;}
if(xr==2&&nr==1)
c++;
if(c==cnt)
{ret=1;break;}  }
if(xc==2&&nc==1)
c++;
if(c==cnt)
{ret=1;break;}
} }
return(ret);
}
void game::display(int indx,int indy,int trn)
  {char ch;
    int ic;
    int extr=50;



setcolor(15);


for(ic=-1;ic<3;ic++)
 line(30+ext,90+ic,30+320+ext,90+ic);//box top
  for(ic=-1;ic<3;ic++)
 line(350+ext+ic,90,350+ext+ic,90+320);//box right
  for(ic=-1;ic<3;ic++)
  line(350+ext,410+ic,350-320+ext,410+ic);//box bottom
  for(ic=-1;ic<3;ic++)
  line(30+ext+ic,410,30+ext+ic,410-320);//box left
  for(ic=-1;ic<3;ic++)
 {line(135+ext+ic,90,135+ext+ic,90+320);//vert 1
  line(245+ext+ic,90,245+ext+ic,90+320); //vert 2
  }for(ic=-1;ic<3;ic++)
  {line(30+ext,195+ic,30+320+ext,195+ic);//hori 1
  line(30+ext,305+ic,30+320+ext,305+ic);//hori 2
   }
  for(int j=0;j<=220;j+=110)   {
  for(int i=0;i<=220;i+=110)
  {
 line(65+i+ext,95+j,65+i+ext,95+90+j);//s vert  1
    line(95+i+ext,95+j,95+i+ext,95+90+j); //s vert  2

    line(35+i+ext,125+j,35+90+i+ext,125+j);// s hori 1
    line(35+i+ext,155+j,35+90+i+ext,155+j);// s hori 2
  }                             }
  setcolor(7);                 int inc;
  outtextxy(45+ext,75,"A");
  outtextxy(75+ext,75,"B");
  outtextxy(105+ext,75,"C");
  outtextxy(155+ext,75,"D");
  outtextxy(185+ext,75,"E");
  outtextxy(215+ext,75,"F");
  outtextxy(265+ext,75,"G");
  outtextxy(295+ext,75,"H");
  outtextxy(325+ext,75,"I");
  outtextxy(15+ext,105,"1");
  outtextxy(15+ext,135,"2");
  outtextxy(15+ext,165,"3");
  outtextxy(15+ext,215,"4");
  outtextxy(15+ext,245,"5");
  outtextxy(15+ext,275,"6");
  outtextxy(15+ext,325,"7");
  outtextxy(15+ext,355,"8");
  outtextxy(15+ext,385,"9");
  settextstyle(1,HORIZ_DIR,1);
   outtextxy(18+extr,320,"Help");
   outtextxy(18+extr,370,"Exit");
   settextstyle(1,HORIZ_DIR,1);
   int xin=38;
   int yin=-15;

   if(trn==1||trn==3)
   {

   setcolor(LIGHTRED);
   outtextxy(extr+xin,230+yin+12,p1) ;
     for( inc=-2;inc<4;inc++){
   setcolor(12);
   line(35+ext+16-322+extr+xin+8-10,95+yin+inc+5+42+15-10,125+ext-16-302+extr-22+8-10+xin,185+inc-5+42-10+yin-10);
   line(35+ext+16-322+extr+xin+8-10,185+yin+inc-5+42-10-10,125+ext-16-302+extr-22+8+xin-10,95+inc+5+42+15+yin-10);
   }

   }
   else { setcolor(LIGHTBLUE);
   outtextxy(extr+xin,230+yin+12,p2)  ;
   for( inc=-2;inc<2;inc+=1)                 {
      circle(60+extr+xin-25,177+yin,38+inc);  }
	 }
    settextstyle(11,HORIZ_DIR,20);
   int a,b;
   for( a=0;a<3;a++){
   for( b=0;b<3;b++){
    setcolor(9);
   if(mat[a][b].bg==0)
     { for( inc=-2;inc<2;inc+=1)
      circle(80+(a*110)+ext,140+(b*110),40+inc);


  }
   else if(mat[a][b].bg==1)
   {
   for( inc=-2;inc<4;inc++){
   setcolor(12);
   line(35+(a*110)+ext+5,95+inc+(b*110)+5,125+(a*110)+ext-5,185+inc+(b*110)-5);
   line(35+(a*110)+ext+5,185+inc+(b*110)-5,125+(a*110)+ext-5,95+inc+(b*110)+5);
   }
   }

    setcolor(WHITE);
   }}

   for( a=0;a<3;a++){
   for( b=0;b<3;b++){ int clchk;  if(checksg(mat,a,b)==0||checksg(mat,a,b)==1) clchk=1;else clchk=2;

   for(int c=0;c<3;c++) {
   for(int d=0;d<3;d++)
   { int x=46+ext+(30*c)+(a*110);
     int y=108+(30*d)+(b*110) ;
   if(mat[a][b].sg[c][d]==1)
     {setcolor(LIGHTRED);
     if(clchk==1)setcolor(DARKGRAY);
     outtextxy(x,y,"X"); }
     else if(mat[a][b].sg[c][d]==0)
   { setcolor(LIGHTBLUE);if(clchk==1)setcolor(DARKGRAY); outtextxy(x,y,"O"); }
     else if(a==indx&&b==indy&&mat[a][b].sg[c][d]==2)
     {if(trn==1){setcolor(LIGHTRED);
     outtextxy(x,y-1,".");   }
      else if (trn==0){ setcolor(LIGHTBLUE);
      outtextxy(x,y-1,".");  }
     }
     else if(mat[a][b].sg[c][d]==2)
     outtextxy(x,y," ");

      setcolor(WHITE);

   }}}}

  }


void game::cons()
  {
  for(int q=0;q<3;q++){
  for(int a=0;a<3;a++){
  mat[q][a].bg=2;
  for(int b=0;b<3;b++)
  {for(int c=0;c<3;c++)
    mat[q][a].sg[b][c]=2;
  }
  }} }


  int game::input()
  {
 int i;

 gra.loading();
   clrscr();
   cleardevice();

   gra.vs(p1,p2);
    settextstyle(0,HORIZ_DIR,1);
    int ic;
    setcolor(15);
  for(i=0;i<=320;i++)
  { for(ic=-1;ic<3;ic++) line(30+ext,90+ic,30+i+ext,90+ic);delay(2);}//box top
  for(i=0;i<=320;i++)
 { for(ic=-1;ic<3;ic++) line(350+ext+ic,90,350+ext+ic,90+i);delay(2); }//box right
   for(i=0;i<=320;i++)
  { for(ic=-1;ic<3;ic++) line(350+ext,410+ic,350-i+ext,410+ic);delay(2); }//box bottom
   for(i=0;i<=320;i++)
   { for(ic=-1;ic<3;ic++)line(30+ext+ic,410,30+ext+ic,410-i);delay(2); }//box left
   for(i=0;i<=320;i++)
  {  for(ic=-1;ic<3;ic++)line(135+ext+ic,90,135+ic+ext,90+i);//vert 1
    for(ic=-1;ic<3;ic++)line(245+ext+ic,90,245+ic+ext,90+i);delay(2); }//vert 2
   for(i=0;i<=320;i++)
  { for(ic=-1;ic<3;ic++)line(30+ext,195+ic,30+i+ext,195+ic);//hori 1
   for(ic=-1;ic<3;ic++)line(30+ext,305+ic,30+i+ext,305+ic);delay(2); }//hori 2

   for(int j=0;j<=220;j+=110)   {
   for(int i=0;i<=220;i+=110)
   { for(int k=0;k<=90;k++)
  { line(65+i+ext,95+j,65+i+ext,95+k+j);//s vert  1
     line(95+ext+i,95+j,95+i+ext,95+k+j);delay(2);} //s vert  2
     for(int l=0;l<=90;l++){
    line(35+i+ext,125+j,35+l+i+ext,125+j);// s hori 1
     line(35+i+ext,155+j,35+l+i+ext,155+j);delay(2);}// s hori 2
   }                             } setcolor(7);
   outtextxy(45+ext,75,"A"); delay(100);
   outtextxy(75+ext,75,"B");   delay(100);
   outtextxy(105+ext,75,"C");  delay(100);
  outtextxy(155+ext,75,"D");  delay(100);
   outtextxy(185+ext,75,"E");  delay(100);
   outtextxy(215+ext,75,"F");  delay(100);
   outtextxy(265+ext,75,"G");  delay(100);
  outtextxy(295+ext,75,"H");  delay(100);
  outtextxy(325+ext,75,"I");  delay(100);
   outtextxy(15+ext,105,"1");  delay(100);
   outtextxy(15+ext,135,"2");  delay(100);
   outtextxy(15+ext,165,"3");  delay(100);
   outtextxy(15+ext,215,"4");  delay(100);
   outtextxy(15+ext,245,"5");  delay(100);
   outtextxy(15+ext,275,"6");  delay(100);
   outtextxy(15+ext,325,"7");  delay(100);
   outtextxy(15+ext,355,"8");  delay(100);
  outtextxy(15+ext,385,"9");  delay(100);

 setcolor(WHITE);
  settextstyle(1,HORIZ_DIR,1);

    outtextxy(18+50,320,"H");        delay(150);
   outtextxy(18+50,320,"He");       delay(150);
   outtextxy(18+50,320,"Hel");      delay(150);
   outtextxy(18+50,320,"Help");     delay(150);
   outtextxy(18+50,370,"E");        delay(150);
   outtextxy(18+50,370,"Ex");       delay(150);
   outtextxy(18+50,370,"Exi");      delay(150);
   outtextxy(18+50,370,"Exit");     delay(150);
       settextstyle(0,HORIZ_DIR,1) ;



  setcolor(15);
  clrscr();
  cleardevice();
  cons();
   i=1;
   int wnr;
  int a,b,c,o;
   while(i<81)
  {int pnt=1;



   invalid:
    invalid1:
   clrscr();
   cleardevice();
    int trn;
    if(i==1)
     trn=3;
    else
     trn=i%2;
    display((o/10)%3,(o%10)%3,trn);
    int kl=0;
    while(kl<100)
    {int ke;   navigate(pnt);
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n        CONTINUE";
    ke=getch();
    clrscr();
    cleardevice();

    if(pnt==1)
    {if(ke==80)
     {pnt=2;}
     else if(ke==13)
     {break;  }
      kl++;
    }
    else if(pnt==2)
    {if(ke==80)
    {pnt=3;}
    else if(ke==13)
    {help();  }
    else if(ke==72)
   { pnt=1;  }
    }
    else if(pnt==3)
    {if(ke==72)
    { pnt=2;}
     else if(ke==13)
    {
    if(gra.confirm()==1)
     { return(3);}
     clrscr();
     cleardevice();
     display((o/10)%3,(o%10)%3,trn);
     }

     }
    display((o/10)%3,(o%10)%3,trn);
    }
display((o/10)%3,(o%10)%3,trn);
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n        ENTER COORDINATES:";
 char ch[2];
 gets(ch);
 if(isalpha(ch[0])&&isdigit(ch[1]))
    {
   ch[0]= tolower(ch[0]);
    if((int)ch[0]>105)
    goto invalid;
    c=(((int)ch[0]-97)*10)+((int)ch[1]-49);

    }
    else
    goto invalid;

 if (i!=1)
 {

 if((o/10)%3!=c/30||(o%10)%3!=(c%10)/3)
  goto invalid1;
 }

     o=c;

   a=o/10;
   b=o%10;




   if(o==100)
   exit(0);
   if(mat[a/3][b/3].sg[a%3][b%3]!=2)
   goto invalid;
  int c=i%2;

   mat[a/3][b/3].sg[a%3][b%3]=c;
   if(checksg(mat,a/3,b/3)==0&&mat[a/3][b/3].bg==2)
   mat[a/3][b/3].bg=0 ;

   if(checksg(mat,a/3,b/3)==1&&mat[a/3][b/3].bg==2)
   mat[a/3][b/3].bg=1;
   invalid2:

  if(full(mat[a%3][b%3].sg)==0)
  {int temp1;clrscr();
  cleardevice();
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n   ENTER THE SMALL GRID:";
  display((o/10)%3,(o%10)%3,i%2);

    char Ph[2];
 gets(Ph);
 if(isalpha(Ph[0])&&isdigit(Ph[1]))
    {
   ch[0]= tolower(Ph[0]);
    if((int)Ph[0]>105)
    goto invalid2;
    temp1=(((int)Ph[0]-97)*10)+((int)Ph[1]-49);
   int temp2=((temp1/10)/3)*10+((temp1%10)/3);
    o=temp2;
    }
    else
    goto invalid2;

  }
   wnr=checkbg(mat);
   if(wnr!=3)
   break;
   i++;
   }
  return(wnr);}

 int game::input1()
  {
 int i;

  gra.loading();
   clrscr();
   cleardevice();

    gra.vs(p1,p2);
    settextstyle(0,HORIZ_DIR,1);
    int ic;

    setcolor(15);
  for(i=0;i<=320;i++)
  { for(ic=-1;ic<3;ic++) line(30+ext,90+ic,30+i+ext,90+ic);delay(2);}//box top
  for(i=0;i<=320;i++)
 { for(ic=-1;ic<3;ic++) line(350+ext+ic,90,350+ext+ic,90+i);delay(2); }//box right
   for(i=0;i<=320;i++)
  { for(ic=-1;ic<3;ic++) line(350+ext,410+ic,350-i+ext,410+ic);delay(2); }//box bottom
   for(i=0;i<=320;i++)
   { for(ic=-1;ic<3;ic++)line(30+ext+ic,410,30+ext+ic,410-i);delay(2); }//box left
   for(i=0;i<=320;i++)
  {  for(ic=-1;ic<3;ic++)line(135+ext+ic,90,135+ic+ext,90+i);//vert 1
    for(ic=-1;ic<3;ic++)line(245+ext+ic,90,245+ic+ext,90+i);delay(2); }//vert 2
   for(i=0;i<=320;i++)
  { for(ic=-1;ic<3;ic++)line(30+ext,195+ic,30+i+ext,195+ic);//hori 1
   for(ic=-1;ic<3;ic++)line(30+ext,305+ic,30+i+ext,305+ic);delay(2); }//hori 2

   for(int j=0;j<=220;j+=110)   {
   for(int i=0;i<=220;i+=110)
   { for(int k=0;k<=90;k++)
  { line(65+i+ext,95+j,65+i+ext,95+k+j);//s vert  1
     line(95+ext+i,95+j,95+i+ext,95+k+j);delay(2);} //s vert  2
     for(int l=0;l<=90;l++){
    line(35+i+ext,125+j,35+l+i+ext,125+j);// s hori 1
     line(35+i+ext,155+j,35+l+i+ext,155+j);delay(2);}// s hori 2
   }                             } setcolor(7);
   outtextxy(45+ext,75,"A"); delay(100);
   outtextxy(75+ext,75,"B");   delay(100);
   outtextxy(105+ext,75,"C");  delay(100);
  outtextxy(155+ext,75,"D");  delay(100);
   outtextxy(185+ext,75,"E");  delay(100);
   outtextxy(215+ext,75,"F");  delay(100);
   outtextxy(265+ext,75,"G");  delay(100);
  outtextxy(295+ext,75,"H");  delay(100);
  outtextxy(325+ext,75,"I");  delay(100);
   outtextxy(15+ext,105,"1");  delay(100);
   outtextxy(15+ext,135,"2");  delay(100);
   outtextxy(15+ext,165,"3");  delay(100);
   outtextxy(15+ext,215,"4");  delay(100);
   outtextxy(15+ext,245,"5");  delay(100);
   outtextxy(15+ext,275,"6");  delay(100);
   outtextxy(15+ext,325,"7");  delay(100);
   outtextxy(15+ext,355,"8");  delay(100);
  outtextxy(15+ext,385,"9");  delay(100);

 setcolor(WHITE);
  settextstyle(1,HORIZ_DIR,1);

    outtextxy(18+50,320,"H");        delay(150);
   outtextxy(18+50,320,"He");       delay(150);
   outtextxy(18+50,320,"Hel");      delay(150);
   outtextxy(18+50,320,"Help");     delay(150);
   outtextxy(18+50,370,"E");        delay(150);
   outtextxy(18+50,370,"Ex");       delay(150);
   outtextxy(18+50,370,"Exi");      delay(150);
   outtextxy(18+50,370,"Exit");     delay(150);
       settextstyle(0,HORIZ_DIR,1) ;



  setcolor(15);
  clrscr();
  cleardevice();
  cons();
   i=1;
   int wnr;
  int a,b,c,o;
   while(i<81)
  {int pnt=1;



   invalid4:
    invalid5:
   clrscr();
   cleardevice();
    int trn;
    if(i==1)
     trn=3;
    else
     trn=i%2;
    display((o/10)%3,(o%10)%3,trn);
    int kl=0;
    if(i%2==1){
    while(kl<100)
    {int ke;   navigate(pnt);
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n        CONTINUE";
    ke=getch();
    clrscr();
    cleardevice();

    if(pnt==1)
    {if(ke==80)
     {pnt=2;}
     else if(ke==13)
     {break;  }
      kl++;
    }
    else if(pnt==2)
    {if(ke==80)
    {pnt=3;}
     else if(ke==13)
     {help();}
    else if(ke==72)
   { pnt=1;  }
    }
    else if(pnt==3)
    {if(ke==72)
    { pnt=2;}
     else if(ke==13)
    {if(gra.confirm()==1)
     { return(3);}
     clrscr();
     cleardevice();
     display((o/10)%3,(o%10)%3,trn);
      }
    }
    display((o/10)%3,(o%10)%3,trn);
    }
display((o/10)%3,(o%10)%3,trn);
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n        ENTER COORDINATES:";
 char ch[2];
 gets(ch);
 if(isalpha(ch[0])&&isdigit(ch[1]))
    {
   ch[0]= tolower(ch[0]);
    if((int)ch[0]>105)
    goto invalid4;
    c=(((int)ch[0]-97)*10)+((int)ch[1]-49);

    }
    else
    goto invalid4;

 if (i!=1)
 {

 if((o/10)%3!=c/30||(o%10)%3!=(c%10)/3)
  goto invalid5;
 }
 }
if(i%2==0)
{clrscr();
  cleardevice();
c=choose((o/10)%3,(o%10)%3,0) ;
display((o/10)%3,(o%10)%3,trn);
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n        THINKING...";delay(1000);
}
     o=c;

   a=o/10;
   b=o%10;




   if(mat[a/3][b/3].sg[a%3][b%3]!=2)
   goto invalid4;
  int kc=i%2;

   mat[a/3][b/3].sg[a%3][b%3]=kc;


   if(checksg(mat,a/3,b/3)==0&&mat[a/3][b/3].bg==2)
   mat[a/3][b/3].bg=0 ;

   if(checksg(mat,a/3,b/3)==1&&mat[a/3][b/3].bg==2)
   mat[a/3][b/3].bg=1;

   invalid3:

  if(full(mat[a%3][b%3].sg)==0)
  {int temp1;clrscr();
  cleardevice();
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n   ENTER THE SMALL GRID:";
  display((o/10)%3,(o%10)%3,i%2);
 if(i%2==1){
    char Ph[2];
 gets(Ph);
 if(isalpha(Ph[0])&&isdigit(Ph[1]))
    {
   Ph[0]= tolower(Ph[0]);
    if((int)Ph[0]>105)
    goto invalid3;
    temp1=(((int)Ph[0]-97)*10)+((int)Ph[1]-49);
   int temp2=((temp1/10)/3)*10+((temp1%10)/3);
    o=temp2;
    if(full(mat[(o/10)%3][(o%10)%3].sg)==0)
    goto invalid3;
    }
    else
    goto invalid3;}


   if(i%2==0)
{int temp3;
clrscr();
  cleardevice();
temp3=choose(0,0,1) ;
o=((temp3/10)/3)*10+((temp3%10)/3);
 if(full(mat[(o/10)%3][(o%10)%3].sg)==0)
    goto invalid3;
display((o/10)%3,(o%10)%3,trn);
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n        THINKING..."; delay(1000);
}
  }

   wnr=checkbg(mat);
   if(wnr!=3)
   break;
   i++;
   }
  return(wnr);}

 class pdetails
{
public:
int win,lose,draw,match;
char name[20];
void modify(int i);
} ;
void pdetails::modify(int i)
{
int m,l,n,p;
if(i==0)
{m=1;l=0;n=0;p=1; }
else if(i==1)
{m=0;l=1;n=0;p=1; }
else
{m=0;l=0;n=1;p=1;}
win=win+m;
lose=lose+l;
draw=draw+n;
match=match+p;
}
 class scoreboard
{
public:
int search(char rn[]);
void update(char ch1[20],char ch2[20],int lrm);

void initialize()
{
fstream x("sb.dat",ios::out|ios::noreplace|ios::binary);
x.close();
}
void display();
};
void scoreboard::display()
{  clrscr();
cleardevice();
int i=0;
pdetails s;
fstream lov("sb.dat",ios::in|ios::binary);
while(!lov.eof())
{ char msg[3];
  sprintf(msg,"%d",i);
  char mw[3];
  sprintf(mw,"%d",s.win);
   char ml[3];
  sprintf(ml,"%d",s.lose);
   char mm[3];
  sprintf(mm,"%d",s.match);
    setcolor(DARKGRAY);
   line(20,100,630,100);
   line(20,100-1,630,100-1);
   line(20,135,630,135);
   line(20,135+1,630,135+1);
   line(20,460,630,460);
   line(20,460+1,630,460+1);
   line(20,100,20,460);
   line(20-1,100,20-1,460);
   line(630,100,630,460);
   line(630-1,100,630-1,460);
   line(120,100,120,460);
   line(270,100,270,460);
   line(370,100,370,460);
   line(480,100,480,460);
   setcolor(DARKGRAY);
   settextstyle(0,HORIZ_DIR,1);
   outtextxy(260,466,"Press Esc to return");
   setcolor(WHITE);

   setcolor(7);
   settextstyle(3,HORIZ_DIR,7);
   outtextxy(135,10,"SCOREBOARD");

if(i>0){
 settextstyle(0,HORIZ_DIR,2);
 setcolor(LIGHTBLUE);
 outtextxy(160,110,"NAME");
 outtextxy(380,110,"LOSSES");
 setcolor(LIGHTRED);
 outtextxy(40,110,"S.NO");
 outtextxy(290,110,"WINS");
 outtextxy(505,110,"PLAYED");
 setcolor(WHITE);
 settextstyle(0,HORIZ_DIR,1);
 outtextxy(60,120+(i)*30,msg);
 outtextxy(150,120+(i)*30,s.name);
 outtextxy(320,120+(i)*30,mw);
 outtextxy(420,120+(i)*30,ml);
 outtextxy(550,120+(i)*30,mm);

 }
lov.read((char*)&s,sizeof(s));

  i++;
}
lov.close();
lar:
int fg=getch();
if(fg!=27)
goto lar;
}
int scoreboard::search(char rn[])
{
int ret=0;pdetails s;
fstream x("sb.dat",ios::in|ios::binary);
while(!x.eof())
{
x.read((char*)&s,sizeof(s));
if(strcmp(rn,s.name)==0)
{
ret=1;
break;
}
}
x.close();
return(ret);
}

void scoreboard::update(char ch1[20],char ch2[20],int lrm)
{
pdetails s1,s2;
randomize();

int r1,r2;
int res=lrm;

if(res==0)
{r1=0;r2=1; }
else if(res==1)
{r1=1;r2=0;}
else
{r1=2;r2=2;}
getch();
if(search(ch1)==1)
{
long pos;
fstream x("sb.dat",ios::in|ios::out|ios::binary);
while(!x.eof())
{
pos=x.tellg();
x.read((char*)&s1,sizeof(s1));
if(strcmpi(ch1,s1.name)==0)
{
s1.modify(r1);
x.seekg(pos);
x.write((char*)&s1,sizeof(s1));
break;
}
}
x.close();
}
else
{
strcpy(s1.name,ch1);
if(r1==0)
{
s1.win=1;
s1.lose=0;
s1.draw=0;
s1.match=1;
}
else if( r1==1)
{
s1.win=0;
s1.lose=1;
s1.draw=0;
s1.match=1;
}
else
{
s1.win=0;s1.lose=0;s1.match=1;
s1.draw=1;
}
fstream x("sb.dat",ios::app|ios::binary);
x.write((char*)&s1,sizeof(s1));
}
if(search(ch2)==1)
{
long pos;
fstream x("sb.dat",ios::in|ios::out|ios::binary);
while(!x.eof())
{
pos=x.tellg();
x.read((char*)&s2,sizeof(s2));
if(strcmp(ch2,s2.name)==0)
{
s1.modify(r2);
x.seekg(pos);
x.write((char*)&s2,sizeof(s2));
break;
}
}
x.close();
}
else
{
strcpy(s2.name,ch2);
if(r2==0)
{
s2.win=1;
s2.lose=0;
s2.draw=0;
s2.match=1;
}
else if( r2==0)
{
s2.win=0;
s2.lose=1;
s2.draw=0;
s2.match=1;
}
else
{
s2.win=0;s2.lose=0;s2.match=1;
s2.draw=1;
}
fstream x("sb.dat",ios::app|ios::binary);
x.write((char*)&s2,sizeof(s2));
}}



 class quickgame
 {
  int winner;
 public:
  void twoplayer()
  {game g;
   scoreboard s;
   s.initialize();
   settextstyle(0,HORIZ_DIR,2);
    setcolor(LIGHTRED);
    outtextxy(225,210,"PLAYER ONE");
    setcolor(WHITE);
    outtextxy(225,253," --------");
    settextstyle(0,HORIZ_DIR,1);
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  cout<<"	       	      	        "  ;
  gets(g.p1);
  clrscr();
  cleardevice();
   settextstyle(0,HORIZ_DIR,2);
    setcolor(LIGHTBLUE);
    outtextxy(225,210,"PLAYER TWO");
    setcolor(WHITE);
    outtextxy(225,253," --------");
    settextstyle(0,HORIZ_DIR,1);
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  cout<<"	       	      	        "  ;
  gets(g.p2);
  clrscr();
  cleardevice();

winner = g.input();
clrscr();
cleardevice();
if(winner==1)
{ gra.rewin(g.p1,1);
s.update(g.p1,g.p2,0);
}
else if(winner==0)
{ gra.rewin(g.p2,1);
s.update(g.p1,g.p2,1);
}
else if(winner==2)
{ gra.rewin(g.p2,3);
s.update(g.p1,g.p2,2);
}




  }
    void oneplayer()
  { clrscr();
  cleardevice();
  scoreboard s;
  s.initialize();

  game g;
   settextstyle(0,HORIZ_DIR,2);
    setcolor(LIGHTRED);
    outtextxy(220,210,"PLAYER NAME");
    setcolor(WHITE);
    outtextxy(225,253," --------");
    settextstyle(0,HORIZ_DIR,1);
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  cout<<"	       	      	        "  ;
  gets(g.p1);
  clrscr();
  cleardevice();

  strcpy(g.p2,"COMPUTER");
  clrscr();
  cleardevice();

winner = g.input1();
clrscr();
cleardevice();
if(winner==1)
{gra.rewin(g.p1,1);
s.update(g.p1,g.p2,0);
}
else if(winner==0)
{gra.rewin(g.p2,2);
s.update(g.p1,g.p2,1);
}
else if(winner==2)
{ gra.rewin(g.p2,3);
s.update(g.p1,g.p2,2);
}



  }
  void navigate(int i)
 { int a,b;
   if(i==2)
  { a=420;b=252;}
  else if(i==3)
  { a=80;b=372;
    }
    else if(i==1)
    { a=450;b=202;
      }



   line (11+a,10+b,11+a,20+b);
   line (0+a,15+b,11+a,10+b);
   line (0+a,15+b,11+a,20+b);
   floodfill(4+a,15+b,WHITE);
  }

void mode();
};
void quickgame::mode()
{ clrscr();
  cleardevice();
  int chs,kl=0,pnt=1;

   while(kl<100)
    { clrscr();
     cleardevice();
    int ke;
    navigate(pnt);
     settextstyle(0,HORIZ_DIR,2);
    setcolor(LIGHTRED);
    outtextxy(220,210,"SINGLE PLAYER");
    setcolor(LIGHTBLUE);
    outtextxy(220,260,"TWO PLAYERS");
    setcolor(WHITE);
    settextstyle(0,HORIZ_DIR,2);
    outtextxy(5,380,"Exit");
    settextstyle(0,HORIZ_DIR,1);
    ke=getch();
    clrscr();
    cleardevice();

    if(pnt==1)
    {if(ke==80)
     {pnt=2;}
     else if(ke==13)
     {chs=1;break; }

    }
    else if(pnt==2)
    {if(ke==80)
    {pnt=3;}
    else if(ke==72)
   { pnt=1;  }
   else if(ke==13)
   {chs=2;break; }

    }
    else if(pnt==3)
    {if(ke==72)
    { pnt=2;}
     else if(ke==13)
    { break;}
    }
  clrscr();
  cleardevice();
 }


   clrscr();
  cleardevice();

  if(chs==1)
  oneplayer();
  else if(chs==2)
  twoplayer();

   clrscr();
  cleardevice();

}



  class tournament
 {public:
  int i,j,p,kl,pnt,k;
char a[10],b[10],c[10],d[10],z,e[10],f[10];
int s1,s2,s3,s4,s5,s6,m,n;
 int tourwin(char ch1[20],char ch2[10]);
 void navigate(int i)
 { int a,b;
    if(i==1)
    {a=390;b=153;}
    else if(i==2)
    {a=390;b=183;}
    else if(i==3)
    {a=390;b=213;}
    else if(i==4)
    {a=390;b=242;}
    else if(i==5)
    {a=80;b=372;}

   line (11+a,10+b,11+a,20+b);
   line (0+a,15+b,11+a,10+b);
   line (0+a,15+b,11+a,20+b);
   floodfill(4+a,15+b,WHITE);
  }


 int file(int end);
 void display();
 };

void tournament::display()
{  kl=0;
   int kx;
   pnt=1;
   while(kl<100)
    { clrscr();
     cleardevice();
    int ke;
    navigate(pnt);
     settextstyle(0,HORIZ_DIR,2);
    setcolor(LIGHTRED);
    outtextxy(250,160,"1 PLAYER");
    setcolor(LIGHTBLUE);
    outtextxy(250,190,"2 PLAYER");
    setcolor(14);
    outtextxy(250,220,"3 PLAYER");
    setcolor(CYAN);
    outtextxy(250,250,"4 PLAYER");
    setcolor(WHITE);
    settextstyle(0,HORIZ_DIR,2);
    outtextxy(5,380,"Exit");
    settextstyle(0,HORIZ_DIR,1);
    ke=getch();
    clrscr();
    cleardevice();

    if(pnt==1)
    {if(ke==80)
     {pnt=2;}
     else if(ke==13)
     {p=1;break; }

    }
    else if(pnt==2)
    {if(ke==80)
    {pnt=3;}
    else if(ke==72)
   { pnt=1;  }
   else if(ke==13)
   {p=2;break; }
    }

    else if(pnt==3)
    {if(ke==80)
    {pnt=4;}
    else if(ke==72)
   { pnt=2;  }
   else if(ke==13)
   {p=3;break; }
    }

    else if(pnt==4)
    {if(ke==80)
    {pnt=5;}
    else if(ke==72)
   { pnt=3;  }
   else if(ke==13)
   {p=4;break; }
    }

    else if(pnt==5)
    {if(ke==72)
    { pnt=4;}
     else if(ke==13)
    { goto Exit;}
    } }

clrscr();
cleardevice();

       for( kx=0;kx<4;kx++)
       { settextstyle(0,HORIZ_DIR,2);
      setcolor(LIGHTRED);
      outtextxy(220,210,"PLAYER ONE");
      setcolor(WHITE);
      outtextxy(220,253," --------");
      settextstyle(0,HORIZ_DIR,1);
      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
      cout<<"	       	      	        "  ;
      gets(a);
      if(p==1)
      break;

     clrscr();
     cleardevice();

     settextstyle(0,HORIZ_DIR,2);
     setcolor(LIGHTBLUE);
     outtextxy(220,210,"PLAYER TWO");
     setcolor(WHITE);
     outtextxy(220,253," --------");
     settextstyle(0,HORIZ_DIR,1);
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
     cout<<"	       	      	        "  ;
     gets(b);

     if(p==2)
     break;

     clrscr();
     cleardevice();

     settextstyle(0,HORIZ_DIR,2);
     setcolor(YELLOW);
     outtextxy(220,210,"PLAYER THREE");
     setcolor(WHITE);
     outtextxy(230,253," --------");
     settextstyle(0,HORIZ_DIR,1);
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
     cout<<"	        	       	     "  ;
     gets(c);

     if(p==3)
      break;

    clrscr();
    cleardevice();

    settextstyle(0,HORIZ_DIR,2);
    setcolor(CYAN);
    outtextxy(220,210,"PLAYER FOUR");
    setcolor(WHITE);
    outtextxy(225,253," --------");
    settextstyle(0,HORIZ_DIR,1);
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"	        	      	    "  ;
    gets(d);
    if(p==4)
    break;
       }


       if(p==3)
       {
       strcpy(d,"computer");
       }
       else if(p==2)
       {
       strcpy(c,"computer");
       strcpy(d,"computer");
       }
       else if(p==1)
       {
       strcpy(b,"computer");
       strcpy(c,"computer");
       strcpy(d,"computer");
       }
       int l;
       skl:
       l=1;
       file(l);
       int ex;
       ex=getch();
       if(ex==27)
       goto Exit;
       i=tourwin(a,b);
       if(i==2)
       goto skl;
       ex=getch();
       if(ex==27)
       goto Exit;
       skb:
       l=2;
       file(l);
       j=tourwin(c,d);
       if(j==2)
       goto skb;
       ex=getch();
       if(ex==27)
       goto Exit;
       skn:
       l=3;
       file(l);
       getch();
       k=tourwin(e,f);
       if(k==2)
       goto skn;
       ex=getch();
       if(ex==27)
       goto Exit;
       l=4;
       file(l);
       getch();
  Exit:
  clrscr();
  cleardevice();

}

int tournament::tourwin(char ch1[20],char ch2[20])
{ clrscr();
  cleardevice();
game g;
scoreboard s;
s.initialize();

int i,winner;
if(strcmp(ch1,"computer")==0&&strcmp(ch2,"computer")==0)
{  gra.rewin("COMPUTER",1);
   return(1);
}

else if(strcmp(ch1,"computer")==0)
{
strcpy(g.p2,"computer");
strcpy(g.p1,ch2);

winner= g.input1();
 clrscr();
cleardevice();
if(winner==1)
{  gra.rewin(g.p1,1);
 s.update(g.p1,g.p2,0);
 return(1);
}
else if(winner==0)
{ gra.rewin(g.p2,1);
 s.update(g.p1,g.p2,1);
 return(0) ;
}

else
{return(2);
}

}
else if(strcmp(ch2,"computer")==0)
{
 strcpy(g.p2,"computer");
 strcpy(g.p1,ch1);

winner= g.input1();
 clrscr();
cleardevice();
if(winner==1)
{ gra.rewin(g.p1,1);
 s.update(g.p1,g.p2,0);
 return(0);
}
else if(winner==0)
{
 gra.rewin(g.p2,1);
 s.update(g.p1,g.p2,1);
 return(1) ;
}

else
{return(2);
}
}

else
{
 strcpy(g.p1,ch1);
 strcpy(g.p2,ch2);

winner= g.input();
 clrscr();
cleardevice();
if(winner==1)
{
 gra.rewin(g.p1,1);
 s.update(g.p1,g.p2,0);
 return(0);
}
else if(winner==0)
{gra.rewin(g.p2,1);
 s.update(g.p1,g.p2,1);
 return(1) ;
}

else
{return(2);
}
}




}


int tournament:: file(int ln)
{  int end;
   end=ln;
   int ad=45;

       clrscr();
       cleardevice();
       s1=strlen(a);
       s2=strlen(b);
       s3=strlen(c);
       s4=strlen(d);
	setcolor(DARKGRAY);
	settextstyle(0,HORIZ_DIR,1);
	outtextxy(260,460,"Press Esc to return");
	setcolor(WHITE);
       setcolor(LIGHTGRAY);
       for(m=0;m<102;m++)
       {
       if(m<=100)
       {
       line(30+ad,156,30+m+ad,156);
       line(160+ad,156,160+m+ad,156);
       line(290+ad,156,290+m+ad,156);
       line(420+ad,156,420+m+ad,156);
	delay(5);
	}
       line(29+ad,155,29+m+ad,155);
       line(159+ad,155,159+m+ad,155);
       line(289+ad,155,289+m+ad,155);
       line(419+ad,155,419+m+ad,155);
	delay(5);
       }
       for(m=0;m<22;m++)
       {
       if(m<=20)
       {
       line(30+ad,156,30+ad,156+m);
       line(130+ad,156,130+ad,156+m);
       line(160+ad,156,160+ad,156+m);
       line(260+ad,156,260+ad,156+m);
       line(290+ad,156,290+ad,156+m);
       line(390+ad,156,390+ad,156+m);
       line(420+ad,156,420+ad,156+m);
       line(520+ad,156,520+ad,156+m);
	delay(25);
	}
       if(m<=22)
       {
       line(29+ad,155,29+ad,155+m);
       line(131+ad,155,131+ad,155+m);
       line(159+ad,155,159+ad,155+m);
       line(261+ad,155,261+ad,155+m);
       line(289+ad,155,289+ad,155+m);
       line(391+ad,155,391+ad,155+m);
       line(419+ad,155,419+ad,155+m);
       line(521+ad,155,521+ad,155+m);
	delay(25);
       }
       }
	for(m=0;m<102;m++)
       {
       if(m<=100)
       {

       line(30+ad,176,30+m+ad,176);
       line(160+ad,176,160+m+ad,176);
       line(290+ad,176,290+m+ad,176);
       line(420+ad,176,420+m+ad,176);
	delay(5);
	}
       line(29+ad,177,29+m+ad,177);
       line(159+ad,177,159+m+ad,177);
       line(289+ad,177,289+m+ad,177);
       line(419+ad,177,419+m+ad,177);
	delay(5);
       }
       setcolor(WHITE);
       outtextxy(80-((s1/2)*7)+ad,166-3,a);
       outtextxy(210-((s2/2)*7)+ad,166-3,b);
       outtextxy(340-((s3/2)*7)+ad,166-3,c);
       outtextxy(470-((s4/2)*7)+ad,166-3,d);
       if(end==1)
       goto ldk;
       if(end==2)
       goto ldk;

       setcolor(LIGHTGRAY);
       for(n=0;n<30;n++)
       {
       line(80+ad,176,80+ad,176+n);
       line(210+ad,176,210+ad,176+n);
       line(340+ad,176,340+ad,176+n);
       line(470+ad,176,470+ad,176+n);
       line(79+ad,176,79+ad,176+n);
       line(209+ad,176,209+ad,176+n);
       line(339+ad,176,339+ad,176+n);
       line(469+ad,176,469+ad,176+n);
       delay(18);
       }
       for(m=0;m<66;m++)
       {
       line(80+ad,206,80+m+ad,206);
       line(340+ad,206,340+m+ad,206);
       line(80+ad,205,80+m+ad,205);
       line(340+ad,205,340+m+ad,205);
       line(210+ad,206,210-m+ad,206);
       line(470+ad,206,470-m+ad,206);
       line(210+ad,205,210-m+ad,205);
       line(470+ad,205,470-m+ad,205);
       delay(6);
       }
       for(m=0;m<30;m++)
       {
       line(145+ad,206,145+ad,206+m);
       line(405+ad,206,405+ad,206+m);
       line(144+ad,206,144+ad,206+m);
       line(404+ad,206,404+ad,206+m);
       delay(18);
       }
       for(m=0;m<102;m++)
       {
       if(m<=100)
       {
       line(95+ad,236,95+m+ad,236);
       line(355+ad,236,355+m+ad,236);
       }
       line(94+ad,235,94+m+ad,235);
       line(354+ad,235,354+m+ad,235);
       delay(5);
       }
       for(m=0;m<22;m++)
       {
       if(m<=20)
       {
       line(95+ad,236,95+ad,236+m);
       line(195+ad,236,195+ad,236+m);
       line(355+ad,236,355+ad,236+m);
       line(455+ad,236,455+ad,236+m);
       }
       line(94+ad,235,94+ad,235+m);
       line(196+ad,235,196+ad,235+m);
       line(354+ad,235,354+ad,235+m);
       line(456+ad,235,456+ad,235+m);
       delay(25);
       }
	  for(m=0;m<102;m++)
       {
       if(m<=100)
       {
       line(95+ad,256,95+m+ad,256);
       line(355+ad,256,355+m+ad,256);
       }
       line(94+ad,257,94+m+ad,257);
       line(354+ad,257,354+m+ad,257);
       delay(5);
       }
       setcolor(WHITE);

       if(i==0)
       {
       outtextxy(145-((s1/2)*7)+ad,246-3,a);
       strcpy(e,a);
       }
       else if(i==1)
       {
       outtextxy(145-((s2/2)*7)+ad,246-3,b);
       strcpy(e,b);
       }


       if(j==0)
       {
       outtextxy(405-((s3/2)*7)+ad,246-3,c);
       strcpy(f,c);
       }
       else if(j==1)
       {
       outtextxy(405-((s4/2)*7)+ad,246-3,d);
       strcpy(f,d);
       }
       if(end==3)
       goto ldk;

       for(m=0;m<30;m++)
       {
       line(145+ad,256,145+ad,256+m);
       line(405+ad,256,405+ad,256+m);
       line(144+ad,256,144+ad,256+m);
       line(404+ad,256,404+ad,256+m);
       delay(18);
       }
       setcolor(LIGHTGRAY);
       for(m=0;m<131;m++)
       {
       line(145+ad,286,145+m+ad,286);
       line(145+ad,285,145+m+ad,285);
       line(405+ad,286,405-m+ad,286);
       line(405+ad,285,405-m+ad,285);
       delay(3);
       }
       for(m=0;m<30;m++)
       {
       line(275+ad,286,275+ad,286+m);
       line(274+ad,286,274+ad,286+m);
       delay(18);
       }
       for(m=0;m<102;m++)
       {
       if(m<=100)
       {
       line(225+ad,316,225+m+ad,316);
       }
       line(224+ad,315,224+m+ad,315);
       delay(5);
       }
       for(m=0;m<22;m++)
       {
       if(m<=20)
       {
       line(225+ad,316,225+ad,316+m);
       line(325+ad,316,325+ad,316+m);
       }
       line(224+ad,315,224+ad,315+m);
       line(326+ad,315,326+ad,315+m);
       delay(25);
       }
       for(m=0;m<102;m++)
       {
       if(m<=100)
       {
       line(225+ad,336,225+m+ad,336);
       }
       line(224+ad,337,224+m+ad,337);
       delay(5);
       }
       setcolor(WHITE);

       if(k==0)
       {
       s5=strlen(e);
       outtextxy(275-((s5/2)*7)+ad,326-3,e);


       }
       else if(k==1)
       {
       s6=strlen(f);
       outtextxy(275-((s6/2)*7)+ad,326-3,f);

       }

       if(end==4)
       goto ldk;

     ldk:
     return(0);  }

class mainmenu
{
char p1[20],p2[20],p3[20],p4[20],p5[20],p6[20],p7[20],p8[20];
public:

void displaymenu(int i)
{int inc;
 clrscr();
 cleardevice();

setcolor(LIGHTRED);
settextstyle(0,HORIZ_DIR,6);
outtextxy(125,60,"MAIN");
setcolor(LIGHTCYAN);
settextstyle(0,HORIZ_DIR,6);
outtextxy(345,60,"MENU");

setcolor(8);
line(115,117,540,117);
line(115,118,540,118);

settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
setcolor(WHITE); if(i==1) setcolor(LIGHTRED);
outtextxy(0+160,190-10,"  QUICK GAME");
setcolor(WHITE); if(i==2) setcolor(LIGHTBLUE);
outtextxy(0+160,235-10+10,"  TOURNAMENT");
setcolor(WHITE); if(i==3) setcolor(LIGHTRED);
outtextxy(0+160,280-10+20,"  SCOREBOARD");
setcolor(WHITE); if(i==4) setcolor(LIGHTBLUE);
outtextxy(0+230,325-10+30,"  HELP");
setcolor(WHITE); if(i==5) setcolor(LIGHTRED);
outtextxy(0+230,370-10+40,"  EXIT");
setcolor(WHITE);
}
void navigate(int i)
{ int a,b;
    if(i==1)
    {a=210+210+40;b=186-10;}
    else if(i==2)
    {a=200+210+40;b=231-10+10;}
    else if(i==3)
    {a=210+210+40;b=276-10+20;}
    else if(i==4)
    {a=110+270;b=321-10+30;}
    else if(i==5)
    {a=110+270;b=366-10+40;}

   line (11+a,10+b,11+a,20+b);
   line (0+a,15+b,11+a,10+b);
   line (0+a,15+b,11+a,20+b);
   floodfill(4+a,15+b,WHITE);
}

void invoke();
};
void mainmenu::invoke()
{gra.opening();
 displaymenu(1);
 navigate(1);
 retmen:
 int ch;
 quickgame q;
 tournament t;
 scoreboard s;

 int kl=0;
 int pnt=1;
   while(kl<100)
    { clrscr();
     cleardevice();
    int ke;
    displaymenu(pnt);
    navigate(pnt);
    ke=getch();
    clrscr();
    cleardevice();

    if(pnt==1)
    {
     if(ke==80)
     {pnt=2;}
     else if(ke==13)
     {ch=1;break; }

    }
    else if(pnt==2)
    {
    if(ke==80)
     {pnt=3;}
    else if(ke==72)
   { pnt=1; }
   else if(ke==13)
   {ch=2;break; }
    }

    else if(pnt==3)
    {
     if(ke==80)
    {pnt=4;}
    else if(ke==72)
   { pnt=2;  }
   else if(ke==13)
   {ch=3;break; }
    }

    else if(pnt==4)
    {
    if(ke==80)
    {pnt=5;}
    else if(ke==72)
   { pnt=3; }
   else if(ke==13)
   {ch=4;break; }
    }

    else if(pnt==5)
    {
    if(ke==72)
    { pnt=4;}
     else if(ke==13)
    { if(gra.confirm()==1)
    {ch=5;break;} }
    } }




clrscr();
 cleardevice();
if(ch==1)
{ q.mode();
clrscr();
 cleardevice();
 goto retmen;
}
else if(ch==2)
{ t.display();
clrscr();
 cleardevice();
 goto retmen;
}
else if(ch==3)
{s.display();
clrscr();
 cleardevice();
 goto retmen;
}
else if(ch==4)
{
 help();
clrscr();
cleardevice();
goto retmen;
}

else if(ch==5)
{
 exit(0);
}

}



 void main()
 { clrscr();
 int gd=DETECT;
   int gm;
   initgraph(&gd,&gm,"C:\\Turboc3\\BGI" );

  mainmenu m;
  m.invoke();
   getch();
 closegraph();
 }
