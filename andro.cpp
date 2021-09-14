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
class Rectangle{
public:
    double x,y;
    double prevY;
    int red,green,blue;
    int size;
    bool tahan;

    Rectangle()
    {
        prevY = 0;
        red = 0, green = 0, blue = 0;
        x=300, y=300;
        size= 100;
        tahan=false;

    }


    void display()
    {
        glBegin(GL_POLYGON);
            glColor3ub(red, green, blue);
            glVertex2f(-size + x,  size + y);
            glVertex2f( size + x,  size + y);
            glVertex2f( size + x, -size + y);
            glVertex2f(-size + x, -size + y);
        glEnd();
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
            {red = blue = 0;
            green = 255;

                if(tahan==1)
                {
                    x=xpos;
                    y=ypos;
                }

            }

        else
            {red = blue = 0;
            green=0;}
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
Rectangle rect;



// Rectangle class
class Android{
public:
    double x,y;
    double prevY;
    int red,green,blue;
    int size;
    bool tahan;

    float theta, move, change, apa;
    int i;


    Android()
    {
        move=0;
        change=1;
        i=1;
        theta;
        apa=0;
        prevY = 0;
        red = 0, green = 0, blue = 0;
        x=300, y=300;
        size= 100;
        tahan=false;

    }


    void display()
    {

//Mari Kita Bikin Android

        //ini untuk putar androidnya
        //glRotatef((float) glfwGetTime() * 30.f, 0.f, 0.f, 10.f);

        glTranslatef(320,320,0);
        glRotatef(glfwGetTime() * -3, 0, 0, 1);
        glTranslatef(-320,-320,0);


        apa=x+ (sin(glfwGetTime())+1)/x*y;
        glTranslatef(apa,0,0);



        if(change==1){
            move +=(0.000015);
            if(move>0.4) {change=0;}
        }
        else
        {
            move -= (0.000003);
            if(move<0) {change=1;}
        }

        glTranslatef(320,320,0);
        glScalef(move+0.8,move+0.8,1);
        glTranslatef(-320,-320,0);









        //ini kepalanya
        glBegin(GL_POLYGON);
        glColor3ub(red, green, blue);
        for(i=0;i<181;i++)
        {
            theta=i*3.142/180;
            glVertex2f(70*cos(theta)+320, 70*sin(theta)+355);
        }
        glEnd();

        //ini mata kanan
        glBegin(GL_POLYGON);
        glColor3d(0.839, 0.839, 0.839); //sesuaikan dengan warna layar
        for(i=0;i<360;i++)
        {
            theta=i*3.142/180;
            glVertex2f(6*cos(theta)+350, 6*sin(theta)+385);
        }
        glEnd();

        //ini mata kiri
        glBegin(GL_POLYGON);
        glColor3d(0.839, 0.839, 0.839); //sesuaikan dengan warna layar
        for(i=0;i<360;i++)
        {
            theta=i*3.142/180;
            glVertex2f(6*cos(theta)+290, 6*sin(theta)+385);
        }
        glEnd();


        //ini badannya
        glBegin(GL_QUADS);

        glColor3ub(red, green, blue);
        glVertex2d(390,210 ); //bawah kanan
        glVertex2d(390,350);  //atas kanan
        glVertex2d(250, 350); //atas kiri
        glVertex2d(250, 210); //bawah kiri
        glEnd();



        //ini tangannya kiri
        //lebar 35*100
        glBegin(GL_QUADS);
        glColor3ub(red, green, blue);
        glVertex2d(245,240 );
        glVertex2d(245,340);
        glVertex2d(210, 340);
        glVertex2d(210, 240);
        glEnd();

        //ini tangan atas kiri
        glBegin(GL_POLYGON);
        glColor3ub(red, green, blue);
        for(i=0;i<360;i++)
        {
            theta=i*3.142/180;
            glVertex2f(17.5*cos(theta)+227.5, 17.5*sin(theta)+340);
        }
        glEnd();

        //ini tangan bawah kiri
        glBegin(GL_POLYGON);
        glColor3ub(red, green, blue);
        for(i=0;i<360;i++)
        {
            theta=i*3.142/180;
            glVertex2f(17.5*cos(theta)+227.5, 17.5*sin(theta)+240);
        }
        glEnd();


        //ini tangannya kanan
        //lebar 35*100
        glBegin(GL_QUADS);

        glColor3ub(red, green, blue);
        glVertex2d(430,240 );
        glVertex2d(430,340);
        glVertex2d(395, 340);
        glVertex2d(395, 240);
        glEnd();

        //ini tangan atas kanan
        glBegin(GL_POLYGON);
        glColor3ub(red, green, blue);
        for(i=0;i<360;i++)
        {
            theta=i*3.142/180;
            glVertex2f(17.5*cos(theta)+412.5, 17.5*sin(theta)+340);
        }
        glEnd();

        //ini tangan bawah kanan
        glBegin(GL_POLYGON);
        glColor3ub(red, green, blue);
        for(i=0;i<360;i++)
        {
            theta=i*3.142/180;
            glVertex2f(17.5*cos(theta)+412.5, 17.5*sin(theta)+240);
        }
        glEnd();


        //ini kaki kanan
        //lebar 35*50
        glBegin(GL_QUADS);

        glColor3ub(red, green, blue);
        glVertex2d(368,160 ); //bawah kanan
        glVertex2d(368,210); //atas kanan
        glVertex2d(333, 210); //atas kiri
        glVertex2d(333, 160); //bawah kiri
        glEnd();

        //ini tangan bawah kanan
        glBegin(GL_POLYGON);
        glColor3ub(red, green, blue);
        for(i=0;i<360;i++)
        {
            theta=i*3.142/180;
            glVertex2f(17.5*cos(theta)+350.5, 17.5*sin(theta)+160);
        }
        glEnd();



        //ini kaki kiri
        //lebar 35*50
        glBegin(GL_QUADS);
        glColor3ub(red, green, blue);
        glVertex2d(307,160 ); //bawah kanan
        glVertex2d(307,210); //atas kanan
        glVertex2d(272, 210); //atas kiri
        glVertex2d(272, 160); //bawah kiri
        glEnd();

        //ini tangan bawah kanan
        glBegin(GL_POLYGON);
        glColor3ub(red, green, blue);
        for(i=0;i<360;i++)
        {
            theta=i*3.142/180;
            glVertex2f(17.5*cos(theta)+289.5, 17.5*sin(theta)+160);
        }
        glEnd();

        //Antena Kanan

        glBegin(GL_QUADS);

        glColor3ub(red, green, blue);
        glVertex2d(345,390 ); //bawah kanan
        glVertex2d(385,440); //atas kanan
        glVertex2d(380,440); //atas kiri
        glVertex2d(340, 390); //bawah kiri
        glEnd();

        //Antena Kiri

        glBegin(GL_QUADS);

        glColor3ub(red, green, blue);
        glVertex2d(305,390); //bawah kanan
        glVertex2d(255,440); //atas kanan
        glVertex2d(250,440); //atas kiri
        glVertex2d(300, 390); //bawah kiri
        glEnd();
    }
    GLboolean isRectangleSelected(double xpos, double ypos)
    {
        double left = x - apa;
        double right = x + apa;
        double top = y+apa;
        double bottom =y- apa;

        if((xpos > left) && (xpos < right) && (ypos < top) && (ypos > bottom))
            return GL_TRUE;
        else
            return GL_FALSE;


    }

    void doIfSelected(double xpos, double ypos)
    {
        if(isRectangleSelected(xpos, ypos) == GL_TRUE)
            {red = blue = 0;
            green = 255;

                if(tahan==1)
                {
                    x=xpos;
                    y=ypos;
                }

            }

        else
            {red = blue = 0;
            green=0;}
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
    rect.doIfSelected(xpos, ypos);
    android.doIfSelected(xpos, ypos);
}


// Callback untuk merespons penekanan tombol pada mouse
void mouse_button_callback(GLFWwindow* window, int button, int action, int mods){
    double xpos, ypos;
    glfwGetCursorPos(window, &xpos, &ypos);
    rect.doIfClicked(button, action, xpos, ypos);
    android.doIfClicked(button, action, xpos, ypos);
}



    void display()
    {
    glClearColor(255,255,255,1); //warna background
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
    window = glfwCreateWindow(640, 960, "Interaction", NULL, NULL);
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
        n=n+0.01;
        glPopMatrix();



        rect.display();
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

