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
    glOrtho(0, 800, 800, 0, 1.f, -1.f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void microsoft1()
{
    //MICROSOFT KANAN ATAS
    glColor3f(243/256.0,79/256.0,28/256.0);
    glBegin(GL_QUADS);
    glVertex2d(621,208);
    glVertex2d(621,238);
    glVertex2d(591,238);
    glVertex2d(591,208);
    glEnd();

    glColor3f(127/256.0,188/256.0,0/256.0);
    glBegin(GL_QUADS);
    glVertex2d(654,208);
    glVertex2d(654,238);
    glVertex2d(624,238);
    glVertex2d(624,208);
    glEnd();

    glColor3f(255/256.0,186/256.0,1/256.0);
    glBegin(GL_QUADS);
    glVertex2d(654,241);
    glVertex2d(654,271);
    glVertex2d(624,271);
    glVertex2d(624,241);
    glEnd();

    glColor3f(1/256.0,166/256.0,240/256.0);
    glBegin(GL_QUADS);
    glVertex2d(591,241);
    glVertex2d(591,271);
    glVertex2d(621,271);
    glVertex2d(621,241);
    glEnd();
}

void microsoft2()
{
        //MICROSOFT KANAN BAWAH
    glColor3f(243/256.0,79/256.0,28/256.0);
    glBegin(GL_QUADS);
    glVertex2d(591,445);
    glVertex2d(621,445);
    glVertex2d(621,475);
    glVertex2d(591,475);
    glEnd();

    glColor3f(127/256.0,188/256.0,0/256.0);
    glBegin(GL_QUADS);
    glVertex2d(654,445);
    glVertex2d(654,475);
    glVertex2d(624,475);
    glVertex2d(624,445);
    glEnd();

    glColor3f(134/256.0,69/256.0,165/256.0);
    glBegin(GL_QUADS);
    glVertex2d(654,478);
    glVertex2d(654,508);
    glVertex2d(624,508);
    glVertex2d(624,478);
    glEnd();

    glColor3f(255/256.0,186/256.0,1/256.0);
    glBegin(GL_QUADS);
    glVertex2d(591,478);
    glVertex2d(591,508);
    glVertex2d(621,508);
    glVertex2d(621,478);
    glEnd();
}

void microsoft3()
{
    //MICROSOFT KIRI BAWAH
    glColor3f(243/256.0,79/256.0,28/256.0);
    glBegin(GL_QUADS);
    glVertex2d(137,445);
    glVertex2d(167,445);
    glVertex2d(167,475);
    glVertex2d(137,475);
    glEnd();

    glColor3f(127/256.0,188/256.0,0/256.0);
    glBegin(GL_QUADS);
    glVertex2d(170,445);
    glVertex2d(170,475);
    glVertex2d(200,475);
    glVertex2d(200,445);
    glEnd();

    glColor3f(255/256.0,186/256.0,1/256.0);
    glBegin(GL_QUADS);
    glVertex2d(200,478);
    glVertex2d(200,508);
    glVertex2d(170,508);
    glVertex2d(170,478);
    glEnd();

    glColor3f(1/256.0,166/256.0,240/256.0);
    glBegin(GL_QUADS);
    glVertex2d(137,478);
    glVertex2d(137,508);
    glVertex2d(167,508);
    glVertex2d(167,478);
    glEnd();
}

void microsoft4()
{
    //MICROSOFT KIRI ATAS
    glColor3f(243/256.0,79/256.0,28/256.0);
    glBegin(GL_QUADS);
    glVertex2d(137,207);
    glVertex2d(167,207);
    glVertex2d(167,238);
    glVertex2d(137,238);
    glEnd();

    glColor3f(127/256.0,188/256.0,0/256.0);
    glBegin(GL_QUADS);
    glVertex2d(170,207);
    glVertex2d(200,207);
    glVertex2d(200,237);
    glVertex2d(170,237);
    glEnd();

    glColor3f(134/256.0,69/256.0,165/256.0);
    glBegin(GL_QUADS);
    glVertex2d(170,240);
    glVertex2d(200,240);
    glVertex2d(200,270);
    glVertex2d(170,270);
    glEnd();

    glColor3f(255/256.0,186/256.0,1/256.0);
    glBegin(GL_QUADS);
    glVertex2d(137,241);
    glVertex2d(167,241);
    glVertex2d(167,270);
    glVertex2d(137,270);
    glEnd();
}

void garis_kanan1()
{
    //GARIS KANAN ATAS
    glColor3f(39/256.0,29/256.0,102/256.0);
    glBegin(GL_QUADS);
    glVertex2d(446,292);
    glVertex2d(663,292);
    glVertex2d(663,301);
    glVertex2d(446,301);
    glEnd();
}

void garis_kanan2()
{
    //GARIS KANAN KIRI BAWAH
    glColor3f(39/256.0,29/256.0,102/256.0);
    glBegin(GL_QUADS);
    glVertex2d(138,422);
    glVertex2d(354,422);
    glVertex2d(354,432);
    glVertex2d(138,432);
    glEnd();
}

void huruf_i()
{
    //HURUF I
    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(140,320);
    glVertex2d(170,320);
    glVertex2d(170,327);
    glVertex2d(140,327);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(140,400);
    glVertex2d(170,400);
    glVertex2d(170,407);
    glVertex2d(140,407);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(150,400);
    glVertex2d(161,400);
    glVertex2d(161,323);
    glVertex2d(150,323);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_TRIANGLES);
    glVertex2d(140,327);
    glVertex2d(170,327);
    glVertex2d(154,338);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_TRIANGLES);
    glVertex2d(140,400);
    glVertex2d(170,400);
    glVertex2d(154,388);
    glEnd();
}

void huruf_k()
{
    //HURUF K
    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(185,320);
    glVertex2d(215,320);
    glVertex2d(215,327);
    glVertex2d(185,327);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(185,400);
    glVertex2d(215,400);
    glVertex2d(215,407);
    glVertex2d(185,407);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(243,320);
    glVertex2d(273,320);
    glVertex2d(273,327);
    glVertex2d(243,327);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(243,400);
    glVertex2d(273,400);
    glVertex2d(273,407);
    glVertex2d(243,407);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(195,400);
    glVertex2d(206,400);
    glVertex2d(206,323);
    glVertex2d(195,323);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_TRIANGLES);
    glVertex2d(185,327);
    glVertex2d(215,327);
    glVertex2d(199,338);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_TRIANGLES);
    glVertex2d(185,400);
    glVertex2d(215,400);
    glVertex2d(199,388);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(206,375);
    glVertex2d(204,366);
    glVertex2d(258,325);
    glVertex2d(270,327);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(221,354);
    glVertex2d(229,349);
    glVertex2d(270,400);
    glVertex2d(257,400);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_TRIANGLES);
    glVertex2d(273,327);
    glVertex2d(243,327);
    glVertex2d(259,336);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_TRIANGLES);
    glVertex2d(243,400);
    glVertex2d(275,400);
    glVertex2d(258,391);
    glEnd();
}

void huruf_h()
{
    //HURUF H
    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(288,320);
    glVertex2d(318,320);
    glVertex2d(318,327);
    glVertex2d(288,327);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(288,400);
    glVertex2d(318,400);
    glVertex2d(318,407);
    glVertex2d(288,407);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(299,320);
    glVertex2d(309,320);
    glVertex2d(309,405);
    glVertex2d(299,405);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_TRIANGLES);
    glVertex2d(288,327);
    glVertex2d(318,327);
    glVertex2d(302,338);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_TRIANGLES);
    glVertex2d(288,400);
    glVertex2d(318,400);
    glVertex2d(302,388);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(350,320);
    glVertex2d(381,320);
    glVertex2d(381,327);
    glVertex2d(350,327);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(350,400);
    glVertex2d(381,400);
    glVertex2d(381,407);
    glVertex2d(350,407);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(361,322);
    glVertex2d(371,322);
    glVertex2d(371,405);
    glVertex2d(361,405);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_TRIANGLES);
    glVertex2d(350,327);
    glVertex2d(381,327);
    glVertex2d(364,338);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_TRIANGLES);
    glVertex2d(350,400);
    glVertex2d(381,400);
    glVertex2d(364,388);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(307,359);
    glVertex2d(361,359);
    glVertex2d(361,368);
    glVertex2d(307,368);
    glEnd();
}

void huruf_s()
{
    //HURUF S
    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(425,319);
    glVertex2d(458,319);
    glVertex2d(458,340);
    glVertex2d(425,340);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2d(419,320);
    glVertex2d(413,320);
    glVertex2d(408,321);
    glVertex2d(404,323);
    glVertex2d(399,326);
    glVertex2d(396,330);
    glVertex2d(395,333);
    glVertex2d(393,339);
    glVertex2d(393,345);
    glVertex2d(393,356);
    glVertex2d(395,362);
    glVertex2d(396,365);
    glVertex2d(399,368);
    glVertex2d(405,372);
    glVertex2d(411,374);
    glVertex2d(416,375);
    glVertex2d(419,375);
    glVertex2d(419,349);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2d(419,349);
    glVertex2d(425,352);
    glVertex2d(429,352);
    glVertex2d(434,353);
    glVertex2d(439,353);
    glVertex2d(445,354);
    glVertex2d(449,355);
    glVertex2d(454,357);
    glVertex2d(458,361);
    glVertex2d(459,363);
    glVertex2d(461,369);
    glVertex2d(463,376);
    glVertex2d(462,378);
    glVertex2d(437,378);
    glVertex2d(431,377);
    glVertex2d(422,376);
    glVertex2d(419,375);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2d(437,378);
    glVertex2d(437,410);
    glVertex2d(442,410);
    glVertex2d(447,409);
    glVertex2d(451,407);
    glVertex2d(455,405);
    glVertex2d(457,403);
    glVertex2d(459,400);
    glVertex2d(460,398);
    glVertex2d(461,394);
    glVertex2d(462,391);
    glVertex2d(462,386);
    glVertex2d(463,381);
    glVertex2d(462,378);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(395,390);
    glVertex2d(431,390);
    glVertex2d(431,411);
    glVertex2d(395,411);
    glEnd();
}

void huruf_a()
{
    //HURUF A
    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(468,400);
    glVertex2d(498,400);
    glVertex2d(498,407);
    glVertex2d(468,407);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(530,400);
    glVertex2d(560,400);
    glVertex2d(560,407);
    glVertex2d(530,407);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(476,400);
    glVertex2d(488,400);
    glVertex2d(518,318);
    glVertex2d(506,318);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(541,400);
    glVertex2d(553,400);
    glVertex2d(522,318);
    glVertex2d(510,318);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(490,369);
    glVertex2d(490,378);
    glVertex2d(537,378);
    glVertex2d(535,369);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_TRIANGLES);
    glVertex2d(468,400);
    glVertex2d(498,400);
    glVertex2d(483,391);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_TRIANGLES);
    glVertex2d(530,400);
    glVertex2d(560,400);
    glVertex2d(545,391);
    glEnd();
}

void huruf_n()
{
    //HURUF N
    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(568,400);
    glVertex2d(598,400);
    glVertex2d(598,407);
    glVertex2d(568,407);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(568,320);
    glVertex2d(598,320);
    glVertex2d(598,327);
    glVertex2d(568,327);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(631,320);
    glVertex2d(661,320);
    glVertex2d(661,327);
    glVertex2d(631,327);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(640,407);
    glVertex2d(650,407);
    glVertex2d(650,320);
    glVertex2d(640,320);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(577,400);
    glVertex2d(587,400);
    glVertex2d(587,320);
    glVertex2d(577,320);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_TRIANGLES);
    glVertex2d(568,400);
    glVertex2d(598,400);
    glVertex2d(583,391);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_TRIANGLES);
    glVertex2d(568,327);
    glVertex2d(598,327);
    glVertex2d(583,338);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_QUADS);
    glVertex2d(650,407);
    glVertex2d(636,407);
    glVertex2d(580,320);
    glVertex2d(598,320);
    glEnd();

    glColor3f(6/256.0,33/256.0,57/256.0);
    glBegin(GL_TRIANGLES);
    glVertex2d(631,327);
    glVertex2d(661,327);
    glVertex2d(646,338);
    glEnd();
}

void garis_kanan3()
{
    //GARIS KANAN ATAS
    glColor3f(39/256.0,29/256.0,102/256.0);
    glLineWidth(5.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2d(105,320);
    glVertex2d(105,402);
    glEnd();
}

void garis_kanan4()
{
    //GARIS KIRI ATAS
    glColor3f(39/256.0,29/256.0,102/256.0);
    glLineWidth(5.0f);
    glBegin(GL_LINES);
    glVertex2d(696,320);
    glVertex2d(696,402);
    glEnd();
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
        window = glfwCreateWindow(640, 480, "Simple Example", NULL, NULL);

        if (!window){
          glfwTerminate();
          exit(EXIT_FAILURE);
        }

        glfwMakeContextCurrent(window);
        glfwSwapInterval(1);
        glfwSetKeyCallback(window, key_callback);
        glfwSetMouseButtonCallback(window, mouse_button_callback);

        while (!glfwWindowShouldClose(window))
        {
          int width, height;
          glfwGetFramebufferSize(window, &width, &height);
          glViewport(0, 0, width, height);
          //fungsi untuk menampilkan objek
          setup_viewport(window);
          display();

          glPushMatrix();
          glTranslatef(sin(glfwGetTime() * 2) * 80, 0, 0);
          garis_kanan1();
          glPopMatrix();

          glPushMatrix();
          glTranslatef(sin(glfwGetTime() * 2) * 80, 0, 0);
          garis_kanan2();
          glPopMatrix();

          glPushMatrix();
          glTranslatef(0, sin(glfwGetTime() * 2)*50, 0);
          garis_kanan3();
          glPopMatrix();

          glPushMatrix();
          glTranslatef(0, sin(glfwGetTime() * 2)*50, 0);
          garis_kanan4();
          glPopMatrix();

          glPushMatrix();
          glTranslatef(623, 239, 0);
          glRotatef((float) glfwGetTime() * 100.f, 0.f, 0.f, 1.f);
          glTranslatef(-623, -239, 0);
          microsoft1();
          glPopMatrix();

          glPushMatrix();
          glTranslatef(623, 477, 0);
          glRotatef((float) glfwGetTime() * -100.f, 0.f, 0.f, 1.f);
          glTranslatef(-623, -477, 0);
          microsoft2();
          glPopMatrix();

          glPushMatrix();
          glTranslatef(169, 476, 0);
          glRotatef((float) glfwGetTime() * 100.f, 0.f, 0.f, 1.f);
          glTranslatef(-169, -476, 0);
          microsoft3();
          glPopMatrix();

          glPushMatrix();
          glTranslatef(168, 240, 0);
          glRotatef((float) glfwGetTime() * -100.f, 0.f, 0.f, 1.f);
          glTranslatef(-168, -240, 0);
          microsoft4();
          glPopMatrix();

          glPushMatrix();
          glTranslatef(385, 363, 0);
          glScalef(sin(glfwGetTime() * 1.f), sin(glfwGetTime() * 1.f), 0.f);
          glTranslatef(-385, -363, 0);
          huruf_i();
          huruf_k();
          huruf_h();
          huruf_s();
          huruf_a();
          huruf_n();
          glPopMatrix();

          glFlush();
          glfwSwapBuffers(window);
          glfwPollEvents();
        }
    //Fungsi Exit
    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
}
