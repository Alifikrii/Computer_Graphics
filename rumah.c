
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
    glOrtho(0, 1080, 702, 0, 1.f, -1.f);
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
        window = glfwCreateWindow(1080, 720, "Simple Example", NULL, NULL);

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



          glfwSwapBuffers(window);
          glfwPollEvents();
        }

    //Fungsi Exit
    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
 }
