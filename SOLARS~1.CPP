/*.......... WELCOME ALL OF YOU ON ROHIT TECH STUDY CHANNEL ..............*/
/*________________ C++ PROGRAM TO CREATE SOLAR SYSTEM ____________________*/

#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <math.h>

// positions of planets on there orbits
void planetMotion(int xrad,int yrad,int midx,int midy,int x[60],int y[60])
{
int i, j = 0;

/* positions of planets on there corresponding orbits */
for (i = 360; i > 0; i = i - 6)
{
x[j] = midx - (xrad * cos((i * 3.14) / 180));
y[j++] = midy - (yrad * sin((i * 3.14) / 180));
}
return;
}

int main()
{
// request auto detection //
int gdriver = DETECT, gmode;
int midx, midy, xrad[9],yrad[9];
int i = 0, x[9][60], y[9][60];
int pos[9],planet[9],tmp;


// initialize graphic mode //
initgraph(&gdriver, &gmode, "C://TC//BGI");

/* mid position in x and y-axis */
midx = getmaxx() / 2;
midy = getmaxy() / 2;

//manipulating radius of all 9 planets
planet[0]=7;
for(i=1;i<9;i++)
{
planet[i]=planet[i-1]+1;
}

// ofset position for the planets on there corresponding orbit
for(i=0;i<9;i++)
{
pos[i]= i*6;
}

//orbit for all 9 planets
xrad[0]=60, yrad[0]=30;
for(i=1;i<9;i++)
{
xrad[i] =xrad[i-1] +30;
yrad[i] =yrad[i-1] +15;
}

//position of plantets on there orbits
for(i=0;i<9;i++)
{
planetMotion(xrad[i],yrad[i], midx, midy, x[i], y[i]);
}
while(!kbhit())
 {
/* drawing 9 orbits */
setcolor(WHITE);
for(i=0;i<9;i++)
{
ellipse(midx,midy,0,360,xrad[i],yrad[i]);
}

//SUN at the mid of solar system
setcolor(YELLOW);
setfillstyle(SOLID_FILL, YELLOW);
circle(midx,midy,20);
floodfill(midx,midy,YELLOW);

//mercury 1th orbit
setcolor(CYAN);
setfillstyle(SOLID_FILL,CYAN);
pieslice(x[0][pos[0]],y[0][pos[0]],0,360,planet[0]);

//venus 2th orbit
setcolor(GREEN);
setfillstyle(SOLID_FILL,GREEN);
pieslice(x[1][pos[1]],y[1][pos[1]],0,360,planet[1]);

//EARTH 3th orbit
setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
pieslice(x[2][pos[2]],y[2][pos[2]],0,360,planet[2]);

//MARS 4th orbit
setcolor(RED);
setfillstyle(SOLID_FILL,RED);
pieslice(x[3][pos[3]],y[3][pos[3]],0,360,planet[3]);

//JUPITER 5th orbit
setcolor(BROWN);
setfillstyle(SOLID_FILL,BROWN);
pieslice(x[4][pos[4]],y[4][pos[4]],0,360,planet[4]);

//SATURN 6th orbit
setcolor(LIGHTGRAY);
setfillstyle(SOLID_FILL,LIGHTGRAY);
pieslice(x[5][pos[5]],y[5][pos[5]],0,360,planet[5]);

//URANUS 7th orbit
setcolor(BROWN);
setfillstyle(SOLID_FILL,BROWN);
pieslice(x[6][pos[6]],y[6][pos[6]],0,360,planet[6]);

//NEPUTER  8th orbit
setcolor(LIGHTBLUE);
setfillstyle(SOLID_FILL,LIGHTBLUE);
pieslice(x[7][pos[7]],y[7][pos[7]],0,360,planet[7]);

//PLUTO 9th orbit
setcolor(LIGHTRED);
setfillstyle(SOLID_FILL,LIGHTRED);
pieslice(x[8][pos[8]],y[8][pos[8]],0,360,planet[8]);

//texts
settextstyle(1,0,2);
setcolor(14);
outtextxy(120,5,"Created by:- ROHIT TECH STUDY");

settextstyle(1,0,5);
setcolor(14);
outtextxy(160,400,"SOLAR SYSTEM");

/* checks for one complete rotation */
for(i=0;i<9;i++)
{
if(pos[i]<=0)
{
pos[i]=59;
}
else
{
pos[i]=pos[i]-1;
}
}

// sleep for 150 milliseconds
delay(150);

// clears the graphic screen //
cleardevice();
}
// deallocate memory allocated for graphic screen //
closegraph();
return 0;
}


/*---------------- I HOPE YOU LIKE THIS PROGRAMMING --------------------*/

/*_____________ LIKE __________ SHARE _________ SUBSCRIBE ________________*/












