//Risda Awalia
//G64190106


#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double red =0.141;
double green=0.109;
double blue =0.337;
double merah=0.905, hijau=0.878, biru=0.517;
int count=0;


    static void error_callback(int error, const char* description) {
      fputs(description, stderr);
    }
    static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods){
      if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
      glfwSetWindowShouldClose(window, GL_TRUE);
    }

    void doIfClicked(int button, int action){

        if (button == GLFW_MOUSE_BUTTON_LEFT && action == GLFW_PRESS){

            count+=1;


            if(count%2==0)
            {
                red =0.909;
                green=0.905;
                blue=0.847;

                merah=0.909;
                hijau=0.905;
                biru=0.847;

            }

            else if(count%2==1)
            {
                red =0.141;
                green=0.109;
                blue =0.337;

                merah=0.905, hijau=0.878, biru=0.517;

            }
        }
}

void mouse_button_callback(GLFWwindow* window, int button, int action, int mods) {
    doIfClicked(button, action);
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
    glOrtho(0, 1225, 633, 0, 1.f, -1.f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

 int main(void) {
        //Window
        GLFWwindow* window;
        glfwSetErrorCallback(error_callback);

        if (!glfwInit())exit(EXIT_FAILURE);
        window = glfwCreateWindow(1225, 633, "Simple Example", NULL, NULL);

        if (!window){
          glfwTerminate();
          exit(EXIT_FAILURE);
        }

        glfwMakeContextCurrent(window);
        glfwSwapInterval(1);
        glfwSetKeyCallback(window, key_callback);
        glfwSetMouseButtonCallback(window, mouse_button_callback);

        while (!glfwWindowShouldClose(window)){
          int width, height;
          display();
          int i;
          float theta;
          setup_viewport(window);
          glfwGetFramebufferSize(window, &width, &height);
          glViewport(0, 0, width, height);
          //fungsi untuk menampilkan objek

          //ini R

glBegin(GL_QUADS);
glColor3d(0.768, 0.137, 0.137);
glVertex2d(60, 407);
glVertex2d(112, 407);
glVertex2d(112, 154);
glVertex2d(60, 154);
glEnd();

glBegin(GL_QUADS);
glColor3d(0.768, 0.137, 0.137);
glVertex2d(60, 202);
glVertex2d(215, 202);
glVertex2d(215, 154);
glVertex2d(60, 154);
glEnd();


glBegin(GL_QUADS);
glColor3d(0.768, 0.137, 0.137);
glVertex2d(171, 292);
glVertex2d(215, 292);
glVertex2d(215, 154);
glVertex2d(171, 171);
glEnd();

glBegin(GL_QUADS);
glColor3d(0.768, 0.137, 0.137);
glVertex2d(60, 292);
glVertex2d(215, 292);
glVertex2d(215, 248);
glVertex2d(60, 248);
glEnd();

glBegin(GL_QUADS);
glColor3d(0.768, 0.137, 0.137);
glVertex2d(202.78, 406.89);
glVertex2d(233.89, 375.78);
glVertex2d(130.11, 272);
glVertex2d(99, 303.11);
glEnd();

//ini i

glPushMatrix();

glTranslatef(231,0,0);
glBegin(GL_QUADS);
glColor3d(0.768, 0.137, 0.137);
glVertex2d(60, 407);
glVertex2d(112, 407);
glVertex2d(112, 154);
glVertex2d(60, 154);
glEnd();

glPopMatrix();

//ini S

glBegin(GL_QUADS);
glColor3d(0.768, 0.137, 0.137);
glVertex2d(404, 202);
glVertex2d(559, 202);
glVertex2d(559, 154);
glVertex2d(404, 154);
glEnd();

glBegin(GL_QUADS);
glColor3d(0.768, 0.137, 0.137);
glVertex2d(404, 303);
glVertex2d(456, 303);
glVertex2d(456, 154);
glVertex2d(404, 154);
glEnd();

glPushMatrix();
glTranslatef(0,100,0);
glBegin(GL_QUADS);
glColor3d(0.768, 0.137, 0.137);
glVertex2d(404, 202);
glVertex2d(559, 202);
glVertex2d(559, 154);
glVertex2d(404, 154);
glEnd();

glPopMatrix();

glBegin(GL_QUADS);
glColor3d(0.768, 0.137, 0.137);
glVertex2d(507, 406);
glVertex2d(559, 406);
glVertex2d(559, 257);
glVertex2d(507, 257);
glEnd();

glPushMatrix();

glTranslatef(0,205,0);
glBegin(GL_QUADS);
glColor3d(0.768, 0.137, 0.137);
glVertex2d(404, 202);
glVertex2d(559, 202);
glVertex2d(559, 154);
glVertex2d(404, 154);
glEnd();

glPopMatrix();

//ini D

glPushMatrix();

glTranslatef(560,0,0);
glBegin(GL_QUADS);
glColor3d(0.768, 0.137, 0.137);
glVertex2d(60, 407);
glVertex2d(112, 407);
glVertex2d(112, 154);
glVertex2d(60, 154);
glEnd();

glPopMatrix();

glBegin(GL_QUADS);
glColor3d(0.768, 0.137, 0.137);
glVertex2d(637, 202);
glVertex2d(748, 202);
glVertex2d(748, 154);
glVertex2d(637, 154);
glEnd();

glBegin(GL_QUADS);
glColor3d(0.768, 0.137, 0.137);
glVertex2d(723, 384);
glVertex2d(775, 384);
glVertex2d(775, 175);
glVertex2d(723, 175);
glEnd();

glPushMatrix();

glTranslatef(0,205,0);
glBegin(GL_QUADS);
glColor3d(0.768, 0.137, 0.137);
glVertex2d(637, 202);
glVertex2d(748, 202);
glVertex2d(748, 154);
glVertex2d(637, 154);
glEnd();

glPopMatrix();
merah=0.905, hijau=0.878, biru=0.517;
//ini A

glBegin(GL_QUADS);
glColor3d(0.768, 0.137, 0.137);
glVertex2d(827, 391.74);
glVertex2d(875.86, 409.53);
glVertex2d(962.4, 171.79);
glVertex2d(913.53, 154);
glEnd();


glBegin(GL_QUADS);
glColor3d(0.768, 0.137, 0.137);
glVertex2d(1000.27, 408.55);
glVertex2d(1049.13, 390.76);
glVertex2d(961.86, 151);
glVertex2d(913, 168.79);
glEnd();

glBegin(GL_QUADS);
glColor3d(0.768, 0.137, 0.137);
glVertex2d(870, 333);
glVertex2d(1001, 333);
glVertex2d(1001, 281);
glVertex2d(870, 281);
glEnd();

//ini matahari abal-abalnya

glPushMatrix();
glTranslatef((sin(glfwGetTime())+1)/2*90,(0,sin(glfwGetTime())+1)/2*90,0);

glBegin(GL_POLYGON);
            glColor3d(1, 0.780, 0.258);
            for(i=0;i<360;i++)
            {
            theta=i*3.142/180;
            glVertex2f(45*cos(theta)+1102, 45*sin(theta)+563.5);
            }
            glEnd();


glBegin(GL_QUADS);
glColor3d(0.905, 0.941, 0.258);
glVertex2d(1035.55, 543.85);
glVertex2d(1048.65, 522.55);
glVertex2d(988.69, 485.67);
glVertex2d(975.59, 506.96);
glEnd();

glBegin(GL_QUADS);
glColor3d(0.905, 0.941, 0.258);
glVertex2d(1054.14, 512.05);
glVertex2d(1074.47, 497.51);
glVertex2d(1033.11, 439.68);
glVertex2d(1012.77, 454.22);
glEnd();

glBegin(GL_QUADS);
glColor3d(0.905, 0.941, 0.258);
glVertex2d(1086.94, 495.82);
glVertex2d(1111.74, 492.69);
glVertex2d(1102.34, 418.23);
glVertex2d(1077.53, 421.36);
glEnd();

glBegin(GL_QUADS);
glColor3d(0.905, 0.941, 0.258);
glVertex2d(1128, 498.22);
glVertex2d(1150.86, 508.34);
glVertex2d(1181.07, 440.12);
glVertex2d(1158.21, 430);
glEnd();

glBegin(GL_QUADS);
glColor3d(0.905, 0.941, 0.258);
glVertex2d(1155, 525.31);
glVertex2d(1174.64, 540.78);
glVertex2d(1220.79, 482.18);
glVertex2d(1201.14, 466.71);
glEnd();

glPopMatrix();

glPushMatrix();

glTranslatef(0,(0,cos(glfwGetTime())+1)/2*45,0);
glTranslatef(-2,0,0);


glBegin(GL_QUADS);
glColor3d(0.768, 0.137, 0.137);
glVertex2d(293, 122);
glVertex2d(345, 122);
glVertex2d(345, 71);
glVertex2d(293, 71);
glEnd();

glPopMatrix();

//ini bulan
            glPushMatrix();
            glBegin(GL_POLYGON);


            glColor3d(merah,hijau,biru);

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

//ini rumput

glPushMatrix();

glTranslatef(0,25,0);
glTranslatef((0,sin(glfwGetTime())+1)/1*90,0,0);
glColor3d(0.250, 0.752, 0.027);

glBegin(GL_TRIANGLES);

glVertex2d(143.57, 609);
glVertex2d(241.43, 609);
glVertex2d(192.5, 477);
glEnd();

glBegin(GL_TRIANGLES);

glVertex2d(220.36, 610);
glVertex2d(289.64, 610);
glVertex2d(255, 541);
glEnd();

glBegin(GL_TRIANGLES);

glVertex2d(280, 610);
glVertex2d(375, 610);
glVertex2d(327.5, 512);
glEnd();

glBegin(GL_TRIANGLES);

glVertex2d(363.57, 609);
glVertex2d(461.43, 609);
glVertex2d(412.5, 477);
glEnd();

glBegin(GL_TRIANGLES);

glVertex2d(459, 608);
glVertex2d(554, 608);
glVertex2d(506.5, 510);
glEnd();

glBegin(GL_TRIANGLES);

glVertex2d(538.36, 610);
glVertex2d(607.64, 610);
glVertex2d(573, 541);
glEnd();

glBegin(GL_TRIANGLES);

glVertex2d(538.36, 610);
glVertex2d(607.64, 610);
glVertex2d(573, 541);
glEnd();

glBegin(GL_TRIANGLES);

glVertex2d(599.57, 609);
glVertex2d(697.43, 609);
glVertex2d(648.5, 477);
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
