


//Andi Muhammad Alifikri
//G64190005


#include <GLFW/glfw3.h>
#include <iostream>
#include <list>
#include <iterator>
#include <stdio.h>
#include <math.h>

using namespace std;

double Lred =0.141;
double Lgreen=0.109;
double Lblue =0.337;
int count=0;



//Ini untuk ganti mode malam atau siang
void modedoIfClicked(int button, int action)
    {

        if (button == GLFW_MOUSE_BUTTON_LEFT && action == GLFW_PRESS){

            count+=1;
            printf("%d",count);


            if(count%2==0)
            {
                Lred =0.909;
                Lgreen=0.905;
                Lblue =0.847;

            }

            else if(count%2==1)
            {
                Lred =0.141;
                Lgreen=0.109;
                Lblue =0.337;

            }

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



/*
 * CLASSES DECLARATION
 */

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
            glColor3d(1, 0.850, 0.474); //ini warna yang akan dijarikan jendela
            glVertex2d(487.5, 469.5);
            glVertex2d(500.5, 477);
            glVertex2d(500.5, 511);
            glVertex2d(487.5, 503);
        glEnd();




    glPopMatrix();




}





//ini belum kepake


// Switch Button
class I3{
public:
    double x,y;
    double prevY;
    int red,green,blue;
    int size, i;
    bool tahan;
    float theta;
    int merah, hijau, biru;


    I3()
    {
        prevY = 0;
        red = 5, green = 59, blue = 99;
        merah=hijau=biru=214;
        x=574, y=297;
        size= 9.5;
        tahan=false;
        theta;


    }


    void display()
    {

        glPushMatrix();



        //ini badan
       //ini badan
       glBegin(GL_POLYGON);
            glColor3ub(red, green, blue);
            glVertex2f(-size + x,   y-27 ); //Atas Kanan
            glVertex2f( size + x,   y-27); //Atas Kiri
            glVertex2f( size + x,  +48+ y); //Bawah Kiri
            glVertex2f(-size + x,  +48+ y); //Bawah Kanan
        glEnd();


        //Ini Kepala
        glBegin(GL_POLYGON);
        for(i=0;i<360;i++)
        {
            glColor3ub(red, green, blue);
            theta=i*3.142/180;
            glVertex2f((size+2)*cos(theta)+x, (size+2)*sin(theta)+y-48);
        }
        glEnd();


        glPopMatrix();
    }

    GLboolean isRectangleSelected(double xpos, double ypos)
    {
        double left = x - size;
        double right = x + size;
        double top = y+size;
        double bottom =y- size-70;

        if((xpos > left) && (xpos < right) && (ypos < top) && (ypos > bottom))
            return GL_TRUE;
        else
            return GL_FALSE;


    }

    void doIfSelected(double xpos, double ypos)
    {
        if(isRectangleSelected(xpos, ypos) == GL_TRUE)
            {red =61; blue = 132;
            green = 220;
            merah=237,hijau=245, biru=224;

                if(tahan==1)
                {
                    x=xpos;
                    y=ypos;

                }

            }

        else
            {
                red = 5, green = 59, blue = 99;
                merah=hijau=biru=214;


            }
    }

    void doIfKeyPressed(int key, int action){}
    void doIfClicked(int button, int action, double xpos, double ypos){


            if (button == GLFW_MOUSE_BUTTON_LEFT && action == GLFW_PRESS){

                tahan=true;

            }
            else if (button == GLFW_MOUSE_BUTTON_LEFT && action == GLFW_RELEASE)
            {
                tahan=false;

            }


    }
};
I3 i3;



















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

    i3.doIfSelected(xpos, ypos);



}


// Callback untuk merespons penekanan tombol pada mouse
void mouse_button_callback(GLFWwindow* window, int button, int action, int mods){
    double xpos, ypos;
    glfwGetCursorPos(window, &xpos, &ypos);

    i3.doIfClicked(button, action, xpos, ypos);
    modedoIfClicked(button, action);

}






/*
 * MAIN FUNCTION
 */
int main(void) {
    //deklarasi variabel
        int i=0;
        float n=-20;
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
        float ratio;
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
        display();

        /* Object Drawing*/

        //i3.display();
        rumah();







        /* Handling Frame Changes */
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    /* Destroying Windows */
    glfwDestroyWindow(window);
    glfwTerminate();
    //exit(EXIT_SUCCESS);
}

