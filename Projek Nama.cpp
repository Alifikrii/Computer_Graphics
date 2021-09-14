


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
        float reset;

    Android()
    {
        prevY = 0;
        red = 5, green = 59, blue = 99;
        merah=hijau=biru=214;
        x=310, y=622;
        size= 70;
        tahan=false;
        theta;
                reset=1;

    }


    void display()
    {

        reset=1;
        glPushMatrix();

                //rotasi
        glTranslatef(x,y,0);
        glRotatef(reset*glfwGetTime() +0.5, 0, 0, 1);

        glTranslatef(-x,-y,0);


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
            glVertex2f(17.5*cos(theta)+x-size-22.5, 17.5*sin(theta)+y-size+11);
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
            glVertex2f(17.5*cos(theta)+x+size+22.5, 17.5*sin(theta)+y-size+11);
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
                    reset=0;
                }

            }

        else
            {red = 5, green = 59, blue = 99;
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
Android android;

// A class
class A{
public:
    double x,y;
    double prevY;
    int red,green,blue;
    int size, i;
    bool tahan;
    float theta;
    int merah, hijau, biru;

    A()
    {
        prevY = 0;
        red = 5, green = 59, blue = 99;
        merah=hijau=biru=214;
        x=94, y=308;
        size= 37;
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
            glVertex2f( size + x,  size + y);
            glVertex2f( size -19+ x,  size + y);
            glVertex2f( size -19+ x, -size + y);
            glVertex2f( size + x, -size + y);
        glEnd();

        //ini perut luar
        glBegin(GL_POLYGON);
        for(i=0;i<360;i++)
        {
            glColor3ub(red, green, blue);
            theta=i*3.142/180;
            glVertex2f((size-5)*cos(theta)-5+x, size*sin(theta)+y);
        }
        glEnd();



        //ini perut dalam
        glBegin(GL_POLYGON);
        for(i=0;i<360;i++)
        {
            glColor3ub(255,255,255);
            theta=i*3.142/180;
            glVertex2f(19.5*cos(theta)+x, 22*sin(theta)+y);
        }
        glEnd();

        glPopMatrix();
    }

    GLboolean isRectangleSelected(double xpos, double ypos)
    {
        double left = x - size/2;
        double right = x + size/2;
        double top = y+size/2;
        double bottom =y- size/2;

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
A a;

// L class
class L{
public:
    double x,y;
    double prevY;
    int red,green,blue;
    int size, i;
    bool tahan;
    float theta;
    int merah, hijau, biru;

    L()
    {
        prevY = 0;
        red = 5, green = 59, blue = 99;
        merah=hijau=biru=214;
        x=181, y=297;
        size= 9.5;
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
       //ini badan
       glBegin(GL_POLYGON);
            glColor3ub(red, green, blue);
            glVertex2f(-size + x,   y-48 ); //Atas Kanan
            glVertex2f( size + x,   y-48); //Atas Kiri
            glVertex2f( size + x,  +48+ y); //Bawah Kiri
            glVertex2f(-size + x,  +48+ y); //Bawah Kanan
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
L l;

// I class
class I1{
public:
    double x,y;
    double prevY;
    int red,green,blue;
    int size, i;
    bool tahan;
    float theta;
    int merah, hijau, biru;

    I1()
    {
        prevY = 0;
        red = 5, green = 59, blue = 99;
        merah=hijau=biru=214;
        x=234, y=297;
        size= 9.5;
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
        double top = y+size+39;
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
I1 i1;


// F class
class F{
public:
    double x,y;
    double prevY;
    int red,green,blue;
    int size, i;
    bool tahan;
    float theta;
    int merah, hijau, biru;

    F()
    {
        prevY = 0;
        red = 5, green = 59, blue = 99;
        merah=hijau=biru=214;
        x=294, y=297;
        size= 9.5;
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
       //ini badan
       glBegin(GL_POLYGON);
            glColor3ub(red, green, blue);
            glVertex2f(-size + x,   y-48 ); //Atas Kanan
            glVertex2f( size + x,   y-48); //Atas Kiri
            glVertex2f( size + x,  +48+ y); //Bawah Kiri
            glVertex2f(-size + x,  +48+ y); //Bawah Kanan
        glEnd();

        //Ini Kepala
        glBegin(GL_POLYGON);
        for(i=180;i<270;i++)
        {
            glColor3ub(red, green, blue);
            theta=i*3.142/180;
            glVertex2f(30*cos(theta)+x+21, 20*sin(theta)+y-48);
        }
            glVertex2f( x+20,  -50+ y);
            glVertex2f( x+10,  -50+ y);
            glVertex2f( x+12,  -47.5+ y);




        glEnd();
        //ini tangan
        glBegin(GL_POLYGON);
            glColor3ub(red, green, blue);
            glVertex2f(-size -14+ x,  y-23 ); //Atas Kanan
            glVertex2f( size +14+ x,  y-23); //Atas Kiri
            glVertex2f( size +14+ x,  -40+ y); //Bawah Kiri
            glVertex2f(-size -14+ x,  -40+ y); //Bawah Kanan
        glEnd();




        glPopMatrix();
    }

    GLboolean isRectangleSelected(double xpos, double ypos)
    {
        double left = x - size;
        double right = x + size;
        double top = y+size ;
        double bottom =y- size-35;

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
F f;


// I class
class I2{
public:
    double x,y;
    double prevY;
    int red,green,blue;
    int size, i;
    bool tahan;
    float theta;
    int merah, hijau, biru;

    I2()
    {
        prevY = 0;
        red = 5, green = 59, blue = 99;
        merah=hijau=biru=214;
        x=349, y=297;
        size= 9.5;
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
        double bottom =y- size-50;

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
I2 i2;


// K class
class K{
public:
    double x,y;
    double prevY;
    int red,green,blue;
    int size, i;
    bool tahan;
    float theta;
    int merah, hijau, biru;

    K()
    {
        prevY = 0;
        red = 5, green = 59, blue = 99;
        merah=hijau=biru=214;
        x=405, y=297;
        size= 9.5;
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
       //ini badan
       glBegin(GL_POLYGON);
            glColor3ub(red, green, blue);
            glVertex2f(-size + x,   y-48 ); //Atas Kanan
            glVertex2f( size + x,   y-48); //Atas Kiri
            glVertex2f( size + x,  +48+ y); //Bawah Kiri
            glVertex2f(-size + x,  +48+ y); //Bawah Kanan
        glEnd();

        //ini tangan
       glBegin(GL_POLYGON);
            glColor3ub(red, green, blue);
            glVertex2f(-size +60+ x,   y-25 ); //Atas Kanan
            glVertex2f( size +25+ x,   y-25 ); //Atas Kiri
            glVertex2f( size -5+   x,  +10+ y); //Bawah Kiri
            glVertex2f(-size +30+ x,  +10+ y); //Bawah Kanan
        glEnd();

        //ini kaki
       glBegin(GL_POLYGON);
            glColor3ub(red, green, blue);
            glVertex2f(-size +30+ x,   y+10 ); //Atas Kanan
            glVertex2f( size -5+ x,   y+10 ); //Atas Kiri
            glVertex2f( size +25+ x,  +48+ y); //Bawah Kiri
            glVertex2f(-size +60+ x,  +48+ y); //Bawah Kanan
        glEnd();



        glPopMatrix();
    }

    GLboolean isRectangleSelected(double xpos, double ypos)
    {
        double left = x - size;
        double right = x + size+40;
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
K k;


// R class
class R{
public:
    double x,y;
    double prevY;
    int red,green,blue;
    int size, i;
    bool tahan;
    float theta;
    int merah, hijau, biru;

    R()
    {
        prevY = 0;
        red = 5, green = 59, blue = 99;
        merah=hijau=biru=214;
        x=490, y=297;
        size= 9.5;
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
       //ini badan
       glBegin(GL_POLYGON);
            glColor3ub(red, green, blue);
            glVertex2f(-size + x,   y-30 ); //Atas Kanan
            glVertex2f( size + x,   y-30); //Atas Kiri
            glVertex2f( size + x,  +48+ y); //Bawah Kiri
            glVertex2f(-size + x,  +48+ y); //Bawah Kanan
        glEnd();

        //Ini Kepala
        glBegin(GL_POLYGON);
        for(i=200;i<270;i++)
        {
            glColor3ub(red, green, blue);
            theta=i*3.142/180;
            glVertex2f(52*cos(theta)+x+41, 20*sin(theta)+y-5);
        }
            glVertex2f( x+40,  -6+ y);
            glVertex2f( x+30,  -7+ y);
            glVertex2f( x+15,  -5+ y);
            glVertex2f( x+5,  y);




        glEnd();
        //ini tangan





        glPopMatrix();
    }

    GLboolean isRectangleSelected(double xpos, double ypos)
    {
        double left = x - size;
        double right = x + size+35;
        double top = y+size+35 ;
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
R r;


// I class
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
    //fputs(description);
}

// Callback untuk merespons penekanan kunci pada keyboard
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods){}

// Callback untuk merespons perubahan posisi kursor
static void cursor_position_callback(GLFWwindow* window, double xpos, double ypos)
{
    a.doIfSelected(xpos, ypos);
    l.doIfSelected(xpos, ypos);
    i1.doIfSelected(xpos, ypos);
    f.doIfSelected(xpos, ypos);
    i2.doIfSelected(xpos, ypos);
    k.doIfSelected(xpos, ypos);
    r.doIfSelected(xpos, ypos);
    i3.doIfSelected(xpos, ypos);
    android.doIfSelected(xpos, ypos);
}


// Callback untuk merespons penekanan tombol pada mouse
void mouse_button_callback(GLFWwindow* window, int button, int action, int mods){
    double xpos, ypos;
    glfwGetCursorPos(window, &xpos, &ypos);

    a.doIfClicked(button, action, xpos, ypos);
    l.doIfClicked(button, action, xpos, ypos);
    i1.doIfClicked(button, action, xpos, ypos);
    f.doIfClicked(button, action, xpos, ypos);
    i2.doIfClicked(button, action, xpos, ypos);
    k.doIfClicked(button, action, xpos, ypos);
    r.doIfClicked(button, action, xpos, ypos);
    i3.doIfClicked(button, action, xpos, ypos);
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
        n=n+0.050;
        glPopMatrix();



        a.display();
        l.display();
        i1.display();
        f.display();
        i2.display();
        k.display();
        r.display();
        i3.display();
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

