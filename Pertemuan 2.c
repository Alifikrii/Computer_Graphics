//Andi Muhammad Alifikri
//G64190005


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



    void setup_viewport(GLFWwindow* window)
    {
        // setting viewports size, projection
        float ratio;
        int width, height;
        glfwGetFramebufferSize(window, &width, &height);
        ratio = width / (float) height;
        glViewport(0, 0, width, height);

        glClear(GL_COLOR_BUFFER_BIT);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glOrtho(0,640,0,720, 1.f, -1.f);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
    }
    void display()
    {
    glClearColor(0,0,0,1); //warna background
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();


    }

    void warna()
    {
        glColor3d(0.0, 1.0, 0.0);
    }

//fungsi utama
 int main(void) {
        //Window
        GLFWwindow* window;


        glfwSetErrorCallback(error_callback);

        float theta, move=0, change=1;
        int i=0;
        float n=-20;
        if (!glfwInit())exit(EXIT_FAILURE);
        window = glfwCreateWindow(640, 720, "Pertemuan 2", NULL, NULL);


        if (!window){
          glfwTerminate();
          exit(EXIT_FAILURE);
        }

        glfwMakeContextCurrent(window);
        glfwSwapInterval(1);
        glfwSetKeyCallback(window, key_callback);

        while (!glfwWindowShouldClose(window)){
          int width, height;
          display();
          setup_viewport(window);
          glfwGetFramebufferSize(window, &width, &height);
          glViewport(0, 0, width, height);

          //fungsi untuk menampilkan objek



        glBegin(GL_TRIANGLES);
        glColor3d(0, 255, 0);
        glVertex2d(400, 600);
        glVertex2d(400, 500);
        glVertex2d(600, 500);
        glEnd();





        glBegin(GL_LINE_LOOP);
        glVertex2d(400, 200);
        glVertex2d(600, 200);
        glVertex2d(600, 500);
        glVertex2d(200, 500);
        glEnd();

        glBegin(GL_LINE_STRIP);
        warna();
        for(i=0;i<180;i++)
        {
            theta=i*3.142/180;
            glVertex2f(50*cos(theta)+200, 50*sin(theta)+550);
        }
        glEnd();

        //ini badannya
        glBegin(GL_QUADS);

        warna();
        glVertex2d(390,500 ); //bawah kanan
        glVertex2d(390,600);  //atas kanan
        glVertex2d(250, 600); //atas kiri
        glVertex2d(250, 500); //bawah kiri
        glEnd();


//Mari Kita Bikin Android



        //ini kepalanya
        glBegin(GL_POLYGON);
        warna();
        for(i=0;i<181;i++)
        {
            theta=i*3.142/180;
            glVertex2f(70*cos(theta)+320, 70*sin(theta)+355);
        }
        glEnd();

        //ini mata kanan
        glBegin(GL_POLYGON);
        glColor3d(0,0,0); //sesuaikan dengan warna layar
        for(i=0;i<360;i++)
        {
            theta=i*3.142/180;
            glVertex2f(6*cos(theta)+350, 6*sin(theta)+385);
        }
        glEnd();

        //ini mata kiri
        glBegin(GL_POLYGON);
        glColor3d(0,0,0); //sesuaikan dengan warna layar
        for(i=0;i<360;i++)
        {
            theta=i*3.142/180;
            glVertex2f(6*cos(theta)+290, 6*sin(theta)+385);
        }
        glEnd();


        //ini badannya
        glBegin(GL_QUADS);

        warna();
        glVertex2d(390,210 ); //bawah kanan
        glVertex2d(390,350);  //atas kanan
        glVertex2d(250, 350); //atas kiri
        glVertex2d(250, 210); //bawah kiri
        glEnd();



        //ini tangannya kiri
        //lebar 35*100
        glBegin(GL_QUADS);
        warna();
        glVertex2d(245,240 );
        glVertex2d(245,340);
        glVertex2d(210, 340);
        glVertex2d(210, 240);
        glEnd();

        //ini tangan atas kiri
        glBegin(GL_POLYGON);
        warna();
        for(i=0;i<360;i++)
        {
            theta=i*3.142/180;
            glVertex2f(17.5*cos(theta)+227.5, 17.5*sin(theta)+340);
        }
        glEnd();

        //ini tangan bawah kiri
        glBegin(GL_POLYGON);
        warna();
        for(i=0;i<360;i++)
        {
            theta=i*3.142/180;
            glVertex2f(17.5*cos(theta)+227.5, 17.5*sin(theta)+240);
        }
        glEnd();


        //ini tangannya kanan
        //lebar 35*100
        glBegin(GL_QUADS);

        warna();
        glVertex2d(430,240 );
        glVertex2d(430,340);
        glVertex2d(395, 340);
        glVertex2d(395, 240);
        glEnd();

        //ini tangan atas kanan
        glBegin(GL_POLYGON);
        warna();
        for(i=0;i<360;i++)
        {
            theta=i*3.142/180;
            glVertex2f(17.5*cos(theta)+412.5, 17.5*sin(theta)+340);
        }
        glEnd();

        //ini tangan bawah kanan
        glBegin(GL_POLYGON);
        warna();
        for(i=0;i<360;i++)
        {
            theta=i*3.142/180;
            glVertex2f(17.5*cos(theta)+412.5, 17.5*sin(theta)+240);
        }
        glEnd();


        //ini kaki kanan
        //lebar 35*50
        glBegin(GL_QUADS);

        warna();
        glVertex2d(368,160 ); //bawah kanan
        glVertex2d(368,210); //atas kanan
        glVertex2d(333, 210); //atas kiri
        glVertex2d(333, 160); //bawah kiri
        glEnd();

        //ini tangan bawah kanan
        glBegin(GL_POLYGON);
        warna();
        for(i=0;i<360;i++)
        {
            theta=i*3.142/180;
            glVertex2f(17.5*cos(theta)+350.5, 17.5*sin(theta)+160);
        }
        glEnd();



        //ini kaki kiri
        //lebar 35*50
        glBegin(GL_QUADS);
        warna();
        glVertex2d(307,160 ); //bawah kanan
        glVertex2d(307,210); //atas kanan
        glVertex2d(272, 210); //atas kiri
        glVertex2d(272, 160); //bawah kiri
        glEnd();

        //ini tangan bawah kanan
        glBegin(GL_POLYGON);
        warna();
        for(i=0;i<360;i++)
        {
            theta=i*3.142/180;
            glVertex2f(17.5*cos(theta)+289.5, 17.5*sin(theta)+160);
        }
        glEnd();

        //Antena Kanan
        //lebar 35*50
        glBegin(GL_QUADS);

        warna();
        glVertex2d(345,390 ); //bawah kanan
        glVertex2d(385,440); //atas kanan
        glVertex2d(380,440); //atas kiri
        glVertex2d(340, 390); //bawah kiri
        glEnd();

        //Antena Kiri
        //lebar 35*50
        glBegin(GL_QUADS);

        warna();
        glVertex2d(305,390); //bawah kanan
        glVertex2d(255,440); //atas kanan
        glVertex2d(250,440); //atas kiri
        glVertex2d(300, 390); //bawah kiri
        glEnd();






          glfwSwapBuffers(window);
          glfwPollEvents();
        }






    //Fungsi Exit
    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
 }
