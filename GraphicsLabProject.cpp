#include<iostream>
#include<graphics.h>
#include <time.h>
using namespace std;

int main()
{
    int mask[14]= {150,380,300,310,450,380,450,430,300,500,150,430,150,380};
    int gd=DETECT,gm;
    int i,x,y,walk=0,angle = 0;
    struct arccoordstype a, b;
    char talk[5][50] =
    {
        "Hi",
        "Hello",
        "How are you?",
        "Fine. You?",
        "I'm also Fine"
    };
    initgraph(&gm,&gm," ");
    initwindow(900,700);

    int choice;

    // display menu



    std::cout << "Choose a shape to draw:" << std::endl;
    std::cout << "1. COVID-19" << std::endl;
    std::cout << "2. Digital Clock" << std::endl;
    std::cout << "3. Rainbow" << std::endl;
    std::cout << "4. Talking Friend" << std::endl;
    std::cout << "5. Twilight Moment" << std::endl;
    std::cout << "6. Emoji" << std::endl;
    std::cout << "7. Walking" << std::endl;
    std::cout << "8. Happy Ramadan" << std::endl;
    std::cout << "9. Draw Circle" << std::endl;
    std::cout << "10.Elusive love story" << std::endl;

    while(1)
    {
        std::cout << "Enter your choice: ";
        std::cin >> choice;


        switch (choice)
        {
        case 1: //Covid_19
            //N:
            line(40,15,65,50);//40 70 40 40 70 70
            line(40,15,40,50);
            line(65,15,65,50);
            ellipse(75,25,0,360,2,2);
            ellipse(75,40,0,360,2,2);

            //S
            ellipse(105,22,40,270,17,9);
            ellipse(105,40,220,90,17,9);
            //N
            line(130,15,160,50);
            line(130,15,130,50);
            line(160,15,160,50);
            //E
            line(170,15,170,50);
            line(170,15,195,15);
            line(170,33,195,33);
            line(170,50,195,50);
            //H
            line(205,15,205,50);
            line(230,15,230,50);
            line(205,32,230,32);
            //A
            line(255,15,240,50);
            line(255,15,270,50);
            line(247,35,263,35);
            //S
            ellipse(290,22,40,270,17,9);
            ellipse(290,40,220,90,17,9);
            //H
            line(315,15,315,50);
            line(340,15,340,50);
            line(315,32,340,32);
            //I
            line(355,15,355,50);
            line(350,15,360,15);
            line(350,50,360,50);
            //S
            ellipse(382,22,40,270,17,9);
            ellipse(382,40,220,90,17,9);

            //ID-
            line(40,65,40,100);
            line(35,65,45,65);
            line(35,100,45,100);

            line(55,65,55,100);
            ellipse(56,82,265,90,15,18);

            ellipse(80,78,0,360,2,2);
            ellipse(80,92,0,360,2,2);
            //CSE2001019252
            ellipse(110,82,70,290,22,18);
            //S
            ellipse(145,75,40,270,18,9);
            ellipse(145,92,220,90,18,9);
            //E
            line(170,65,170,100);
            line(170,65,195,65);
            line(170,82,195,82);
            line(170,100,195,100);
            //200
            ellipse(215,78,235,130,15,13);
            line(205,100,230,100);
            line(205,88,205,100);

            ellipse(245,85,0,360,10,18);
            ellipse(270,85,0,360,10,18);
            //10
            line(290,65,290,100);
            line(290,65,285,70);
            line(285,100,295,100);
            ellipse(310,85,0,360,10,18);
            //19
            line(330,65,330,100);
            line(330,65,325,70);
            line(325,100,335,100);
            ellipse(345,75,0,360,8,10);
            ellipse(345,82,260,90,15,18);
            //252
            ellipse(375,78,235,130,15,13);
            line(365,100,390,100);
            line(365,88,365,100);

            line(395,65,415,65);
            line(395,65,395,80);
            ellipse(405,90,235,130,14,12);

            ellipse(435,78,235,130,15,13);
            line(425,100,445,100);
            line(425,88,425,100);

            //Covid_19 Program
            // EARTH
            circle(300,350,200);
            circle(300,350,199);
            setfillstyle(SOLID_FILL,BLUE);
            floodfill(300,200,WHITE);

            // MASK
            drawpoly(7,mask);
            setfillstyle(SOLID_FILL,YELLOW);
            floodfill(300,400,WHITE);

            // Mask ribbon

            line(150,380,150-50,380-10);
            line(150+1,380+1,100+1,370+1);

            line(450,380,450+50,380-10);
            line(450+1,380+1,450+50+1,380-10+1);

            line(150,430,150-20,430+15);
            line(150+1,430+1,150-20+1,430+15+1);

            line(450,430,450+20,430+15);
            line(450+1,430+1,450+20+1,430+15+1);

            // mask details

            line(150,380+15,300,380-25);
            line(300,380-25,450,380+15);
            line(150+1,380+15+1,300+1,380-25+1);
            line(300+1,380-25+1,450+1,380+15+1);

            line(150,430-15,300,500-25);
            line(300,500-25,450,430-15);
            line(150+1,430-15+1,300+1,500-25+1);
            line(300+1,500-25+1,450+1,430-15+1);

            // EYES

            circle(200,300,30);
            circle(400,300,30);
            setfillstyle(SOLID_FILL,BLACK);
            floodfill(200,300,WHITE);
            floodfill(400,300,WHITE);

            // ARCS

            arc(400,570,63,165,90);
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(330,520,WHITE);

            arc(400,100,180+20,360-63,150);
            arc(400,100,180+22,360-65,151);
            floodfill(300,155,WHITE);

            arc(50,360,270+40,270+57,150+1);
            floodfill(150,440,WHITE);
            arc(50,360,270+122,450-35,150+1);
            arc(50,360,360,360+12,150+1);
            floodfill(110,350,WHITE);
            setcolor(RED);
            settextstyle(1,HORIZ_DIR,5);
            outtextxy(140,600,"COVID-19");

            break;

        case 2: //Digital Clock
            //N:
            line(40,15,65,50);//40 70 40 40 70 70
            line(40,15,40,50);
            line(65,15,65,50);
            ellipse(75,25,0,360,2,2);
            ellipse(75,40,0,360,2,2);

            //S
            ellipse(105,22,40,270,17,9);
            ellipse(105,40,220,90,17,9);
            //N
            line(130,15,160,50);
            line(130,15,130,50);
            line(160,15,160,50);
            //E
            line(170,15,170,50);
            line(170,15,195,15);
            line(170,33,195,33);
            line(170,50,195,50);
            //H
            line(205,15,205,50);
            line(230,15,230,50);
            line(205,32,230,32);
            //A
            line(255,15,240,50);
            line(255,15,270,50);
            line(247,35,263,35);
            //S
            ellipse(290,22,40,270,17,9);
            ellipse(290,40,220,90,17,9);
            //H
            line(315,15,315,50);
            line(340,15,340,50);
            line(315,32,340,32);
            //I
            line(355,15,355,50);
            line(350,15,360,15);
            line(350,50,360,50);
            //S
            ellipse(382,22,40,270,17,9);
            ellipse(382,40,220,90,17,9);

            //ID-
            line(40,65,40,100);
            line(35,65,45,65);
            line(35,100,45,100);

            line(55,65,55,100);
            ellipse(56,82,265,90,15,18);

            ellipse(80,78,0,360,2,2);
            ellipse(80,92,0,360,2,2);
            //CSE2001019252
            ellipse(110,82,70,290,22,18);
            //S
            ellipse(145,75,40,270,18,9);
            ellipse(145,92,220,90,18,9);
            //E
            line(170,65,170,100);
            line(170,65,195,65);
            line(170,82,195,82);
            line(170,100,195,100);
            //200
            ellipse(215,78,235,130,15,13);
            line(205,100,230,100);
            line(205,88,205,100);

            ellipse(245,85,0,360,10,18);
            ellipse(270,85,0,360,10,18);
            //10
            line(290,65,290,100);
            line(290,65,285,70);
            line(285,100,295,100);
            ellipse(310,85,0,360,10,18);
            //19
            line(330,65,330,100);
            line(330,65,325,70);
            line(325,100,335,100);
            ellipse(345,75,0,360,8,10);
            ellipse(345,82,260,90,15,18);
            //252
            ellipse(375,78,235,130,15,13);
            line(365,100,390,100);
            line(365,88,365,100);

            line(395,65,415,65);
            line(395,65,395,80);
            ellipse(405,90,235,130,14,12);

            ellipse(435,78,235,130,15,13);
            line(425,100,445,100);
            line(425,88,425,100);



            // Set the font and color of the clock
            settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 6);
            setcolor(WHITE);

            while (1)
            {
                // Get the current time
                time_t now = time(0);
                tm* ltm = localtime(&now);

                // Convert the time to a string and display it
                char* time_str = asctime(ltm);
                outtextxy(40, 300, time_str);

                // Delay for one second
                delay(1000);

                // Clear the screen to update the clock
                cleardevice();
            };

            break;

        case 3:
            //N:
            line(40,15,65,50);//40 70 40 40 70 70
            line(40,15,40,50);
            line(65,15,65,50);
            ellipse(75,25,0,360,2,2);
            ellipse(75,40,0,360,2,2);

            //S
            ellipse(105,22,40,270,17,9);
            ellipse(105,40,220,90,17,9);
            //N
            line(130,15,160,50);
            line(130,15,130,50);
            line(160,15,160,50);
            //E
            line(170,15,170,50);
            line(170,15,195,15);
            line(170,33,195,33);
            line(170,50,195,50);
            //H
            line(205,15,205,50);
            line(230,15,230,50);
            line(205,32,230,32);
            //A
            line(255,15,240,50);
            line(255,15,270,50);
            line(247,35,263,35);
            //S
            ellipse(290,22,40,270,17,9);
            ellipse(290,40,220,90,17,9);
            //H
            line(315,15,315,50);
            line(340,15,340,50);
            line(315,32,340,32);
            //I
            line(355,15,355,50);
            line(350,15,360,15);
            line(350,50,360,50);
            //S
            ellipse(382,22,40,270,17,9);
            ellipse(382,40,220,90,17,9);

            //ID-
            line(40,65,40,100);
            line(35,65,45,65);
            line(35,100,45,100);

            line(55,65,55,100);
            ellipse(56,82,265,90,15,18);

            ellipse(80,78,0,360,2,2);
            ellipse(80,92,0,360,2,2);
            //CSE2001019252
            ellipse(110,82,70,290,22,18);
            //S
            ellipse(145,75,40,270,18,9);
            ellipse(145,92,220,90,18,9);
            //E
            line(170,65,170,100);
            line(170,65,195,65);
            line(170,82,195,82);
            line(170,100,195,100);
            //200
            ellipse(215,78,235,130,15,13);
            line(205,100,230,100);
            line(205,88,205,100);

            ellipse(245,85,0,360,10,18);
            ellipse(270,85,0,360,10,18);
            //10
            line(290,65,290,100);
            line(290,65,285,70);
            line(285,100,295,100);
            ellipse(310,85,0,360,10,18);
            //19
            line(330,65,330,100);
            line(330,65,325,70);
            line(325,100,335,100);
            ellipse(345,75,0,360,8,10);
            ellipse(345,82,260,90,15,18);
            //252
            ellipse(375,78,235,130,15,13);
            line(365,100,390,100);
            line(365,88,365,100);

            line(395,65,415,65);
            line(395,65,395,80);
            ellipse(405,90,235,130,14,12);

            ellipse(435,78,235,130,15,13);
            line(425,100,445,100);
            line(425,88,425,100);


            // Drow Rainbow
            x=getmaxx()/2;
            y=getmaxy()/2;

            for(i=20; i<130; i++)
            {

                setcolor(i/10);
                arc(x,200,0,180,i+70);
                delay(40);


                setcolor(9);
                rectangle(0,0,750,200);
                setfillstyle(SOLID_FILL,9);
                floodfill(1, 1, 9);

                setcolor(10);
                rectangle(0,200,750,1200);
                setfillstyle(SOLID_FILL,10);
                floodfill(1, 201, 10);

                //for hut

                setcolor(WHITE);
                rectangle(360,180,460,300);
                rectangle(460,180,630,300);
                rectangle(390,250,430,300);
                rectangle(520,213,580,260);

                line(410,100,360,180);
                line(410,100,460,180);
                line(410,100,580,100);
                line(580,100,630,180);

                /* Fill colours */
                setfillstyle(SOLID_FILL, 7);
                floodfill(361, 181, WHITE);
                floodfill(461, 181, WHITE);

                setfillstyle(HATCH_FILL, BLUE);
                floodfill(391, 251, WHITE);
                floodfill(521, 215, WHITE);

                setfillstyle(SLASH_FILL, 8);
                floodfill(411, 105, WHITE);
                floodfill(421, 105, WHITE);



//For tree...

                setcolor(WHITE);
                setfillstyle(SOLID_FILL,GREEN);
                line(145,82,45,142);
                line(145,82,245,142);
                ellipse(145,142,180,360,100,28);
                floodfill(146,85,WHITE);

                setfillstyle(SOLID_FILL,GREEN);
                line(97,167,27,202);
                line(197,164,267,202);
                ellipse(147,202,180,360,120,30);
                floodfill(100,170,WHITE);

                setfillstyle(SOLID_FILL,GREEN);
                line(85,227,5,272);
                line(215,226,295,272);
                ellipse(150,272,180,360,145,30);
                floodfill(90,230,WHITE);

                setfillstyle(SOLID_FILL,BROWN);
                rectangle(120,300,180,450);
                floodfill(121,310,WHITE);


                //for man..

                setcolor(BLACK);
                setfillstyle(SOLID_FILL,BLACK);
                circle(192,378,13);
                floodfill(193,380,BLACK);
                line(190,390,192,400);
                line(189,390,191,400);
                setfillstyle(SOLID_FILL,RED);
                rectangle(180,400,200,450);
                floodfill(193,410,BLACK);
                //for leg..
                line(200,450,230,420);
                line(200,449,229,420);
                line(200,448,228,420);

                line(200,450,230,410);
                line(200,449,231,410);
                line(200,448,232,410);

                line(230,420,260,450);
                line(229,420,261,450);
                line(228,420,262,450);

                line(230,410,250,450);
                line(231,410,251,450);
                line(232,410,252,450);

                //for hand..
                line(193,410,207,425);
                line(193,411,207,426);

                line(207,425,230,420);

                line(200,410,210,423);
                line(210,423,230,410);



            }

            break;

        case 4://Talking Friend
            //N:
            line(40,15,65,50);//40 70 40 40 70 70
            line(40,15,40,50);
            line(65,15,65,50);
            ellipse(75,25,0,360,2,2);
            ellipse(75,40,0,360,2,2);

            //S
            ellipse(105,22,40,270,17,9);
            ellipse(105,40,220,90,17,9);
            //N
            line(130,15,160,50);
            line(130,15,130,50);
            line(160,15,160,50);
            //E
            line(170,15,170,50);
            line(170,15,195,15);
            line(170,33,195,33);
            line(170,50,195,50);
            //H
            line(205,15,205,50);
            line(230,15,230,50);
            line(205,32,230,32);
            //A
            line(255,15,240,50);
            line(255,15,270,50);
            line(247,35,263,35);
            //S
            ellipse(290,22,40,270,17,9);
            ellipse(290,40,220,90,17,9);
            //H
            line(315,15,315,50);
            line(340,15,340,50);
            line(315,32,340,32);
            //I
            line(355,15,355,50);
            line(350,15,360,15);
            line(350,50,360,50);
            //S
            ellipse(382,22,40,270,17,9);
            ellipse(382,40,220,90,17,9);

            //ID-
            line(40,65,40,100);
            line(35,65,45,65);
            line(35,100,45,100);

            line(55,65,55,100);
            ellipse(56,82,265,90,15,18);

            ellipse(80,78,0,360,2,2);
            ellipse(80,92,0,360,2,2);
            //CSE2001019252
            ellipse(110,82,70,290,22,18);
            //S
            ellipse(145,75,40,270,18,9);
            ellipse(145,92,220,90,18,9);
            //E
            line(170,65,170,100);
            line(170,65,195,65);
            line(170,82,195,82);
            line(170,100,195,100);
            //200
            ellipse(215,78,235,130,15,13);
            line(205,100,230,100);
            line(205,88,205,100);

            ellipse(245,85,0,360,10,18);
            ellipse(270,85,0,360,10,18);
            //10
            line(290,65,290,100);
            line(290,65,285,70);
            line(285,100,295,100);
            ellipse(310,85,0,360,10,18);
            //19
            line(330,65,330,100);
            line(330,65,325,70);
            line(325,100,335,100);
            ellipse(345,75,0,360,8,10);
            ellipse(345,82,260,90,15,18);
            //252
            ellipse(375,78,235,130,15,13);
            line(365,100,390,100);
            line(365,88,365,100);

            line(395,65,415,65);
            line(395,65,395,80);
            ellipse(405,90,235,130,14,12);

            ellipse(435,78,235,130,15,13);
            line(425,100,445,100);
            line(425,88,425,100);

            //Start Program


            for(i=0; i<5; i++)
            {
                if(i%2==0)
                {
                    settextstyle(3, 0, 5);
                    outtextxy(460, 180, talk[i]);
                    line(420, 300, 480, 260);
                    line(980, 300, 940, 240);
                }
                else
                {
                    settextstyle(3, 0, 5);
                    outtextxy(750, 180, talk[i]);
                    line(420, 300, 460, 240);
                    line(980, 300, 920, 260);
                }


                circle(350, 200, 50);
                rectangle(330, 250, 370, 420);

                circle(335, 180, 10);
                circle(365, 180, 10);

                arc(350, 200, 220, 320, 20);

                line(330, 260, 280, 300);
                line(280, 300, 330, 360);

                line(370, 260, 420, 300);

                line(330, 420, 280, 580);
                line(370, 420, 410, 580);



                circle(1050, 200, 50);
                rectangle(1030, 250, 1070, 420);

                circle(1035, 180, 10);
                circle(1065, 180, 10);

                arc(1050, 200, 220, 320, 20);

                line(1030, 260, 980, 300);

                line(1070, 260, 1120, 300);
                line(1120, 300, 1070, 360);

                line(1030, 420, 980, 580);
                line(1070, 420, 1110, 580);



                line(0, 580, 1350, 580);



                line(0, 150, 150, 150);
                line(0, 250, 220, 250);
                line(150, 150, 220, 250);
                line(150, 250, 150, 500);
                line(0, 500, 150, 500);


                delay(1000);
                cleardevice();
            }
            break;
        case 5: //Twilight moment
            //N:
            line(40,15,65,50);//40 70 40 40 70 70
            line(40,15,40,50);
            line(65,15,65,50);
            ellipse(75,25,0,360,2,2);
            ellipse(75,40,0,360,2,2);

            //S
            ellipse(105,22,40,270,17,9);
            ellipse(105,40,220,90,17,9);
            //N
            line(130,15,160,50);
            line(130,15,130,50);
            line(160,15,160,50);
            //E
            line(170,15,170,50);
            line(170,15,195,15);
            line(170,33,195,33);
            line(170,50,195,50);
            //H
            line(205,15,205,50);
            line(230,15,230,50);
            line(205,32,230,32);
            //A
            line(255,15,240,50);
            line(255,15,270,50);
            line(247,35,263,35);
            //S
            ellipse(290,22,40,270,17,9);
            ellipse(290,40,220,90,17,9);
            //H
            line(315,15,315,50);
            line(340,15,340,50);
            line(315,32,340,32);
            //I
            line(355,15,355,50);
            line(350,15,360,15);
            line(350,50,360,50);
            //S
            ellipse(382,22,40,270,17,9);
            ellipse(382,40,220,90,17,9);

            //ID-
            line(40,65,40,100);
            line(35,65,45,65);
            line(35,100,45,100);

            line(55,65,55,100);
            ellipse(56,82,265,90,15,18);

            ellipse(80,78,0,360,2,2);
            ellipse(80,92,0,360,2,2);
            //CSE2001019252
            ellipse(110,82,70,290,22,18);
            //S
            ellipse(145,75,40,270,18,9);
            ellipse(145,92,220,90,18,9);
            //E
            line(170,65,170,100);
            line(170,65,195,65);
            line(170,82,195,82);
            line(170,100,195,100);
            //200
            ellipse(215,78,235,130,15,13);
            line(205,100,230,100);
            line(205,88,205,100);

            ellipse(245,85,0,360,10,18);
            ellipse(270,85,0,360,10,18);
            //10
            line(290,65,290,100);
            line(290,65,285,70);
            line(285,100,295,100);
            ellipse(310,85,0,360,10,18);
            //19
            line(330,65,330,100);
            line(330,65,325,70);
            line(325,100,335,100);
            ellipse(345,75,0,360,8,10);
            ellipse(345,82,260,90,15,18);
            //252
            ellipse(375,78,235,130,15,13);
            line(365,100,390,100);
            line(365,88,365,100);

            line(395,65,415,65);
            line(395,65,395,80);
            ellipse(405,90,235,130,14,12);

            ellipse(435,78,235,130,15,13);
            line(425,100,445,100);
            line(425,88,425,100);


            //Twilight Moment
            ///Drawing house:

            rectangle(1,1,638,478);
            rectangle(48,313,96,388);
            rectangle(96,313,186,388);
            rectangle(39,389,195,402);
            rectangle(63,344,80,388);
            rectangle(107,327,123,345);
            rectangle(159,327,176,345);
            rectangle(132,342,151,388);
            line(48,313,71,287);
            line(71,287,96,313);
            line(186,312,161,285);
            line(161,285,71,287);

            ///Coloring the house:

            setfillstyle(SOLID_FILL,DARKGRAY);
            floodfill(115,367,WHITE);
            floodfill(70,329,WHITE);

            ///Drawing tree:

            line(120,285,120,265);
            line(111,265,111,285);
            line(111,265,99,252);
            line(120,265,132,252);
            line(132,252,152,261);
            line(152,261,179,244);
            line(132,252,149,239);
            line(99,252,84,237);
            line(99,252,79,261);
            line(79,261,57,244);
            line(67,253,42,253);
            line(42,253,31,236);
            line(35,244,18,235);
            line(18,235,28,213);
            line(22,226,12,192);
            line(12,192,25,176);
            line(17,183,13,159);
            line(13,159,25,141);
            line(20,147,17,126);
            line(17,126,44,111);
            line(34,116,51,95);
            line(51,95,76,100);
            line(67,98,86,86);
            line(86,86,113,98);
            line(104,94,131,78);
            line(131,78,159,94);
            line(153,98,176,88);
            line(176,88,194,99);
            line(187,102,213,95);
            line(213,95,221,114);
            line(212,109,242,130);
            line(242,130,240,152);
            line(234,143,247,167);
            line(247,167,236,188);
            line(230,182,243,198);
            line(243,198,229,222);
            line(225,211,235,237);
            line(235,237,212,245);
            line(217,240,197,259);
            line(197,259,172,249);

            ///Drawing river:

            line(111,275,3,275);
            line(120,275,634,275);
            line(48,359,2,359);
            line(187,356,635,356);
            line(596,291,508,288);
            line(612,309,500,306);
            line(608,326,527,324);
            line(614,342,515,341);
            line(479,290,293,281);
            line(469,302,357,300);
            line(486,314,434,318);
            line(472,327,380,332);
            line(495,335,429,344);
            line(402,314,308,315);
            line(332,293,279,287);
            line(381,345,347,340);
            line(288,310,263,314);
            line(330,335,219,338);
            line(269,296,202,292);
            line(241,316,198,312);
            line(220,329,196,329);
            line(292,350,197,344);
            line(197,285,180,290);
            line(52,294,11,298);
            line(43,308,16,310);
            line(38,322,10,324);
            line(39,342,12,344);

            ///Drawing airplane:

            line(533,82,563,67);
            line(563,67,580,74);
            line(580,74,525,90);
            line(525,90,521,72);
            line(521,72,533,82);
            line(555,82,533,97);
            line(533,97,539,85);
            line(552,72,529,72);
            line(529,72,539,78);
            circle(559,75,1);
            circle(556,76,1);
            circle(553,77,1);
            circle(550,78,1);
            circle(547,79,1);
            circle(544,80,1);
            circle(528,83,2);

            ///Drawing moon:

            circle(547,79,50);

            ///Coloring the moon:

            setfillstyle(SOLID_FILL,WHITE);
            floodfill(547,88,WHITE);

            ///Drawing stars:

            circle(443,124,1);
            circle(363,69,2);
            circle(176,55,1);
            circle(64,32,1);
            circle(578,194,1);
            circle(331,171,1);
            circle(243,90,1);
            circle(228,25,2);
            circle(337,98,1);
            circle(443,60,2);
            circle(292,39,1);
            circle(117,45,1);
            circle(297,128,2);
            circle(275,180,1);
            circle(346,22,1);
            circle(393,140,2);
            circle(518,140,1);
            circle(422,29,2);
            circle(481,23,1);
            circle(22,26,2);
            circle(36,72,1);
            circle(15,105,2);
            circle(611,132,2);
            circle(472,182,1);
            circle(393,204,2);
            circle(314,216,1);
            circle(249,244,2);
            circle(526,204,2);
            circle(452,238,1);
            circle(549,247,1);
            circle(608,240,1);
            circle(146,22,2);
            circle(624,17,1);
            circle(614,79,1);
            circle(546,11,2);
            circle(356,248,2);
            circle(19,257,2);
            circle(8,178,1);
            circle(4,232,1);
            circle(549,247,1);
            circle(173,263,2);
            circle(89,265,1);
            circle(299,258,2);
            circle(411,263,1);
            circle(502,257,1);

            ///Drawing human-1:

            rectangle(222,384,246,409);
            rectangle(222,410,230,434);
            rectangle(237,410,245,434);
            rectangle(214,434,230,440);
            rectangle(237,434,253,440);
            line(222,384,206,404);
            line(206,404,222,410);
            line(246,384,255,405);
            line(255,405,264,411);
            circle(222,410,2);
            circle(235,372,11);

            ///Drawing human-2:

            rectangle(280,397,293,413);
            rectangle(280,413,285,428);
            rectangle(288,413,293,428);
            rectangle(274,428,285,433);
            rectangle(288,428,298,433);
            line(280,397,272,416);
            line(272,416,264,411);
            line(293,398,308,381);
            circle(287,391,7);
            circle(272,416,2);
            circle(308,381,1);


            break;
        case 6:
            //N:
            line(40,15,65,50);//40 70 40 40 70 70
            line(40,15,40,50);
            line(65,15,65,50);
            ellipse(75,25,0,360,2,2);
            ellipse(75,40,0,360,2,2);

            //S
            ellipse(105,22,40,270,17,9);
            ellipse(105,40,220,90,17,9);
            //N
            line(130,15,160,50);
            line(130,15,130,50);
            line(160,15,160,50);
            //E
            line(170,15,170,50);
            line(170,15,195,15);
            line(170,33,195,33);
            line(170,50,195,50);
            //H
            line(205,15,205,50);
            line(230,15,230,50);
            line(205,32,230,32);
            //A
            line(255,15,240,50);
            line(255,15,270,50);
            line(247,35,263,35);
            //S
            ellipse(290,22,40,270,17,9);
            ellipse(290,40,220,90,17,9);
            //H
            line(315,15,315,50);
            line(340,15,340,50);
            line(315,32,340,32);
            //I
            line(355,15,355,50);
            line(350,15,360,15);
            line(350,50,360,50);
            //S
            ellipse(382,22,40,270,17,9);
            ellipse(382,40,220,90,17,9);

            //ID-
            line(40,65,40,100);
            line(35,65,45,65);
            line(35,100,45,100);

            line(55,65,55,100);
            ellipse(56,82,265,90,15,18);

            ellipse(80,78,0,360,2,2);
            ellipse(80,92,0,360,2,2);
            //CSE2001019252
            ellipse(110,82,70,290,22,18);
            //S
            ellipse(145,75,40,270,18,9);
            ellipse(145,92,220,90,18,9);
            //E
            line(170,65,170,100);
            line(170,65,195,65);
            line(170,82,195,82);
            line(170,100,195,100);
            //200
            ellipse(215,78,235,130,15,13);
            line(205,100,230,100);
            line(205,88,205,100);

            ellipse(245,85,0,360,10,18);
            ellipse(270,85,0,360,10,18);
            //10
            line(290,65,290,100);
            line(290,65,285,70);
            line(285,100,295,100);
            ellipse(310,85,0,360,10,18);
            //19
            line(330,65,330,100);
            line(330,65,325,70);
            line(325,100,335,100);
            ellipse(345,75,0,360,8,10);
            ellipse(345,82,260,90,15,18);
            //252
            ellipse(375,78,235,130,15,13);
            line(365,100,390,100);
            line(365,88,365,100);

            line(395,65,415,65);
            line(395,65,395,80);
            ellipse(405,90,235,130,14,12);

            ellipse(435,78,235,130,15,13);
            line(425,100,445,100);
            line(425,88,425,100);

            //Program

            setcolor(BLUE);
            circle(400,350,150);
            setfillstyle(1,YELLOW);
            floodfill(410,360,BLUE);

            setcolor(RED);
            circle(350,300,30);
            setfillstyle(1,WHITE);
            floodfill(360,310,RED);

            setcolor(RED);
            circle(350,300,15);
            setfillstyle(1,BLACK);
            floodfill(360,310,RED);

            setcolor(RED);
            circle(450,300,30);
            setfillstyle(1,WHITE);
            floodfill(460,310,RED);

            setcolor(RED);
            circle(450,300,15);
            setfillstyle(1,BLACK);
            floodfill(460,310,RED);

            setcolor(RED);
            rectangle(390,330,410,370);
            setfillstyle(1,WHITE);
            floodfill(402,347,RED);

            setcolor(RED);
            arc(400,350,190,350,80);
            setfillstyle(1,BLACK);
            floodfill(402,347,RED);

            break;
        case 7: //Flag
            //N:
            line(40,15,65,50);//40 70 40 40 70 70
            line(40,15,40,50);
            line(65,15,65,50);
            ellipse(75,25,0,360,2,2);
            ellipse(75,40,0,360,2,2);

            //S
            ellipse(105,22,40,270,17,9);
            ellipse(105,40,220,90,17,9);
            //N
            line(130,15,160,50);
            line(130,15,130,50);
            line(160,15,160,50);
            //E
            line(170,15,170,50);
            line(170,15,195,15);
            line(170,33,195,33);
            line(170,50,195,50);
            //H
            line(205,15,205,50);
            line(230,15,230,50);
            line(205,32,230,32);
            //A
            line(255,15,240,50);
            line(255,15,270,50);
            line(247,35,263,35);
            //S
            ellipse(290,22,40,270,17,9);
            ellipse(290,40,220,90,17,9);
            //H
            line(315,15,315,50);
            line(340,15,340,50);
            line(315,32,340,32);
            //I
            line(355,15,355,50);
            line(350,15,360,15);
            line(350,50,360,50);
            //S
            ellipse(382,22,40,270,17,9);
            ellipse(382,40,220,90,17,9);

            //ID-
            line(40,65,40,100);
            line(35,65,45,65);
            line(35,100,45,100);

            line(55,65,55,100);
            ellipse(56,82,265,90,15,18);

            ellipse(80,78,0,360,2,2);
            ellipse(80,92,0,360,2,2);
            //CSE2001019252
            ellipse(110,82,70,290,22,18);
            //S
            ellipse(145,75,40,270,18,9);
            ellipse(145,92,220,90,18,9);
            //E
            line(170,65,170,100);
            line(170,65,195,65);
            line(170,82,195,82);
            line(170,100,195,100);
            //200
            ellipse(215,78,235,130,15,13);
            line(205,100,230,100);
            line(205,88,205,100);

            ellipse(245,85,0,360,10,18);
            ellipse(270,85,0,360,10,18);
            //10
            line(290,65,290,100);
            line(290,65,285,70);
            line(285,100,295,100);
            ellipse(310,85,0,360,10,18);
            //19
            line(330,65,330,100);
            line(330,65,325,70);
            line(325,100,335,100);
            ellipse(345,75,0,360,8,10);
            ellipse(345,82,260,90,15,18);
            //252
            ellipse(375,78,235,130,15,13);
            line(365,100,390,100);
            line(365,88,365,100);

            line(395,65,415,65);
            line(395,65,395,80);
            ellipse(405,90,235,130,14,12);

            ellipse(435,78,235,130,15,13);
            line(425,100,445,100);
            line(425,88,425,100);

            //Flag Program


            setcolor(BROWN);
            bar3d(10,280,getmaxx()-50,320,10,50);


            setcolor(WHITE);
            circle(70,140,30);
            circle(60,130,3);
            circle(80,130,3);
            line(70,135,70,145);

            arc(70,140,60,120,15);

            line(70,170,70,220);
            line(70,170,50,220);
            line(70,170,90,220);
            line(70,220,55,270);
            line(70,220,85,270);

            setcolor(9);
            fillellipse(150,100,60,40);
            outtextxy(110,90,"Hi," );
            outtextxy(110,100,"Go for a walk?");

            delay(5000);

            for(i=0; i<30; i++)
            {


                walk+=5;

                cleardevice();

                setcolor(BROWN);
                bar3d(10,280,getmaxx()-50,320,10,50);


                setcolor(WHITE);
                circle(70+walk,140,30);
                line(70+walk,170,70+walk,220);
                line(70+walk,170,50+walk,220);
                line(70+walk,170,90+walk,220);
                line(70+walk,220,55+walk,270);
                line(70+walk,220,85+walk,270);

                delay(250);

                walk+=5;

                cleardevice();

                circle(70+walk,140,30);
                line(70+walk,170,70+walk,270);

                setcolor(BROWN);
                bar3d(10,280,getmaxx()-50,320,10,50);


                delay(250);

                walk+=5;

                cleardevice();

                bar3d(10,280,getmaxx()-50,320,10,50);

                setcolor(WHITE);
                circle(70+walk,140,30);
                line(70+walk,170,70+walk,220);
                line(70+walk,170,60+walk,220);
                line(70+walk,170,80+walk,220);
                line(70+walk,220,55+walk,270);
                line(70+walk,220,85+walk,270);

                delay(250);

            }

            circle(60+walk,130,3);
            circle(80+walk,130,3);
            line(70+walk,135,70+walk,145);
            line(65+walk,155,75+walk,155);


            setcolor(8);
            fillellipse(walk-10,100,60,40);
            outtextxy(walk-30,100,"lonely...");

            delay(2500);

            break;
        case 8: //Happy Ramadan
            //N:
            line(40,15,65,50);//40 70 40 40 70 70
            line(40,15,40,50);
            line(65,15,65,50);
            ellipse(75,25,0,360,2,2);
            ellipse(75,40,0,360,2,2);

            //S
            ellipse(105,22,40,270,17,9);
            ellipse(105,40,220,90,17,9);
            //N
            line(130,15,160,50);
            line(130,15,130,50);
            line(160,15,160,50);
            //E
            line(170,15,170,50);
            line(170,15,195,15);
            line(170,33,195,33);
            line(170,50,195,50);
            //H
            line(205,15,205,50);
            line(230,15,230,50);
            line(205,32,230,32);
            //A
            line(255,15,240,50);
            line(255,15,270,50);
            line(247,35,263,35);
            //S
            ellipse(290,22,40,270,17,9);
            ellipse(290,40,220,90,17,9);
            //H
            line(315,15,315,50);
            line(340,15,340,50);
            line(315,32,340,32);
            //I
            line(355,15,355,50);
            line(350,15,360,15);
            line(350,50,360,50);
            //S
            ellipse(382,22,40,270,17,9);
            ellipse(382,40,220,90,17,9);

            //ID-
            line(40,65,40,100);
            line(35,65,45,65);
            line(35,100,45,100);

            line(55,65,55,100);
            ellipse(56,82,265,90,15,18);

            ellipse(80,78,0,360,2,2);
            ellipse(80,92,0,360,2,2);
            //CSE2001019252
            ellipse(110,82,70,290,22,18);
            //S
            ellipse(145,75,40,270,18,9);
            ellipse(145,92,220,90,18,9);
            //E
            line(170,65,170,100);
            line(170,65,195,65);
            line(170,82,195,82);
            line(170,100,195,100);
            //200
            ellipse(215,78,235,130,15,13);
            line(205,100,230,100);
            line(205,88,205,100);

            ellipse(245,85,0,360,10,18);
            ellipse(270,85,0,360,10,18);
            //10
            line(290,65,290,100);
            line(290,65,285,70);
            line(285,100,295,100);
            ellipse(310,85,0,360,10,18);
            //19
            line(330,65,330,100);
            line(330,65,325,70);
            line(325,100,335,100);
            ellipse(345,75,0,360,8,10);
            ellipse(345,82,260,90,15,18);
            //252
            ellipse(375,78,235,130,15,13);
            line(365,100,390,100);
            line(365,88,365,100);

            line(395,65,415,65);
            line(395,65,395,80);
            ellipse(405,90,235,130,14,12);

            ellipse(435,78,235,130,15,13);
            line(425,100,445,100);
            line(425,88,425,100);

            //Ramadan Program

            for(i=0; i<=50; i++)
            {
                delay(400);
                cleardevice();

                if(i%2==0)
                {
                    line(640+i, 370, 600+i, 300);
                    line(760+i, 370, 820+i, 320);
                }
                else
                {
                    line(640+i, 370, 580+i, 320);
                    line(760+i, 370, 800+i, 300);
                }

                //Text SBC
                settextstyle(3, 0, 3);
                outtextxy(280, 200, "Hi! Friends");

                settextstyle(8, 0, 4);
                outtextxy(180, 250, "Happy Ramadan");

                settextstyle(9, 0, 3);
                outtextxy(290, 310, "2023");

                //Box SBC
                bar(160, 210, 270, 215);
                bar(380, 210, 490, 215);

                bar(160, 320, 270, 325);
                bar(380, 320, 490, 325);

                bar(160, 210, 165, 320);
                bar(485, 210, 490, 320);


                //Man SBC
                circle(700+i, 300, 50);
                line(700+i, 350, 700+i, 500);
                line(700+i, 500, 650+i, 650);
                line(700+i, 500, 750+i, 650);

                line(700+i, 400, 640+i, 370);
                line(700+i, 400, 760+i, 370);

                circle(680+i, 290, 7);
                circle(720+i, 290, 7);
                line(700+i, 300, 700+i, 315);
                arc(700+i, 310, 220, 320,20);


                //Gift Box SBC
                rectangle(200, 500, 350, 600);
                rectangle(190, 470, 360, 500);
                rectangle(270, 470, 285, 600);

            }

            break;
        case 9:
            //N:
            line(40,15,65,50);//40 70 40 40 70 70
            line(40,15,40,50);
            line(65,15,65,50);
            ellipse(75,25,0,360,2,2);
            ellipse(75,40,0,360,2,2);

            //S
            ellipse(105,22,40,270,17,9);
            ellipse(105,40,220,90,17,9);
            //N
            line(130,15,160,50);
            line(130,15,130,50);
            line(160,15,160,50);
            //E
            line(170,15,170,50);
            line(170,15,195,15);
            line(170,33,195,33);
            line(170,50,195,50);
            //H
            line(205,15,205,50);
            line(230,15,230,50);
            line(205,32,230,32);
            //A
            line(255,15,240,50);
            line(255,15,270,50);
            line(247,35,263,35);
            //S
            ellipse(290,22,40,270,17,9);
            ellipse(290,40,220,90,17,9);
            //H
            line(315,15,315,50);
            line(340,15,340,50);
            line(315,32,340,32);
            //I
            line(355,15,355,50);
            line(350,15,360,15);
            line(350,50,360,50);
            //S
            ellipse(382,22,40,270,17,9);
            ellipse(382,40,220,90,17,9);

            //ID-
            line(40,65,40,100);
            line(35,65,45,65);
            line(35,100,45,100);

            line(55,65,55,100);
            ellipse(56,82,265,90,15,18);

            ellipse(80,78,0,360,2,2);
            ellipse(80,92,0,360,2,2);
            //CSE2001019252
            ellipse(110,82,70,290,22,18);
            //S
            ellipse(145,75,40,270,18,9);
            ellipse(145,92,220,90,18,9);
            //E
            line(170,65,170,100);
            line(170,65,195,65);
            line(170,82,195,82);
            line(170,100,195,100);
            //200
            ellipse(215,78,235,130,15,13);
            line(205,100,230,100);
            line(205,88,205,100);

            ellipse(245,85,0,360,10,18);
            ellipse(270,85,0,360,10,18);
            //10
            line(290,65,290,100);
            line(290,65,285,70);
            line(285,100,295,100);
            ellipse(310,85,0,360,10,18);
            //19
            line(330,65,330,100);
            line(330,65,325,70);
            line(325,100,335,100);
            ellipse(345,75,0,360,8,10);
            ellipse(345,82,260,90,15,18);
            //252
            ellipse(375,78,235,130,15,13);
            line(365,100,390,100);
            line(365,88,365,100);

            line(395,65,415,65);
            line(395,65,395,80);
            ellipse(405,90,235,130,14,12);

            ellipse(435,78,235,130,15,13);
            line(425,100,445,100);
            line(425,88,425,100);

            //Program

            delay(1000);
            while(angle<=360)
            {
                setcolor(BLUE);
                arc(getmaxx()/2,getmaxy()/2,angle,angle+2,20);
                setcolor(RED);
                getarccoords(&a);
                circle(a.xstart,a.ystart,45);
                setcolor(YELLOW);
                arc(getmaxx()/2,getmaxy()/2,angle,angle+2,100);
                getarccoords(&a);
                setcolor(GREEN);
                circle(a.xstart,a.ystart,45);
                angle = angle+5;
                delay(50);
            }

            break;
        case 10:
            //N:
            line(40,15,65,50);//40 70 40 40 70 70
            line(40,15,40,50);
            line(65,15,65,50);
            ellipse(75,25,0,360,2,2);
            ellipse(75,40,0,360,2,2);

            //S
            ellipse(105,22,40,270,17,9);
            ellipse(105,40,220,90,17,9);
            //N
            line(130,15,160,50);
            line(130,15,130,50);
            line(160,15,160,50);
            //E
            line(170,15,170,50);
            line(170,15,195,15);
            line(170,33,195,33);
            line(170,50,195,50);
            //H
            line(205,15,205,50);
            line(230,15,230,50);
            line(205,32,230,32);
            //A
            line(255,15,240,50);
            line(255,15,270,50);
            line(247,35,263,35);
            //S
            ellipse(290,22,40,270,17,9);
            ellipse(290,40,220,90,17,9);
            //H
            line(315,15,315,50);
            line(340,15,340,50);
            line(315,32,340,32);
            //I
            line(355,15,355,50);
            line(350,15,360,15);
            line(350,50,360,50);
            //S
            ellipse(382,22,40,270,17,9);
            ellipse(382,40,220,90,17,9);

            //ID-
            line(40,65,40,100);
            line(35,65,45,65);
            line(35,100,45,100);

            line(55,65,55,100);
            ellipse(56,82,265,90,15,18);

            ellipse(80,78,0,360,2,2);
            ellipse(80,92,0,360,2,2);
            //CSE2001019252
            ellipse(110,82,70,290,22,18);
            //S
            ellipse(145,75,40,270,18,9);
            ellipse(145,92,220,90,18,9);
            //E
            line(170,65,170,100);
            line(170,65,195,65);
            line(170,82,195,82);
            line(170,100,195,100);
            //200
            ellipse(215,78,235,130,15,13);
            line(205,100,230,100);
            line(205,88,205,100);

            ellipse(245,85,0,360,10,18);
            ellipse(270,85,0,360,10,18);
            //10
            line(290,65,290,100);
            line(290,65,285,70);
            line(285,100,295,100);
            ellipse(310,85,0,360,10,18);
            //19
            line(330,65,330,100);
            line(330,65,325,70);
            line(325,100,335,100);
            ellipse(345,75,0,360,8,10);
            ellipse(345,82,260,90,15,18);
            //252
            ellipse(375,78,235,130,15,13);
            line(365,100,390,100);
            line(365,88,365,100);

            line(395,65,415,65);
            line(395,65,395,80);
            ellipse(405,90,235,130,14,12);

            ellipse(435,78,235,130,15,13);
            line(425,100,445,100);
            line(425,88,425,100);

            //Program

            line(200,150,230,100);

            break;

        default:
            std::cout << "Invalid choice!" << std::endl;
            break;;



        }
    }
    getch();
    closegraph();
    return 0;
}
