#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

    static void error_callback(int error, const char* description) {
      fputs(description, stderr);
    }
    static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods){
      if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
      glfwSetWindowShouldClose(window, GL_TRUE);
    }


    void display()
    {
    glClearColor(0.968f, 0.290f, 0.780f, 1.0f); //warna background
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
    }


    void setup_viewport(GLFWwindow* window)
{
    // setting viewports size, projection etc
    float ratio;
    int width, height;
    glfwGetFramebufferSize(window, &width, &height);
    ratio = width / (float) height;
    glViewport(0, 0, width, height);

    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 640, 480, 0, 1.f, -1.f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

//diatasnya ini
 int main(void) {
        //Window
        GLFWwindow* window;
        int i;
        float theta;
        glfwSetErrorCallback(error_callback);


        if (!glfwInit())exit(EXIT_FAILURE);
        window = glfwCreateWindow(640, 480, "Simple Example", NULL, NULL);

        if (!window){
          glfwTerminate();
          exit(EXIT_FAILURE);
        }



        glfwMakeContextCurrent(window);
        glfwSwapInterval(1);
        glfwSetKeyCallback(window, key_callback);

        while (!glfwWindowShouldClose(window)){
            display();
            setup_viewport(window);
          int width, height;
          glfwGetFramebufferSize(window, &width, &height);
          glViewport(0, 0, width, height);




          //fungsi untuk menampilkan objk


          glPushMatrix();
          //ini langit


            glBegin(GL_QUADS);
            glColor3d(0,0,0);
            glVertex2d(0,0);
            glVertex2d(640,0);
            glVertex2d(680,240);
            glVertex2d(0,240);
            glEnd();
        glPopMatrix();


glPushMatrix();
            //Ini Atapnya

            glBegin(GL_TRIANGLES);
            glColor3d(0.619, 0.086, 0.086);
            glVertex2d(241, 281.25);
            glVertex2d(399.48, 281.25);
            glVertex2d(320.24, 162);
            glEnd();
glPopMatrix();

            //ini tembooknya
            glBegin(GL_QUADS);
            glColor3d(0.556, 0.819, 0);
            glVertex2d(368, 347);
            glVertex2d(368, 281);
            glVertex2d(271, 281);
            glVertex2d(271, 347);
            glEnd();

            //ini pintunya
            glBegin(GL_QUADS);
            glColor3d(0.619, 0.086, 0.086);
            glVertex2d(343, 347);
            glVertex2d(343, 307);
            glVertex2d(320, 307);
            glVertex2d(320, 347);
            glEnd();


            //ini bulan
            glPushMatrix();
            glBegin(GL_POLYGON);

            glColor3d(0.976, 0.968, 0.823);
            for(i=0;i<361;i++)
            {
            theta=i*3.142/180;
            glVertex2f(60*cos(theta)+90, 60*sin(theta)+70);
            }
            glEnd();


            glBegin(GL_POLYGON);
            glColor3d(0,0,0);
            for(i=0;i<361;i++)
            {
            theta=i*3.142/180;
            glVertex2f(60*cos(theta)+100, 60*sin(theta)+80);
            }
            glEnd();
            glPopMatrix();



            //ini awan

            glPushMatrix();

            glTranslatef(-400,0,0);
            glTranslatef(0+(sin(glfwGetTime())+1)/2*600,0,0);


            glBegin(GL_POLYGON);
            glColor3d(255,255,255); //sesuaikan dengan warna layar
            for(i=0;i<360;i++)
            {
            theta=i*3.142/180;
            glVertex2f(20*cos(theta)+439, 20*sin(theta)+85.5);
            }
            glEnd();

            glBegin(GL_POLYGON);
            for(i=0;i<360;i++)
            {
            theta=i*3.142/180;
            glVertex2f(20*cos(theta)+459, 20*sin(theta)+64.5);
            }
            glEnd();

            glBegin(GL_POLYGON);
            for(i=0;i<360;i++)
            {
            theta=i*3.142/180;
            glVertex2f(20*cos(theta)+473, 20*sin(theta)+72.5);
            }
            glEnd();

            glBegin(GL_POLYGON);
            for(i=0;i<360;i++)
            {
            theta=i*3.142/180;
            glVertex2f(20*cos(theta)+459, 20*sin(theta)+81.5);
            }
            glEnd();

            glBegin(GL_POLYGON);
            for(i=0;i<360;i++)
            {
            theta=i*3.142/180;
            glVertex2f(20*cos(theta)+433, 20*sin(theta)+64.5);
            }
            glEnd();

            glBegin(GL_POLYGON);
            for(i=0;i<360;i++)
            {
            theta=i*3.142/180;
            glVertex2f(20*cos(theta)+419, 20*sin(theta)+75.5);
            }
            glEnd();


            glPopMatrix();


            glPushMatrix();

            glTranslatef(20,100,0);
            //glTranslatef(0+(sin(glfwGetTime())+1)/2*70,0+(sin(glfwGetTime())+1)/2*70,0);


            glBegin(GL_POLYGON);
            glColor3d(255,255,255); //sesuaikan dengan warna layar
            for(i=0;i<360;i++)
            {
            theta=i*3.142/180;
            glVertex2f(20*cos(theta)+439, 20*sin(theta)+85.5);
            }
            glEnd();

            glBegin(GL_POLYGON);
            for(i=0;i<360;i++)
            {
            theta=i*3.142/180;
            glVertex2f(20*cos(theta)+459, 20*sin(theta)+64.5);
            }
            glEnd();

            glBegin(GL_POLYGON);
            for(i=0;i<360;i++)
            {
            theta=i*3.142/180;
            glVertex2f(20*cos(theta)+473, 20*sin(theta)+72.5);
            }
            glEnd();

            glBegin(GL_POLYGON);
            for(i=0;i<360;i++)
            {
            theta=i*3.142/180;
            glVertex2f(20*cos(theta)+459, 20*sin(theta)+81.5);
            }
            glEnd();

            glBegin(GL_POLYGON);
            for(i=0;i<360;i++)
            {
            theta=i*3.142/180;
            glVertex2f(20*cos(theta)+433, 20*sin(theta)+64.5);
            }
            glEnd();

            glBegin(GL_POLYGON);
            for(i=0;i<360;i++)
            {
            theta=i*3.142/180;
            glVertex2f(20*cos(theta)+419, 20*sin(theta)+75.5);
            }
            glEnd();


            glPopMatrix();




















          glfwSwapBuffers(window);
          glfwPollEvents();
        }

    //Fungsi Exit
    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
 }
