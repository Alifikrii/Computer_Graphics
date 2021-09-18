#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double color1=196.0;
double color2=100.0;

    static void error_callback(int error, const char* description) {
      fputs(description, stderr);
    }
    static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods){
      if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
      glfwSetWindowShouldClose(window, GL_TRUE);
    }

void doIfClicked(int button, int action){
        if (button == GLFW_MOUSE_BUTTON_LEFT && action == GLFW_PRESS){
            double color3;
            color3=color1;
            color1=color2;
            color2=color3;
        }
}

void mouse_button_callback(GLFWwindow* window, int button, int action, int mods) {
    doIfClicked(button, action);
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
    glOrtho(0, 1120, 600, 0, 1.f, -1.f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

    void huruf_t() //t_tegak
    {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(250.0/255.0f, 227.0/255.0f, 215.0/225.0f, 1.0f); //warna background
    glBegin(GL_QUADS);
    glColor4ub(120,101,83,1); //
    glVertex2d(171, 389);
    glVertex2d(208, 389);
    glVertex2d(208, 229);
    glVertex2d(171, 229);
    glEnd();


     //t_datar
    glBegin(GL_QUADS);
    glColor4ub(120,101,83,1); //
    glVertex2d(115, 232);
    glVertex2d(270, 232);
    glVertex2d(270, 196);
    glVertex2d(115, 196);
    glEnd();
    }

    void huruf_a() // a_kiri
    {
    glBegin(GL_POLYGON);
    glColor4ub(66,114,141,1);
    glVertex2d(265, 389);
    glVertex2d(299, 389);
    glVertex2d(369, 196);
    glVertex2d(335, 196);
    glEnd();

    // Akanan
    glBegin(GL_POLYGON);
    glColor4ub(66,114,141,1);
    glVertex2d(404, 389);
    glVertex2d(438, 389);
    glVertex2d(369, 196);
    glVertex2d(335, 196);
    glEnd();


    //Adatar
    glBegin(GL_QUADS);
    glColor4ub(66,114,141,1);
    glVertex2d(310, 350);
    glVertex2d(394, 350);
    glVertex2d(394, 318);
    glVertex2d(310, 318);
    glEnd();
    }

    void huruf_m() //Mkiri
    {
    glBegin(GL_POLYGON);
    glColor4ub(66,114,141,1);
    glVertex2d(462, 389);
    glVertex2d(496, 389);
    glVertex2d(496, 196);
    glVertex2d(462, 196);
    glEnd();


    //Mkirislip
    glBegin(GL_POLYGON);
    glColor4ub(66,114,141,1);
    glVertex2d(492, 249);
    glVertex2d(544, 386);
    glVertex2d(561, 338);
    glVertex2d(508, 196);
    glVertex2d(491, 196);
    glEnd();


    //Mkananslip
    glBegin(GL_POLYGON);
    glColor4ub(66,114,141,1);
    glVertex2d (544, 386);
    glVertex2d (578, 386);
    glVertex2d (626, 249);
    glVertex2d (638, 199);
    glVertex2d (614, 196);
    glEnd();


    // Mkanan
    glBegin(GL_QUADS);
    glColor4ub(66,114,141,1);
    glVertex2d(626, 386);
    glVertex2d(660, 386);
    glVertex2d(660, 196);
    glVertex2d(626, 196);
    glEnd();
    }

    void huruf_i(){
    glBegin(GL_QUADS);
    glColor4ub(66,114,141,1);
    glVertex2d(700, 386);
    glVertex2d(734, 386);
    glVertex2d(734, 196);
    glVertex2d(700, 196);
    glEnd();
    }

    void huruf_f()
    { //Ftegak
    glBegin(GL_QUADS);
    glColor4ub(120,101,83,1);
    glVertex2d(845, 386);
    glVertex2d(879, 386);
    glVertex2d(879, 196);
    glVertex2d(845, 196);
    glEnd();


    //Fmiringb
    glBegin(GL_QUADS);
    glColor4ub(120,101,83,1);
    glVertex2d(875, 309);
    glVertex2d(954, 309);
    glVertex2d(954, 280);
    glVertex2d(875, 280);
    glEnd();


    //Fmiringat
    glBegin(GL_QUADS);
    glColor4ub(120,101,83,1);
    glVertex2d(875, 227);
    glVertex2d(965, 227);
    glVertex2d(965, 196);
    glVertex2d(875, 196);
    glEnd();
    }

    void kotak1 (){
    glBegin(GL_QUADS);
    glColor4ub(66,114,141,1); //106, 168, 137, 1
    glVertex2d(545, 466); //a
    glVertex2d(961, 466);
    glVertex2d(961, 452);
    glVertex2d(545, 452);
    glEnd();
    }

    void kotak2 (){
    glBegin(GL_QUADS);
    glColor4ub(66,114,141,1); //106, 168, 137, 1
    glVertex2d(109, 145); //a
    glVertex2d(555, 145);
    glVertex2d(555, 131);
    glVertex2d(109, 131);
    glEnd();
    }

    void segitiga(){
    glBegin(GL_TRIANGLES);
    glColor4ub(66,114,141,1); //106, 168, 137, 1
    glVertex2d(168, 128); //a
    glVertex2d(209, 128);
    glVertex2d(188, 85);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor4ub(66,114,141,1); //106, 168, 137, 1
    glVertex2d(143, 128); //a
    glVertex2d(184, 128);
    glVertex2d(163, 85);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor4ub(66,114,141,1); //106, 168, 137, 1
    glVertex2d(116, 128); //a
    glVertex2d(157, 128);
    glVertex2d(135, 85);
    glEnd();
    }

     void segitigaatas(){
    glBegin(GL_TRIANGLES);
    glColor4ub(66,114,141,1); //106, 168, 137, 1
    glVertex2d(848, 459); //a
    glVertex2d(889, 459);
    glVertex2d(871, 503);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor4ub(66,114,141,1); //106, 168, 137, 1
    glVertex2d(885, 459); //a
    glVertex2d(926, 459);
    glVertex2d(905, 503);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor4ub(66,114,141,1); //106, 168, 137, 1
    glVertex2d(918, 459); //a
    glVertex2d(959, 459);
    glVertex2d(938, 503);
    glEnd();
    }
    void bintang(){
    glBegin(GL_POLYGON);
    glColor4ub(66,114,141,1); //106, 168, 137, 1
    glVertex2d(43, 319); //a
    glVertex2d(32, 355);
    glVertex2d(65, 332);
    glVertex2d(95, 355);
    glVertex2d(88, 319);
    glVertex2d(118,291); //b
    glVertex2d(79, 291);
    glVertex2d(65, 258);
    glVertex2d(52, 291);
    glVertex2d(16, 291);
    glEnd();
    }

    void bintang2(){
    glBegin(GL_POLYGON);
    glColor4ub(66,114,141,1);
    glVertex2d(1020, 319); //a
    glVertex2d(1009, 355);
    glVertex2d(1042, 332);
    glVertex2d(1073, 355);
    glVertex2d(1065, 319);
    glVertex2d(1092, 291); //b
    glVertex2d(1056, 291);
    glVertex2d(1042, 258);
    glVertex2d(1029, 291);
    glVertex2d(993, 291);
    glEnd();
    glFlush();
}

void display()
{
    //BACKGROUND
    glClearColor(color1/256.0f, color1/256.0f, color1/256.0f, color1/256.0f);
    glClear(GL_COLOR_BUFFER_BIT);
}

 int main(void) {
        //Window
        GLFWwindow* window;
        glfwSetErrorCallback(error_callback);

        if (!glfwInit())exit(EXIT_FAILURE);
        window = glfwCreateWindow(1120, 600, "Simple Example", NULL, NULL);

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
          glfwGetFramebufferSize(window, &width, &height);
          glViewport(0, 0, width, height);
          //fungsi untuk menampilkan objek
          setup_viewport(window);

          glPushMatrix();
          glTranslatef(560, 283, 0);
          glScalef(sin(glfwGetTime() * 1.f), sin(glfwGetTime() * 1.f), 0.f);
          glTranslatef(-560, -283, 0);
          huruf_t();
          huruf_a();
          huruf_m ();
          huruf_i ();
          huruf_f ();
          glPopMatrix();

          glPushMatrix();
          glTranslatef(sin(glfwGetTime() * 2) * 50, 0, 0);
          segitiga();
          glPopMatrix();

          glPushMatrix();
          glTranslatef(sin(glfwGetTime() * 2) * 50, 0, 0);
          segitigaatas();
          glPopMatrix();

          glPushMatrix();
          glTranslatef(65,306,0.f); // koordinat pusat
          glRotatef(glfwGetTime()*150,0.0f,0.0f,1.0f);
          glTranslatef(-65,-306,0); // minusin koordinat
          bintang();
          glPopMatrix();

          glPushMatrix();
          glTranslatef(1042,306,0.f); // koordinat pusat
          glRotatef(glfwGetTime()*150,0.0f,0.0f,1.0f);
          glTranslatef(-1042,-306,0); // minusin koordinat
          bintang2();
          glPopMatrix();


          kotak1();
          kotak2();
          glfwSwapBuffers(window);
          glfwPollEvents();
        }

    //Fungsi Exit
    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
 }
