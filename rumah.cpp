


//Andi Muhammad Alifikri
//G64190005


#include <GLFW/glfw3.h>
#include <iostream>
#include <list>
#include <iterator>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

double Lred =0.141;
double Lgreen=0.109;
double Lblue =0.337;
double LampuR=1, LampuG=0.850, LampuB=0.474;
double Tred=0.329,Tgreen=0.219,Tblue=0.517;
double ModeL=0, ModeP=0;

int count=1,countP=1;

void warna()
{
    if(count%2==0&&Lred<0.890) //ini siang
            {
                Lred +=0.001; //ini ganti

                //printf("%f",Lred);

                Lgreen=0.305;
                Lblue =0.545;
                LampuR-=0.001,  LampuG=0.494, LampuB=0.682;
                Tred=1,Tgreen=0.643,Tblue=0.368;
                printf("Mode Siang");
            }
    if(count%2==1&&Lred>0.141) //ini malam
            {

                Lred -=0.001;//ini ganti
                Lgreen=0.109;
                Lblue =0.337;
                LampuR=1, LampuG=0.850, LampuB=0.474;
                Tred=0.329,Tgreen=0.219,Tblue=0.517;

                printf("Mode Malam");


            }
}


//Ini untuk ganti mode malam atau siang
void modedoIfClicked(int button, int action)
    {

        if (button == GLFW_MOUSE_BUTTON_LEFT && action == GLFW_PRESS && ModeL==1){

            count+=1;

        }
        if (button == GLFW_MOUSE_BUTTON_LEFT && action == GLFW_PRESS && ModeP==1){

            countP+=1;

        }
}
void isRectangleSelected(double xpos, double ypos)
    {
        //ini tombol
        double left = 898;
        double right = 976;
        double top = 74;
        double bottom =113.5;

        double Pleft = 635.5;
        double Pright = 684;
        double Ptop = 434.5;
        double Pbottom =503;



        if((xpos > left) && (xpos < right) && (ypos > top) && (ypos < bottom))
            {
                ModeL=1;
               // printf("Tombol x=%f, y=%f\n",xpos,ypos);

            }
        else if((xpos > Pleft) && (xpos < Pright) && (ypos > Ptop) && (ypos < Pbottom))
            {
                ModeP=1;
                //printf("Pintu x=%f, y=%f, P=%d\n",xpos,ypos,countP);
            }
        else
        {
            ModeL=0;
            ModeP=0;
        }




    }


//warna layar

        void display()
{
            //cout << "  R" << Lred << endl;
            //cout << "  G" << Lgreen << endl;
            //cout << "  B" << Lblue << endl;
    //BACKGROUND

    glClearColor(Lred, Lgreen, Lblue, 1);
    glClear(GL_COLOR_BUFFER_BIT);
}


 void rumah ()
{
    float theta,i;


    //Fondasi gelap
    glPushMatrix();
        glTranslatef(0,8,0);
        glColor3d(0.545, 0.490, 0.878);

            glBegin(GL_POLYGON);
                glVertex2d(514.5, 585);
                glVertex2d(469, 612);
                glVertex2d(346, 541);
                glVertex2d(553.2, 415.46);
                glVertex2d(698, 512);
                glVertex2d(582, 579.5);

                for(i=0;i<360;i++)
                {
                    theta=i*3.142/180;
                    glVertex2f(45.5*cos(theta)+543.5, 26.5*sin(theta)+564.5);
                }
            glEnd();



    glPopMatrix();


    //Alas Tegel
    glPushMatrix();

        glBegin(GL_POLYGON);
            glColor3d(0.466, 0.388, 0.898);
            glVertex2d(515, 585);
            glVertex2d(515, 592.5);
            glVertex2d(468.5, 620);
            glVertex2d(468.5, 611.5);
        glEnd();

        glColor3d(0.686, 0.666, 0.925);

            glBegin(GL_POLYGON);
                glVertex2d(514.5, 585);
                glVertex2d(469, 612);
                glVertex2d(346, 541);
                glVertex2d(553.2, 415.46);
                glVertex2d(698, 512);
                glVertex2d(582, 579.5);

                for(i=0;i<360;i++)
                {
                    theta=i*3.142/180;
                    glVertex2f(45.5*cos(theta)+543.5, 26.5*sin(theta)+564.5);
                }
        glEnd();

        glBegin(GL_POLYGON);
            glColor3d(0.545, 0.490, 0.878);
            glVertex2d(346.5, 541);
            glVertex2d(428.5, 589);
            glVertex2d(428.5, 597);
            glVertex2d(346.5, 549.5);

        glEnd();

        glBegin(GL_POLYGON);
            glColor3d(0.545, 0.490, 0.878);
            glVertex2d(698, 512);
            glVertex2d(698,520);
            glColor3d(0.545, 0.490, 0.878);
            glVertex2d(627.5, 562);
            glVertex2d(627.5, 553.5);

        glEnd();

    glPopMatrix();


    //deker-deker pagar
    glPushMatrix();
            //belakang
        glBegin(GL_POLYGON);
            glColor3d(0.466, 0.392, 0.898);
            glVertex2d(429, 498);
            glVertex2d(429, 506);
            glColor3d(0.250, 0.152, 0.807);
            glVertex2d(365.5, 543);
            glColor3d(0.466, 0.392, 0.898);
            glVertex2d(365.5, 535.5);
        glEnd();
            //samping
        glBegin(GL_POLYGON);
            glColor3d(0.466, 0.392, 0.898);
            glVertex2d(365.5, 535.5);
            glVertex2d(365.5, 543);
            glColor3d(0.250, 0.152, 0.807);
            glVertex2d(469, 602.5);
            glColor3d(0.466, 0.392, 0.898);
            glVertex2d(469, 594);
        glEnd();
            //depan
        glBegin(GL_POLYGON);
            glColor3d(0.466, 0.392, 0.898);
            glVertex2d(469, 594);
            glVertex2d(469, 602.5);
            glVertex2d(510, 579);
            glVertex2d(510, 570.5);
        glEnd();

    glPopMatrix();


    //Tembok Kanan
    glPushMatrix();
        glBegin(GL_POLYGON);
            glColor3d(0.501, 0.439, 0.909);
            glVertex2d(428, 300);
            glVertex2d(532, 398);
            glVertex2d(532, 566);
            glVertex2d(428, 507);

        glEnd();

        //bis
        glBegin(GL_POLYGON);
            glColor3d(0.466, 0.392, 0.894);
            glVertex2d(427.5, 495);
            glVertex2d(531.5, 554.5);
            glVertex2d(531.5, 566.5);
            glVertex2d(427.5, 507);
        glEnd();
    glPopMatrix();


    //Tembok Depan
    glPushMatrix();
        glBegin(GL_POLYGON);
            glColor3d(0.552, 0.486, 0.901);
            glVertex2d(531.5, 566.5);
            glVertex2d(664, 488.5);
            glVertex2d(664, 343);
            glVertex2d(531, 398);
        glEnd();

        //bis kiri
        glBegin(GL_POLYGON);
            glColor3d(0.466, 0.392, 0.894);
            glVertex2d(531.5, 554.5);
            glVertex2d(531.5, 566.5);
            glVertex2d(565, 547);
            glVertex2d(565, 536);
        glEnd();

        //bis tengah
        glBegin(GL_POLYGON);
            glColor3d(0.466, 0.392, 0.894);
            glVertex2d(565, 547);
            glVertex2d(573, 551.5);
            glVertex2d(573, 399);
            glVertex2d(565, 399);
        glEnd();

        //bis kanan
        glBegin(GL_POLYGON);
            glColor3d(0.466, 0.392, 0.894);
            glVertex2d(664, 499);
            glVertex2d(664, 488);
            glVertex2d(573, 540);
            glVertex2d(573, 551.5);
        glEnd();
    glPopMatrix();


    //atap
    glPushMatrix();

        //kayu belakang
        glBegin(GL_POLYGON);
            glColor3d(0.384, 0.243, 0.517);
            glVertex2d(430, 304);
            glVertex2d(430, 313);
            glVertex2d(424, 309.5);
            glVertex2d(424, 299);
        glEnd();
        glBegin(GL_POLYGON);
            glColor3d(0.384, 0.243, 0.517);
            glVertex2d(430, 304);
            glVertex2d(430, 313);
            glVertex2d(473, 294);
            glVertex2d(473, 285.5);
        glEnd();

         //kayu tengah
        glBegin(GL_POLYGON);
            glColor3d(0.384, 0.243, 0.517);
            glVertex2d(474, 354.5);
            glVertex2d(517, 327);
            glVertex2d(517, 319.5);
            glVertex2d(474, 345.5);
        glEnd();
        glBegin(GL_POLYGON);
            glColor3d(0.4, 0.250, 0.501);
            glVertex2d(474, 354.5);
            glVertex2d(474, 345.5);
            glVertex2d(467.5, 339.5);
            glVertex2d(467.5, 349.5);
        glEnd();

        //kayu depan
        glBegin(GL_POLYGON);
            glColor3d(0.384, 0.243, 0.517);
            glVertex2d(522.5, 390.5);
            glVertex2d(522.5, 399.5);
            glVertex2d(535, 391.5);
            glVertex2d(535, 383);
        glEnd();
        glBegin(GL_POLYGON);
            glColor3d(0.4, 0.250, 0.501);
            glVertex2d(522.5, 390.5);
            glVertex2d(522.5, 399.5);
            glVertex2d(516.5, 395);
            glVertex2d(516.5, 385);
        glEnd();

        //atap terang
        glBegin(GL_POLYGON);
            glColor3d(0.556, 0.549, 0.874);
            glVertex2d(681, 337);
            glVertex2d(681, 334);
            glVertex2d(554, 221.5);
            glVertex2d(420.5, 292);
            glVertex2d(420.5, 295.5);
            glVertex2d(548, 413.5);
        glEnd();

        //atap gelap
        glBegin(GL_POLYGON);
            glColor3d(0.349, 0.317, 0.796);
            glVertex2d(548, 411);
            glVertex2d(681, 334);
            glVertex2d(551, 217);
            glVertex2d(420.5, 292.5);
        glEnd();

        //garis atap//atap gelap
        int x=0, y=0;
        for(i=0;i<10;i++)
        {

            glBegin(GL_POLYGON);
            glColor3d(0.419, 0.349, 0.870);
            glVertex2d(548+x, 411-y);
            glVertex2d(556+x, 406-y);
            glVertex2d(428+x, 288-y);
            glVertex2d(420+x, 293-y);
            glEnd();
            x+=14, y+=8;
        }

        //Cerobong asap
        glBegin(GL_POLYGON);
            glColor3d(0.592, 0.568, 0.909);
            glVertex2d(513, 354.5);
            glVertex2d(505.5, 347.5);
            glVertex2d(505.5, 333.5);
            glVertex2d(513, 329.26);
            glVertex2d(521, 335);
            glVertex2d(513, 340);
        glEnd();
        glBegin(GL_POLYGON);
            glColor3d(0.549, 0.486, 0.890);
            glVertex2d(513, 354.5);
            glVertex2d(513, 340);
            glVertex2d(521, 335);
            glVertex2d(521, 350);
        glEnd();
        glBegin(GL_POLYGON);
            glColor3d(0.305, 0.188, 0.419);
            glVertex2d(518.5, 335);
            glVertex2d(513.5, 338);
            glVertex2d(507.5, 334.5);
            glVertex2d(512.5, 331.5);
        glEnd();

    glPopMatrix();


    //Jendela

    glPushMatrix();

        //jendela kiri
        glBegin(GL_POLYGON);
            glColor3d(0.466, 0.384, 0.898);
            glVertex2d(486.5, 504.5);
            glVertex2d(475.15, 510.5);
            glVertex2d(475.15, 461.7);
            glVertex2d(486.5, 469);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3d(0.698, 0.670, 0.937);
            glVertex2d(500.5, 525.5);
            glVertex2d(474.5, 510.5);
            glVertex2d(486,   504.7);
            glVertex2d(500.5, 513);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3d(0.329, 0.278, 0.356);
            glVertex2d(485, 468.5);
            glVertex2d(500.5, 477);
            glVertex2d(500.5, 513.5);
            glVertex2d(485.5, 504.5);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3d(LampuR,LampuG,LampuB); //ini warna yang akan dijarikan jendela
            glVertex2d(487.5, 469.5);
            glVertex2d(500.5, 477);
            glVertex2d(500.5, 511);
            glVertex2d(487.5, 503);
        glEnd();

        //Jendela Depan Atas kecil

        glBegin(GL_POLYGON);
            glColor3d(0.466, 0.384, 0.898);
            glVertex2d(559, 418);
            glVertex2d(550, 412);
            glVertex2d(559 , 407.5);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3d(0.698, 0.670, 0.937);
            glVertex2d(559, 418);
            glVertex2d(538, 430.5);
            glVertex2d(538, 419);
            glVertex2d(550, 412);
        glEnd();

        glBegin(GL_TRIANGLES);
            glColor3d(0.329, 0.278, 0.356);
            glVertex2d(547.5, 413);
            glVertex2d(538, 419);
            glVertex2d(538, 404);
        glEnd();

        glBegin(GL_TRIANGLES);
            glColor3d(LampuR,LampuG,LampuB); //ini warna jendela kuning yng akan  dijadikan iteraksi
            glVertex2d(546, 412);
            glVertex2d(538, 416.5);
            glVertex2d(538, 404);
        glEnd();


        //Jendela Depan Atas besar

        glBegin(GL_POLYGON);
            glColor3d(0.466, 0.384, 0.898);
            glVertex2d(627, 368);
            glVertex2d(627, 424);
            glVertex2d(617.5, 418.5);
            glVertex2d(617.5, 373.5);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3d(0.466, 0.384, 0.898);
            glVertex2d(634, 427);
            glVertex2d(634, 435);
            glVertex2d(596, 458.5);
            glVertex2d(589.5, 454.5);
            glVertex2d(589.5, 445.5);
            glVertex2d(596, 449.5);
        glEnd();


        glBegin(GL_POLYGON);
            glColor3d(0.466, 0.384, 0.898);
            glVertex2d(559, 418);
            glVertex2d(550, 412);
            glVertex2d(559 , 407.5);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3d(0.698, 0.670, 0.937);
            glVertex2d(617.5, 419);
            glVertex2d(634, 427);
            glVertex2d(596.5, 449.5);
            glVertex2d(588, 443.5);
            glVertex2d(595, 439);
            glVertex2d(590, 435);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3d(0.329, 0.278, 0.356);
            glVertex2d(618, 373);
            glVertex2d(618, 418);
            glVertex2d(591, 434);
            glVertex2d(591, 388);
        glEnd();
        glBegin(GL_POLYGON);
            glColor3d(LampuR,LampuG,LampuB); //ini warna jendela kuning yng akan  dijadikan iteraksi
            glVertex2d(616, 373);
            glVertex2d(616, 417);
            glVertex2d(591, 433);
            glVertex2d(591, 388);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3d(0.329, 0.278, 0.356);
            glVertex2d(604, 380);
            glVertex2d(604, 425);
            glVertex2d(601, 427);
            glVertex2d(601, 382);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3d(0.329, 0.278, 0.356);
            glVertex2d(617, 395);
            glVertex2d(617, 397);
            glVertex2d(590, 413);
            glVertex2d(590, 411);
        glEnd();



        //Jendela depan Bawah besar

        glTranslatef(0,72,0);
        glBegin(GL_POLYGON);
            glColor3d(0.466, 0.384, 0.898);
            glVertex2d(627, 368);
            glVertex2d(627, 424);
            glVertex2d(617.5, 418.5);
            glVertex2d(617.5, 373.5);
        glEnd();



        glBegin(GL_POLYGON);
            glColor3d(0.698, 0.670, 0.937);
            glVertex2d(617.5, 419);
            glVertex2d(625, 425);
            glVertex2d(595, 441);
            glVertex2d(590, 435);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3d(0.329, 0.278, 0.356);
            glVertex2d(618, 373);
            glVertex2d(618, 418);
            glVertex2d(591, 434);
            glVertex2d(591, 388);
        glEnd();
        glBegin(GL_POLYGON);
            glColor3d(LampuR,LampuG,LampuB); //ini warna jendela kuning yng akan  dijadikan iteraksi
            glVertex2d(616, 373);
            glVertex2d(616, 417);
            glVertex2d(591, 433);
            glVertex2d(591, 388);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3d(0.329, 0.278, 0.356);
            glVertex2d(604, 380);
            glVertex2d(604, 425);
            glVertex2d(601, 427);
            glVertex2d(601, 382);
        glEnd();
    glPopMatrix();



    glPopMatrix();




}


void matahari()
{
    float i, theta;
    glPushMatrix();

        glBegin(GL_POLYGON);
                    glColor3d(0.858, 0.580, 0.086);
                        for(i=0;i<360;i++)
                        {
                            theta=i*3.142/180;
                            glVertex2f(50.25*cos(theta)+286.5, 57*sin(theta)+158);
                        }
        glEnd();


        glBegin(GL_POLYGON);
                    glColor3d(1, 0.780, 0.031);
                        for(i=0;i<360;i++)
                        {
                            theta=i*3.142/180;
                            glVertex2f(48*cos(theta)+291, 53*sin(theta)+159.5);
                        }
        glEnd();

        //EKOR

        glPushMatrix();

        glTranslatef(288,158,0);
        glRotatef(glfwGetTime() * -70, 0, 0, 1);
        glTranslatef(-288,-158,0);

        glBegin(GL_POLYGON);
            glColor3d(1, 0.780, 0.031);
            glVertex2f(343,183.57);
            glVertex2f(379,204.5);
            glVertex2f(387.5,200);
            glVertex2f(353.5,178);


        glEnd();

        glBegin(GL_POLYGON);
            glColor3d(1, 0.780, 0.031);
            glVertex2f(299,225);
            glVertex2f(299,268);
            glVertex2f(289,262);
            glVertex2f(289,220);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3d(1, 0.780, 0.031);
            glVertex2f(222,182);
            glVertex2f(222,193);
            glVertex2f(185,213);
            glVertex2f(185,203);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3d(1, 0.780, 0.031);
            glVertex2f(200,90);
            glVertex2f(237,112);
            glVertex2f(228,117);
            glVertex2f(191,96);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3d(1, 0.780, 0.031);
            glVertex2f(289,54);
            glVertex2f(289,96);
            glVertex2f(280,91);
            glVertex2f(280,49);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3d(1, 0.780, 0.031);
            glVertex2f(289,54);
            glVertex2f(289,96);
            glVertex2f(280,91);
            glVertex2f(280,49);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3d(1, 0.780, 0.031);
            glVertex2f(380,100);
            glVertex2f(344,121);
            glVertex2f(344,111);
            glVertex2f(380,89);
        glEnd();
        glPopMatrix();

    glPopMatrix();

}



void bulan()
{
    float theta, i;
    glPushMatrix();
    glTranslatef(glfwGetTime()*-2,glfwGetTime()*0.5,0);
    glBegin(GL_POLYGON);
        glColor3d(0.764, 0.698, 0.662);
        for(i=0;i<360;i++)
                {
                    theta=i*3.142/180;
                    glVertex2f(47.5*cos(theta)+249, 53.5*sin(theta)+109);
                }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(glfwGetTime()*-2,glfwGetTime()*0.58,0);
    glBegin(GL_POLYGON);
        glColor3d(235, 233, 225);
        for(i=0;i<360;i++)
                {
                    theta=i*3.142/180;
                    glVertex2f(47.5*cos(theta)+261, 53.5*sin(theta)+109);
                }
    glEnd();
    glPopMatrix();

    glBegin(GL_POLYGON);

        glColor3d(Lred,Lgreen,Lblue);
        for(i=0;i<360;i++)
                {
                    theta=i*3.142/180;
                    glVertex2f(50*cos(theta)+279, 50*sin(theta)+100);
                }
    glEnd();


}

void pintu(int countP)
{
    //pintu

    float theta,i;
    glPushMatrix();

        glBegin(GL_POLYGON);
                glColor3d(LampuR,LampuG,LampuB);
                glVertex2d(657, 434);
                glVertex2d(657, 501);
                glVertex2d(635, 514);
                glVertex2d(635, 446);

            glEnd();

        if(countP%2==1){
            glBegin(GL_POLYGON);
                glColor3d(0.329, 0.278, 0.356);
                glVertex2d(657, 434);
                glVertex2d(657, 501);
                glVertex2d(635, 514);
                glVertex2d(635, 446);

            glEnd();

            glBegin(GL_POLYGON);
                glColor3d(0.380, 0.254, 0.517);
                glVertex2d(655, 445);
                glVertex2d(655, 502);
                glVertex2d(635, 514);
                glVertex2d(635, 457);

            glEnd();

            glBegin(GL_POLYGON);
                glColor3d(LampuR,LampuG,LampuB); //ini warna kuning jendela
                glVertex2d(652.24, 436.16);
                glVertex2d(652.24, 442.66);
                glVertex2d(636, 453);
                glVertex2d(636, 446.5);

            glEnd();


            glBegin(GL_POLYGON);
                glColor3d(1, 1, 1);
                    for(i=0;i<360;i++)
                    {
                        theta=i*3.142/180;
                        glVertex2f(2*cos(theta)+638, 2*sin(theta)+483);
                    }
            glEnd();
            //printf("%d",countP);
            printf(" -> Pintu Tertutup\n");
            }

        else{
            glBegin(GL_POLYGON);
                glColor3d(0.329, 0.278, 0.356);
                glVertex2d(685, 442);
                glVertex2d(685, 508);
                glVertex2d(656.5, 502.5);
                glVertex2d(656.5, 435);

            glEnd();
            glBegin(GL_POLYGON);
                glColor3d(Lred,Lgreen,Lblue);
                glVertex2d(683, 444.5);
                glVertex2d(683, 450.5);
                glVertex2d(658, 444.5);
                glVertex2d(658, 439);

            glEnd();

            glBegin(GL_POLYGON);
                glColor3d(0.552, 0.486, 0.901);
                glVertex2d(665,440);
                glVertex2d(665, 446);
                glVertex2d(658, 444.5);
                glVertex2d(658, 439);

            glEnd();

            glBegin(GL_POLYGON);
                glColor3d(0.686, 0.666, 0.925);
                glVertex2d(656,489);
                glVertex2d(656, 502);
                glVertex2d(635, 514);
                glVertex2d(635, 480);

            glEnd();


            printf(" -> Pintu Terbuka\n");


        }

}

//ini tombol

void tombol(int mode)
{
    float theta,i;
    glPushMatrix();
        glBegin(GL_QUADS);

            glColor3d(Tred,Tgreen,Tblue);
            glVertex2f(958,74);
            glVertex2f(958,113);
            glVertex2f(915,113);
            glVertex2f(915,74);

        glEnd();

        glBegin(GL_POLYGON);
            glColor3d(Tred,Tgreen,Tblue);
            for(i=0;i<360;i++)
                {
                    theta=i*3.142/180;
                    glVertex2f(19.5*cos(theta)+917.5, 19.5*sin(theta)+93.5);
                }
        glEnd();

        glBegin(GL_POLYGON);
            glColor3d(Tred,Tgreen,Tblue);
            for(i=0;i<360;i++)
                {
                    theta=i*3.142/180;
                    glVertex2f(19.5*cos(theta)+956.5, 19.5*sin(theta)+93.5);
                }
        glEnd();

        //ini light mode
        //gambar matahari
        glBegin(GL_LINE_STRIP);
            glColor3d(1, 1, 1);
            for(i=0;i<360;i++)
                {
                    theta=i*3.142/180;
                    glVertex2f(5*cos(theta)+955, 5*sin(theta)+93.5);
                }
        glEnd();

        glBegin(GL_LINE_STRIP);

            glColor3d(1, 1, 1);
            glVertex2f(955, 82);
            glVertex2f(955, 87.5);

        glEnd();

        glBegin(GL_LINE_STRIP);

            glColor3d(1, 1, 1);
            glVertex2f(955, 100);
            glVertex2f(955, 105.5);

        glEnd();

        glBegin(GL_LINE_STRIP);

            glColor3d(1, 1, 1);
            glVertex2f(943, 94);
            glVertex2f(948.5, 94);

        glEnd();

        glBegin(GL_LINE_STRIP);

            glColor3d(1, 1, 1);
            glVertex2f(966.5, 94);
            glVertex2f(961, 94);

        glEnd();



        //ini dark mode

        //ini gambar bulan

        glBegin(GL_LINE_STRIP);
            glColor3d(1, 1, 1);
            for(i=0;i<360;i++)
                {
                    theta=i*3.142/180;
                    glVertex2f(12*cos(theta)+927, 12*sin(theta)+93.5);
                }
        glEnd();

        glBegin(GL_LINE_STRIP);
            glColor3d(1, 1, 1);
            for(i=0;i<360;i++)
                {
                    theta=i*3.142/180;
                    glVertex2f(12*cos(theta)+932, 12*sin(theta)+93.5);
                }
        glEnd();
        glBegin(GL_POLYGON);
            glColor3d(Tred,Tgreen,Tblue);
            for(i=0;i<360;i++)
                {
                    theta=i*3.142/180;
                    glVertex2f(12*cos(theta)+933, 13*sin(theta)+93.5);
                }
        glEnd();





        //ini button putih

        glPushMatrix();
        glTranslatef(0-mode,0,0);
        glBegin(GL_POLYGON);
            glColor3d(1, 1, 1);
            for(i=0;i<360;i++)
                {
                    theta=i*3.142/180;
                    glVertex2f(16*cos(theta)+955, 15.5*sin(theta)+93.5);
                }
        glEnd();

        glPopMatrix();

    glPopMatrix();
}


void awan()
{
    glColor3d(Tred,Tgreen,Tblue);
    float i,theta;
    glBegin(GL_POLYGON);

        for(i=0;i<360;i++)
            {
                theta=i*3.142/180;
                glVertex2f(18*cos(theta)+288, 19*sin(theta)+288);
            }
    glEnd();

    glBegin(GL_POLYGON);

        for(i=0;i<360;i++)
            {
                theta=i*3.142/180;
                glVertex2f(16*cos(theta)+314.5, 16*sin(theta)+277);
            }
    glEnd();

    glBegin(GL_POLYGON);

        for(i=0;i<360;i++)
            {
                theta=i*3.142/180;
                glVertex2f(10*cos(theta)+338, 11*sin(theta)+270);
            }
    glEnd();

    glBegin(GL_POLYGON);

        for(i=0;i<360;i++)
            {
                theta=i*3.142/180;
                glVertex2f(16*cos(theta)+267.5, 16*sin(theta)+304);
            }
    glEnd();

    glBegin(GL_POLYGON);

        for(i=0;i<360;i++)
            {
                theta=i*3.142/180;
                glVertex2f(10*cos(theta)+252.5, 11*sin(theta)+322);
            }
    glEnd();

    glBegin(GL_QUADS);
            glVertex2f(336,269);
            glVertex2f(342,280);
            glVertex2f(257.5,331);
            glVertex2f(249.5,315.5);

        glEnd();
}

/*
 * CALLBACKS FUNCTIONS
 */
static void error_callback(int error, const char* description) {
    fputs(description, stderr);
}

// Callback untuk merespons penekanan kunci pada keyboard
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods){}

// Callback untuk merespons perubahan posisi kursor
static void cursor_position_callback(GLFWwindow* window, double xpos, double ypos)
{

    isRectangleSelected(xpos, ypos);



}


// Callback untuk merespons penekanan tombol pada mouse
void mouse_button_callback(GLFWwindow* window, int button, int action, int mods){
    double xpos, ypos;
    glfwGetCursorPos(window, &xpos, &ypos);


    //i3.doIfClicked(button, action, xpos, ypos);
    modedoIfClicked(button, action);

}






/*
 * MAIN FUNCTION
 */
int main(void) {
    //deklarasi variabel

        float n=-20,i=0, kecepatan,j;
    /* Creating Windows */
    GLFWwindow* window;
    glfwSetErrorCallback(error_callback);
    if (!glfwInit());
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
    window = glfwCreateWindow(1080 , 720, "Projek RUMAH G64190005", NULL, NULL);
    if (!window){
        glfwTerminate();
    }
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1);


    /* Registering Callbacks */
    glfwSetKeyCallback(window, key_callback);
    glfwSetCursorPosCallback(window, cursor_position_callback);
    glfwSetMouseButtonCallback(window, mouse_button_callback);

    /* MAIN LOOP */
    while (!glfwWindowShouldClose(window)){
        /* Preparing Frame Creation */
        float ratio,j;
        int width, height;
        glfwGetFramebufferSize(window, &width, &height);
        ratio = width / (float) height;
        glViewport(0, 0, width, height);
        glClear(GL_COLOR_BUFFER_BIT);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glOrtho(0, 1080, 720,0, 1.f, -1.f);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        warna();
        display();

        /* Object Drawing*/

        //i3.display();

        //glPushMatrix();
         //   for (i=0;i<4;i++)
          //  {
          //      glTranslatef(rand()*rand(),-j*i,0);
          //      awan();
          //  }


        //glPopMatrix();
        rumah();

        //atur kecepatan
        kecepatan = 0.5;

        if(count%2==0&&i<=280){

                i+=kecepatan;
        }
        else if(count%2==1&&i>0)
        {
            i-=kecepatan;
        }

                glPushMatrix();
                glTranslatef(0,i*-1,0);
                bulan();
                glPopMatrix();
                glPushMatrix();
                glTranslatef(0,-280+i,0);
                matahari();
                //printf("%f\n",i);
                glPopMatrix();

        if(count%2==0&&j<36)
        {
                j+=0.2;

        }
        else if(count%2==1&&j>0)
        {
                j-=0.2;
        }
        tombol(j);

        pintu(countP);




        /*else{
            glTranslatef(20,50,0);
        bulan();
        }*/










        /* Handling Frame Changes */
        glfwSwapBuffers(window);
        glfwPollEvents();
    }


    /* Destroying Windows */
    glfwDestroyWindow(window);
    glfwTerminate();
    //exit(EXIT_SUCCESS);
}

