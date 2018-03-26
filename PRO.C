#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void intro(int xc,int yc);
void main()
{
	int xc,xc2,yc,i,j,x,gm,gd=DETECT;
	clrscr();
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	printf("Press y to start Movie");
	scanf("%d",&i);
	//xc=
	//yc=getmaxy()/2;
	setcolor(6);
	for(i=getmaxy()/2;i>0;i--)
	{
		intro(getmaxx()/2-50,i);
	}
	setcolor(7);
	xc=10;
	yc=20;
	while(xc<500&&yc<600)
	{
		ellipse(70,70,0,180,40,30); 	//cloud
		ellipse(110,90,270,90,20,20); 	//cloud
		ellipse(30,90,90,270,20,20); 	//cloud
		line(30,110,110,110);           //cloud

		ellipse(200,150,0,180,40,30); 	//cloud 2
		ellipse(240,170,270,90,20,20); 	//cloud 2
		ellipse(160,170,90,270,20,20); 	//cloud 2
		line(160,190,240,190);          //cloud 2

		ellipse(330,70,0,180,40,30); 	//cloud 3
		ellipse(370,90,270,90,20,20); 	//cloud 3
		ellipse(290,90,90,270,20,20); 	//cloud 3
		line(290,110,370,110);          //cloud 3

		ellipse(460,150,0,180,40,30); 	//cloud 4
		ellipse(500,170,270,90,20,20); 	//cloud 4
		ellipse(420,170,90,270,20,20); 	//cloud 4
		line(420,190,500,190);          //cloud 4

		ellipse(590,70,0,180,40,30); 	//cloud 5
		ellipse(630,90,270,90,20,20); 	//cloud 5
		ellipse(550,90,90,270,20,20); 	//cloud 5
		line(550,110,630,110);          //cloud 5

		setcolor(2);
		line(0,465,100,405);            //mountain
		line(100,405,230,465);          //mountain
		line(230,465,320,385);          //mountain
		line(320,385,410,465);          //mountain
		line(410,465,500,385);          //mountain
		line(500,385,560,465);          //mountain
		line(560,465,650,385);          //mountain
		setcolor(4);
		for(i=15;i>0;i--)
		{
			circle(390,410,i);     	//sun
		}
		setcolor(2);
		line(0,465,700,465);
		for(x=xc;x<xc+1;x++)
		{
			if(xc<=300)
			{
				setcolor(7);
				circle(x,435,5);            // x,y
				line(x,440,x,460);        //
				line(x,445,x-5,450);        //
				line(x,445,x+5,450);        //
				line(x,460,x-5,465);        //
				line(x,460,x+5,465);
				if(xc<=120)
					outtextxy(x+20,425,"That is an UFO.I should RUN");
				if(xc>120)
					outtextxy(x+20,425,"Oh No");
				if(xc<=250)
					outtextxy(x+20,yc-20,"Approaching Target");
			}
		}
		if(xc==300)
		{
			setcolor(7);
			ellipse(xc,yc,0,180,20,15);
			line(xc-20,yc,xc+20,yc);
			ellipse(xc-20,yc+5,90,180,5,5);
			ellipse(xc+20,yc+5,0,90,5,5);
			line(xc-25,yc+5,xc+25,yc+5);
			//outtextxy(xc-20,yc+10,"Thor's Ship");
			for(i=1;i<15;i++)
			{
				for(j=0;j<10;j++)
				{
					setcolor(8);
					line(xc-i,yc+6+j,xc+i,yc+6+j);
					//printf("%d",yc);
					delay(25);
				}
			}
			delay(35);
			cleardevice();
		}
		else
		{
			setcolor(7);
			ellipse(xc,yc,0,180,20,15);
			line(xc-20,yc,xc+20,yc);
			ellipse(xc-20,yc+5,90,180,5,5);
			ellipse(xc+20,yc+5,0,90,5,5);
			line(xc-25,yc+5,xc+25,yc+5);
			if(xc>300&&xc<360)
				outtextxy(x+20,yc-20,"Our Work here is done.");
			if(xc>360)
				outtextxy(x+20,yc-20,"Now Lets go HOME");
			//outtextxy(xc-20,yc+10,"Thor's Ship");
			delay(35);
			cleardevice();
		}

		if(xc<40)
		{
			xc=xc+1;
			yc=yc+1;
		}
		else if(xc<140)
		{
			xc=xc+3;
			yc=yc+1;
		}
		else if(xc<230)
		{
			xc=xc+1;
			yc=yc+3;
		}
		else if(xc<300)
		{
			xc=xc+2;
			yc=yc+2;
		}
		else if(xc<400)
		{
			xc=xc+1;
			yc=yc-4;
		}
		else
		{
			xc=xc+1;
			yc=yc-1;
		}

	}
	for(i=getmaxy()/2;i>0;i--)
	{
		outtextxy((getmaxx()/2)-100,i,"Directed By: Nikhil Patil");
		//delay(15);
		outtextxy((getmaxx()/2)-100,i+20,"Story By: Nikhil Patil");
		//delay(15);
		outtextxy((getmaxx()/2)-100,i+40,"Animation By: Nikhil Patil");
		delay(45);
		cleardevice();
	}
	printf("Thank you!!\nPress Enter to Exit");
	getch();
	closegraph();

}

void intro(int xc,int yc)
{
	//outtextxy(xc,yc,"Star Attacks");
	ellipse(xc-200,yc+25,90,270,25,25);        //S
	ellipse(xc-200,yc+25,90,270,15,15);        //S
	line(xc-200,yc,xc-140,yc);                 //S
	line(xc-200,yc+10,xc-145,yc+10);           //S
	ellipse(xc-150,yc,270,0,10,10);            //S  ///
	line(xc-200,yc+40,xc-155,yc+40);           //S    //
	line(xc-200,yc+50,xc-155,yc+50);           //S    //
	ellipse(xc-160,yc+65,270,90,25,25);        //S
	ellipse(xc-160,yc+65,270,90,15,15);        //S
	line(xc-215,yc+80,xc-160,yc+80);           //S
	line(xc-220,yc+90,xc-160,yc+90);           //S
	ellipse(xc-210,yc+90,90,180,10,10);        //S     ///

	line(xc-125,yc,xc-45,yc);            	   //T
	line(xc-115,yc+10,xc-90,yc+10);            //T
	line(xc-80,yc+10,xc-55,yc+10);             //T     ////
	ellipse(xc-115,yc,180,270,10,10);          //T
	ellipse(xc-55,yc,270,0,10,10);       	   //T
	line(xc-90,yc+10,xc-90,yc+90);             //T
	line(xc-90,yc+90,xc-80,yc+90);             //T
	line(xc-80,yc+10,xc-80,yc+90);             //T

	ellipse(xc-25,yc+10,90,180,10,10);         //A
	ellipse(xc+35,yc+10,0,90,10,10);           //A
	line(xc-25,yc,xc+35,yc);             	   //A  -
	line(xc-25,yc+10,xc+35,yc+10);             //A  -
	line(xc-25,yc+40,xc+35,yc+40);             //A  -
	line(xc-25,yc+50,xc+35,yc+50);             //A  -
	line(xc-25,yc+10,xc-25,yc+40);             //A  |
	line(xc-25,yc+50,xc-25,yc+90);             //A  |
	line(xc+35,yc+10,xc+35,yc+40);             //A  |
	line(xc+35,yc+50,xc+35,yc+90);             //A  |
	line(xc-35,yc+10,xc-35,yc+90);             //A  |
	line(xc+45,yc+10,xc+45,yc+90);             //A  |
	line(xc-35,yc+90,xc-25,yc+90);             //A  -
	line(xc+35,yc+90,xc+45,yc+90);             //A  -

	ellipse(xc+55,yc,283,0,80,50);             //R     ///
	ellipse(xc+65,yc+10,270,0,60,30);          //R     ///
	line(xc+55,yc,xc+135,yc);                  //R  -
	line(xc+65,yc+10,xc+125,yc+10);            //R  -
	line(xc+65,yc+10,xc+65,yc+40);             //R  |
	line(xc+65,yc+50,xc+65,yc+90);             //R  |
	line(xc+55,yc,xc+55,yc+90);                //R  |
	line(xc+65,yc+50,xc+122,yc+90);            //R  \
	line(xc+73,yc+50,xc+135,yc+90);            //R  \
	line(xc+122,yc+90,xc+135,yc+90);           //R  -
	line(xc+55,yc+90,xc+65,yc+90);             //R  -

	ellipse(xc-245,yc+110,90,180,10,10);         //A
	ellipse(xc-185,yc+110,0,90,10,10);           //A
	line(xc-245,yc+100,xc-185,yc+100);             	   //A  -
	line(xc-245,yc+110,xc-185,yc+110);             //A  -
	line(xc-245,yc+140,xc-185,yc+140);             //A  -
	line(xc-245,yc+150,xc-185,yc+150);             //A  -
	line(xc-245,yc+110,xc-245,yc+140);             //A  |
	line(xc-245,yc+150,xc-245,yc+190);             //A  |
	line(xc-185,yc+110,xc-185,yc+140);             //A  |
	line(xc-185,yc+150,xc-185,yc+190);             //A  |
	line(xc-255,yc+110,xc-255,yc+190);             //A  |
	line(xc-175,yc+110,xc-175,yc+190);             //A  |
	line(xc-255,yc+190,xc-245,yc+190);             //A  -
	line(xc-185,yc+190,xc-175,yc+190);             //A  -

	line(xc-165,yc+100,xc-85,yc+100);             //T   -
	line(xc-155,yc+110,xc-130,yc+110);            //T   -
	line(xc-120,yc+110,xc-95,yc+110);             //T   -
	ellipse(xc-155,yc+100,180,270,10,10);         //T   ///
	ellipse(xc-95,yc+100,270,0,10,10);            //T   ///
	line(xc-120,yc+110,xc-120,yc+190);            //T   |
	line(xc-120,yc+190,xc-130,yc+190);            //T   -
	line(xc-130,yc+110,xc-130,yc+190);            //T   |

	line(xc-75,yc+100,xc+5,yc+100);             //T   -
	line(xc-65,yc+110,xc-40,yc+110);            //T   -
	line(xc-30,yc+110,xc-5,yc+110);             //T   -
	ellipse(xc-65,yc+100,180,270,10,10);         //T   ///
	ellipse(xc-5,yc+100,270,0,10,10);            //T   ///
	line(xc-30,yc+110,xc-30,yc+190);            //T   |
	line(xc-30,yc+190,xc-40,yc+190);            //T   -
	line(xc-40,yc+110,xc-40,yc+190);            //T   |

	ellipse(xc+25,yc+110,90,180,10,10);         //A
	ellipse(xc+85,yc+110,0,90,10,10);           //A
	line(xc+25,yc+100,xc+85,yc+100);             	   //A  -
	line(xc+25,yc+110,xc+85,yc+110);             //A  -
	line(xc+25,yc+140,xc+85,yc+140);             //A  -
	line(xc+25,yc+150,xc+85,yc+150);             //A  -
	line(xc+25,yc+110,xc+25,yc+140);             //A  |
	line(xc+25,yc+150,xc+25,yc+190);             //A  |
	line(xc+85,yc+110,xc+85,yc+140);             //A  |
	line(xc+85,yc+150,xc+85,yc+190);             //A  |
	line(xc+15,yc+110,xc+15,yc+190);             //A  |
	line(xc+95,yc+110,xc+95,yc+190);             //A  |
	line(xc+15,yc+190,xc+25,yc+190);             //A  -
	line(xc+85,yc+190,xc+95,yc+190);             //A  -

	line(xc+115,yc+100,xc+175,yc+100);             //C   -
	line(xc+115,yc+110,xc+185,yc+110);             //C   -
	line(xc+115,yc+180,xc+185,yc+180);             //C   -
	line(xc+115,yc+190,xc+175,yc+190);             //C   -
	line(xc+105,yc+110,xc+105,yc+180);             //C   |
	line(xc+115,yc+110,xc+115,yc+180);             //C   |
	ellipse(xc+115,yc+110,90,180,10,10);           //C   ///
	ellipse(xc+175,yc+110,0,90,10,10);             //C   ///
	ellipse(xc+115,yc+180,180,270,10,10);          //C   ///
	ellipse(xc+175,yc+180,270,0,10,10);            //C   ///

	line(xc+195,yc+100,xc+195,yc+190);             //K   |
	line(xc+205,yc+100,xc+205,yc+140);             //K   |
	line(xc+205,yc+150,xc+205,yc+190);             //K   |
	line(xc+260,yc+100,xc+205,yc+140);             //K   /
	line(xc+275,yc+100,xc+210,yc+145);             //K   /
	line(xc+205,yc+150,xc+260,yc+190);             //K   \
	line(xc+275,yc+190,xc+210,yc+145);             //K   \
	line(xc+195,yc+100,xc+205,yc+100);             //K   -
	line(xc+195,yc+190,xc+205,yc+190);             //K   -
	line(xc+260,yc+100,xc+275,yc+100);             //K   -
	line(xc+260,yc+190,xc+275,yc+190);             //K   -

	outtextxy(xc-100,yc+250,"Once upon a Time in a Galaxy Far far away");

	delay(15);
	cleardevice();
}