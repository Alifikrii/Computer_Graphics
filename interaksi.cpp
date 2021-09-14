


//Andi Muhammad Alifikri
//G64190005


#include <GLFW/glfw3.h>
#include <iostream>
#include <list>
#include <iterator>
#include <stdio.h>
#include <math.h>

using namespace std;


/*
 * CLASSES DECLARATION
 */

// Rectangle class
class Android{
public:
    double x,y;
    double prevY;
    int red,green,blue;
    int size, i;
    bool tahan;
    float theta;
    int merah, hijau, biru;

    Android()
    {
        prevY = 0;
        red = 5, green = 59, blue = 99;
        merah=hijau=biru=214;
        x=310, y=622;
        size= 70;
        tahan=false;
        theta;

    }


    void display()
    {

        glPushMatrix();

        //rotasi
        //glTranslatef(x,y,0);
        //glRotatef(glfwGetTime() * 3, 0, 0, 1);
        //glTranslatef(-x,-y,0);

        //ini badan
        glBegin(GL_POLYGON);
            glColor3ub(red, green, blue);
            glVertex2f(-size + x,  size + y);
            glVertex2f( size + x,  size + y);
            glVertex2f( size + x, -size + y);
            glVertex2f(-size + x, -size + y);
        glEnd();

        glBegin(GL_POLYGON);

        //ini kepala
        for(i=181;i<360;i++)
        {
            theta=i*3.142/180;
            glVertex2f(size*cos(theta)+x, size*sin(theta)+y-size-4);
        }
        glEnd();



        //tangan kiri

        glBegin(GL_POLYGON);
        for(i=181;i<360;i++)
        {
            theta=i*3.142/180;
            glVertex2f(17.5*cos(theta)+x-size-22.5, 17.5*sin(theta)+y-size+10);
        }
        glEnd();

        glBegin(GL_POLYGON);
            glColor3ub(red, green, blue);
            glVertex2f(-size -40 + x, size-25+ y);
            glVertex2f(-size -5 + x,  size-25+ y);
            glVertex2f(-size -5 + x, -size+10 + y);
            glVertex2f(-size -40 + x,-size+10 + y);
        glEnd();

        glBegin(GL_POLYGON);
        for(i=0;i<181;i++)
        {
            theta=i*3.142/180;
            glVertex2f(17.5*cos(theta)+x-size-22.5, 17.5*sin(theta)+y+size-25);
        }
        glEnd();

        //tangan Kanan

        glBegin(GL_POLYGON);
        for(i=181;i<360;i++)
        {
            theta=i*3.142/180;
            glVertex2f(17.5*cos(theta)+x+size+22.5, 17.5*sin(theta)+y-size+10);
        }
        glEnd();

        glBegin(GL_POLYGON);
            glColor3ub(red, green, blue);
            glVertex2f(size +40 + x, size-25+ y);
            glVertex2f(size +5 + x,  size-25+ y);
            glVertex2f(size +5 + x, -size+10 + y);
            glVertex2f(size +40 + x,-size+10 + y);
        glEnd();

        glBegin(GL_POLYGON);
        for(i=0;i<181;i++)
        {
            theta=i*3.142/180;
            glVertex2f(17.5*cos(theta)+x+size+22.5, 17.5*sin(theta)+y+size-25);
        }
        glEnd();



        //kaki kanan

        glBegin(GL_POLYGON);
            glColor3ub(red, green, blue);
            glVertex2f(50 + x, size+ y);
            glVertex2f(15 + x, size+ y);
            glVertex2f(15 + x, size+50 + y);
            glVertex2f(50 + x, size+50 + y);
        glEnd();

        glBegin(GL_POLYGON);
        for(i=0;i<181;i++)
        {
            theta=i*3.142/180;
            glVertex2f(17.5*cos(theta)+x+32.5, 17.5*sin(theta)+y+size+50);
        }
        glEnd();


         //kaki kiri

        glBegin(GL_POLYGON);
            glColor3ub(red, green, blue);
            glVertex2f(-50 + x, size+ y);
            glVertex2f(-15 + x, size+ y);
            glVertex2f(-15 + x, size+50 + y);
            glVertex2f(-50 + x, size+50 + y);
        glEnd();

        glBegin(GL_POLYGON);
        for(i=0;i<181;i++)
        {
            theta=i*3.142/180;
            glVertex2f(17.5*cos(theta)+x-32.5, 17.5*sin(theta)+y+size+50);
        }
        glEnd();




        //ini mata kanan
        glBegin(GL_POLYGON);

        for(i=0;i<360;i++)
        {
            glColor3d(merah, hijau, biru); //ini warna mata
            theta=i*3.142/180;
            glVertex2f((size-64)*cos(theta)+x+(size-35), (size-64)*sin(theta)+y-(size+35));
        }
        glEnd();


        //ini mata kiri
        glBegin(GL_POLYGON);

        for(i=0;i<360;i++)
        {
            glColor3d(merah, hijau, biru); //ini warna mata
            theta=i*3.142/180;
            glVertex2f((size-64)*cos(theta)+x+(size-105), (size-64)*sin(theta)+y-(size+35));
        }
        glEnd();



        //antena kiri
        glBegin(GL_POLYGON);
            glColor3ub(red, green, blue);
            glVertex2f(-size +5 +x, -size-100 + y); //atas kanan
            glVertex2f(-size +0 + x, -size-100 + y); //atas kiri
            glVertex2f(-size +30 + x, -size -60+ y); //bawah kiri
            glVertex2f(-size +35+ x, -size -60+ y); //bawah kanan
        glEnd();

        //antena kanan
        glBegin(GL_POLYGON);
            glColor3ub(red, green, blue);
            glVertex2f(size +0 +x, -size-100 + y); //atas kanan
            glVertex2f(size -5 + x, -size-100 + y); //atas kiri
            glVertex2f(size -35 + x, -size -60+ y); //bawah kiri
            glVertex2f(size -30+ x, -size -60+ y); //bawah kanan
        glEnd();




        glPopMatrix();
    }

    GLboolean isRectangleSelected(double xpos, double ypos)
    {
        double left = x - size;
        double right = x + size;
        double top = y+size;
        double bottom =y- size;

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
            {red = 5, green = 59, blue = 99;
            merah=hijau=biru=214;}
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
Android android;










/*
 * CALLBACKS FUNCTIONS
 */
static void error_callback(int error, const char* description) {
    //fputs(description);
}

// Callback untuk merespons penekanan kunci pada keyboard
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods){}

// Callback untuk merespons perubahan posisi kursor
static void cursor_position_callback(GLFWwindow* window, double xpos, double ypos)
{
    //rect.doIfSelected(xpos, ypos);
    android.doIfSelected(xpos, ypos);
}


// Callback untuk merespons penekanan tombol pada mouse
void mouse_button_callback(GLFWwindow* window, int button, int action, int mods){
    double xpos, ypos;
    glfwGetCursorPos(window, &xpos, &ypos);
    //rect.doIfClicked(button, action, xpos, ypos);
    android.doIfClicked(button, action, xpos, ypos);
}


//warna layar
    void display()
    {
    glClearColor(237, 245, 224,1); //warna background
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();


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
    window = glfwCreateWindow(640, 960, "Pertemuan 4 G64190005 Interaksi", NULL, NULL);
    if (!window){
        glfwTerminate();
    }
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1);
    display();

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
        glOrtho(0, 640, 960,0, 1.f, -1.f);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();

        /* Object Drawing*/


        //ini adalah garis backgroundnya
        glPushMatrix();
        glTranslatef(480,500,0);
        glRotatef(-90, 0, 0, 1);
        glTranslatef(-480,-500,0);
        for (i=0;i<=(800/20);i++)
        {
            glBegin(GL_QUADS);
            glColor3d(0.839, 0.839, 0.839);
            glVertex2d(n+40+(i*40), 0);
            glVertex2d(0,n+40+(i*40));
            glVertex2d(0, n+20+(i*40));
            glVertex2d(n+20+(i*40), 0);
            glEnd();

        }



        if(n>=20)
        {n=-20;}
        n=n+0.1;
        glPopMatrix();



       // rect.display();
        android.display();


        /* Handling Frame Changes */
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    /* Destroying Windows */
    glfwDestroyWindow(window);
    glfwTerminate();
    //exit(EXIT_SUCCESS);
}

