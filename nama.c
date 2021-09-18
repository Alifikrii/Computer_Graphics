
#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double red =0.141;
double green=0.109;
double blue =0.337;
int count=0;




    void doIfClicked(int button, int action){

        if (button == GLFW_MOUSE_BUTTON_LEFT && action == GLFW_PRESS){

            count+=1;


            if(count%2==0)
            {
                red =0.909;
                green=0.905;
                blue =0.847;

            }

            else if(count%2==1)
            {
                red =0.141;
                green=0.109;
                blue =0.337;

            }
        }
}

void mouse_button_callback(GLFWwindow* window, int button, int action, int mods) {
    doIfClicked(button, action);
}

static void error_callback(int error, const char* description) {
      fputs(description, stderr);
    }
    static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods){
      if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
      glfwSetWindowShouldClose(window, GL_TRUE);
    }

    void display()
{
    //BACKGROUND
    glClearColor(red, green, blue, 1);
    glClear(GL_COLOR_BUFFER_BIT);
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
    glOrtho(0, 667, 480, 0, 1.f, -1.f);
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
        window = glfwCreateWindow(667, 480, "Simple Example", NULL, NULL);

        if (!window){
          glfwTerminate();
          exit(EXIT_FAILURE);
        }



        glfwMakeContextCurrent(window);
        glfwSwapInterval(1);
        glfwSetKeyCallback(window, key_callback);
        glfwSetMouseButtonCallback(window, mouse_button_callback);

        while (!glfwWindowShouldClose(window)){
            display();
            setup_viewport(window);
          int width, height;
          glfwGetFramebufferSize(window, &width, &height);
          glViewport(0, 0, width, height);




          //fungsi untuk menampilkan objek

            //ini awan kanan
            glPushMatrix();
            glTranslatef(-60, 0 ,0);
            glTranslatef(0+(sin(glfwGetTime())+1)/2*60,0,0);

            glBegin(GL_POLYGON);
            glColor3d(0.905, 0.878, 0.517); //sesuaikan dengan warna layar
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

            //ini awan kiri
             glPushMatrix();
            glTranslatef(50, 0 ,0);
            glTranslatef(0+(sin(glfwGetTime())+1)/2*60,0,0);

            glBegin(GL_POLYGON);
            glColor3d(0.905, 0.878, 0.517); //sesuaikan dengan warna layar
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

            //ini bulan
            glPushMatrix();
            glBegin(GL_POLYGON);

            glColor3d(0.905, 0.878, 0.517);
            for(i=0;i<361;i++)
            {
            theta=i*3.142/180;
            glVertex2f(50*cos(theta)+90, 50*sin(theta)+70);
            }
            glEnd();


            glBegin(GL_POLYGON);
            glColor3d(red,green,blue);
            for(i=0;i<361;i++)
            {
            theta=i*3.142/180;
            glVertex2f(50*cos(theta)+100, 50*sin(theta)+70);
            }
            glEnd();
            glPopMatrix();

            // ini huruf A
            glBegin(GL_QUADS);
            glColor3d(0.980, 0.701, 0.917);
            glVertex2d(55, 253);
            glVertex2d(32.5, 248);
            glVertex2d(69.73, 129);
            glVertex2d(88, 134);
            glEnd();

            glBegin(GL_QUADS);
            glColor3d(0.980, 0.701, 0.917);
            glVertex2d(52, 194);
            glVertex2d(52, 214);
            glVertex2d(106, 194);
            glVertex2d(106, 214);
            glEnd();

            glBegin(GL_QUADS);
            glColor3d(0.980, 0.701, 0.917);
            glVertex2d(71, 141);
            glVertex2d(88, 134);
            glVertex2d(141, 245);
            glVertex2d(124, 253);
            glEnd();

            //huruf M
            glBegin(GL_QUADS);
            glColor3d(0.980, 0.701, 0.917);
            glVertex2d(178.38, 252.4);
            glVertex2d(159.39, 253.12);
            glVertex2d(155, 137.72);
            glVertex2d(173.99, 137);
            glEnd();

              glBegin(GL_QUADS);
            glColor3d(0.980, 0.701, 0.917);
            glVertex2d(161, 148.7);
            glVertex2d(175.57, 135);
            glVertex2d(219.72, 181.95);
            glVertex2d(205.15, 195.65);
            glEnd();

            glBegin(GL_QUADS);
            glColor3d(0.980, 0.701, 0.917);
            glVertex2d(210.31, 201.76);
            glVertex2d(196, 187.4);
            glVertex2d(247.58, 136);
            glVertex2d(261.89, 150.36);
            glEnd();

            glBegin(GL_QUADS);
            glColor3d(0.980, 0.701, 0.917);
            glVertex2d(265.3, 253.64);
            glVertex2d(246.3, 253.85);
            glVertex2d(245, 137.21);
            glVertex2d(264, 137);
            glEnd();

            // huruf I
            glBegin(GL_QUADS);
            glColor3d(0.980, 0.701, 0.917);
            glVertex2d(293.3, 252.85);
            glVertex2d(312.3, 252.64);
            glVertex2d(311, 136);
            glVertex2d(292, 136.21);
            glEnd();

            //huruf R
            glBegin(GL_QUADS);
            glColor3d(0.980, 0.701, 0.917);
            glVertex2d(354.3, 250.64);
            glVertex2d(335.3, 250.85);
            glVertex2d(334, 134.21);
            glVertex2d(353, 134);
            glEnd();

            glBegin(GL_QUADS);
            glColor3d(0.980, 0.701, 0.917);
            glVertex2d(339, 148);
            glVertex2d(339, 134);
            glVertex2d(418, 134);
            glVertex2d(418, 148);
            glEnd();

            glBegin(GL_QUADS);
            glColor3d(0.980, 0.701, 0.917);
            glVertex2d(419.46, 182.75);
            glVertex2d(402.66, 183.39);
            glVertex2d(401, 139.64);
            glVertex2d(417.8, 139);
            glEnd();

            glBegin(GL_QUADS);
            glColor3d(0.980, 0.701, 0.917);
            glVertex2d(342, 195);
            glVertex2d(342, 178);
            glVertex2d(419, 178);
            glVertex2d(419, 195);
            glEnd();

            glBegin(GL_QUADS);
            glColor3d(0.980, 0.701, 0.917);
            glVertex2d(417.74, 239.42);
            glVertex2d(408.1, 250.07);
            glVertex2d(351, 198.42);
            glVertex2d(360.64, 187.76);
            glEnd();

            // huruf A
            glBegin(GL_QUADS);
            glColor3d(0.980, 0.701, 0.917);
            glVertex2d(444.33, 250.62);
            glVertex2d(426, 245.6);
            glVertex2d(458.73, 126);
            glVertex2d(477.06, 131.02);
            glEnd();

            glBegin(GL_QUADS);
            glColor3d(0.980, 0.701, 0.917);
            glVertex2d(532.85, 241.76);
            glVertex2d(515.73, 249.99);
            glVertex2d(462, 138.23);
            glVertex2d(479.12, 130);
            glEnd();

            glBegin(GL_QUADS);
            glColor3d(0.980, 0.701, 0.917);
            glVertex2d(443, 205);
            glVertex2d(443, 185);
            glVertex2d(497, 185);
            glVertex2d(497, 205);
            glEnd();

            // Tanda seru
            glBegin(GL_QUADS);
            glColor3d(0.980, 0.701, 0.917);
            glVertex2d(582.98, 215.46);
            glVertex2d(563.98, 215.67);
            glVertex2d(563, 128.21);
            glVertex2d(582, 128);
            glEnd();

            glBegin(GL_POLYGON);

            glColor3d(0.980, 0.701, 0.917);
            for(i=0;i<361;i++)
            {
            theta=i*3.142/180;
            glVertex2f(10*cos(theta)+575, 10*sin(theta)+240);
            }
            glEnd();

            // ini kota
             glBegin(GL_QUADS);
            glColor3d(0, 0, 0);
            glVertex2d(119, 480);
            glVertex2d(53, 480);
            glVertex2d(53, 350);
            glVertex2d(119, 350);
            glEnd();

            glBegin(GL_QUADS);
            glColor3d(0.788, 0.8, 0.160);
            glVertex2d(97, 403);
            glVertex2d(70, 403);
            glVertex2d(70, 373);
            glVertex2d(97, 373);
            glEnd();

            glBegin(GL_QUADS);
            glColor3d(0.788, 0.8, 0.160);
            glVertex2d(97, 448);
            glVertex2d(70, 448);
            glVertex2d(70, 418);
            glVertex2d(97, 418);
            glEnd();

            glBegin(GL_QUADS);
            glColor3d(0, 0, 0);
            glVertex2d(216, 480);
            glVertex2d(147, 480);
            glVertex2d(147, 380);
            glVertex2d(216, 380);
            glEnd();

            glBegin(GL_QUADS);
            glColor3d(0.788, 0.8, 0.160);
            glVertex2d(209, 460);
            glVertex2d(182, 460);
            glVertex2d(182, 430);
            glVertex2d(209, 430);
            glEnd();

            glBegin(GL_QUADS);
            glColor3d(0.788, 0.8, 0.160);
            glVertex2d(183, 418);
            glVertex2d(156, 418);
            glVertex2d(156, 388);
            glVertex2d(183, 388);
            glEnd();

            glBegin(GL_TRIANGLES);
            glColor3d(0,0,0);
            glVertex2d(219.04, 381.25);
            glVertex2d(141.96 , 381.25);
            glVertex2d(180.5, 334);
            glEnd();

            glBegin(GL_QUADS);
            glColor3d(0, 0, 0);
            glVertex2d(359, 484);
            glVertex2d(259, 484);
            glVertex2d(259, 321);
            glVertex2d(359, 321);
            glEnd();

            glBegin(GL_QUADS);
            glColor3d(0.788, 0.8, 0.160);
            glVertex2d(351, 427);
            glVertex2d(324, 427);
            glVertex2d(324, 397);
            glVertex2d(351, 397);
            glEnd();

            glBegin(GL_QUADS);
            glColor3d(0.788, 0.8, 0.160);
            glVertex2d(304, 429);
            glVertex2d(277, 429);
            glVertex2d(277, 399);
            glVertex2d(304, 399);
            glEnd();

            glBegin(GL_QUADS);
            glColor3d(0.788, 0.8, 0.160);
            glVertex2d(304, 373);
            glVertex2d(277, 373);
            glVertex2d(277, 343);
            glVertex2d(304, 343);
            glEnd();

            glBegin(GL_QUADS);
            glColor3d(0.788, 0.8, 0.160);
            glVertex2d(348, 373);
            glVertex2d(321, 373);
            glVertex2d(321, 343);
            glVertex2d(348, 343);
            glEnd();

            glBegin(GL_QUADS);
            glColor3d(0, 0, 0);
            glVertex2d(458, 480);
            glVertex2d(392, 480);
            glVertex2d(392, 317);
            glVertex2d(458, 317);
            glEnd();

            glBegin(GL_TRIANGLES);
            glColor3d(0,0,0);
            glVertex2d(463.04 , 317.25);
            glVertex2d(385.96 , 317.25);
            glVertex2d(424.5 , 270);
            glEnd();

            glBegin(GL_QUADS);
            glColor3d(0.788, 0.8, 0.160);
            glVertex2d(441, 418);
            glVertex2d(414, 418);
            glVertex2d(414, 388);
            glVertex2d(441, 388);
            glEnd();

            glBegin(GL_QUADS);
            glColor3d(0.788, 0.8, 0.160);
            glVertex2d(443, 366);
            glVertex2d(416, 366);
            glVertex2d(416, 336);
            glVertex2d(443, 336);
            glEnd();

            glBegin(GL_QUADS);
            glColor3d(0, 0, 0);
            glVertex2d(586, 480);
            glVertex2d(497, 480);
            glVertex2d(497, 265);
            glVertex2d(586, 265);
            glEnd();

            glBegin(GL_QUADS);
            glColor3d(0.788, 0.8, 0.160);
            glVertex2d(543, 418);
            glVertex2d(516, 418);
            glVertex2d(516, 388);
            glVertex2d(543, 388);
            glEnd();

            glBegin(GL_QUADS);
            glColor3d(0.788, 0.8, 0.160);
            glVertex2d(569, 366);
            glVertex2d(542, 366);
            glVertex2d(542, 336);
            glVertex2d(569, 336);
            glEnd();

            glBegin(GL_QUADS);
            glColor3d(0.788, 0.8, 0.160);
            glVertex2d(542, 315);
            glVertex2d(515, 315);
            glVertex2d(515, 285);
            glVertex2d(542, 285);
            glEnd();

          glfwSwapBuffers(window);
          glfwPollEvents();
        }

    //Fungsi Exit
    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
 }
