#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

    float theta, var, varr;
    int i, zoom;
    int r1 = 255, g1 = 251, b1 = 163;
    int r2 = 255, g2 = 251, b2 = 163;
    int r3 = 255, g3 = 251, b3 = 163;
    int r4 = 255, g4 = 251, b4 = 163;
    bool klik;
    double robot_x = 0, robot_y = 0;
    double skala = 0;
    double atas = 0, bawah = 0, kiri = 0, kanan = 0;

    static void error_callback(int error, const char* description){
      fputs(description, stderr);
    }
    //Interaksi untuk mengubah warna background
    void mouse_button_callback(GLFWwindow* window, int button, int action, int mods){
        if (button == GLFW_MOUSE_BUTTON_LEFT && action == GLFW_PRESS) {
            if (klik) klik= false;
            else klik= true;
        }
    }

    static void key_callback (GLFWwindow* window, int key, int scancode, int action, int mods){
      if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
         glfwSetWindowShouldClose(window, GL_TRUE);
      //Interaksi lingkaran jika di tekan tombol spasi
      if (key == GLFW_KEY_SPACE && action==GLFW_PRESS)
            zoom++;
      //Interaksi mengembalikan warna tombol kontrol
      if (key == GLFW_KEY_ENTER && action==GLFW_PRESS){
            r1 = 255, g1 = 251, b1 = 163;
            r2 = 255, g2 = 251, b2 = 163;
            r3 = 255, g3 = 251, b3 = 163;
            r4 = 255, g4 = 251, b4 = 163;
      }
      //Interaksi robot dan kontrol jika di tekan tombol atas
      if (key == GLFW_KEY_UP && (action == GLFW_REPEAT || action == GLFW_PRESS)){
        atas = -15;
        bawah = 0;
        kanan = 0;
        kiri = 0;
        //Warna tombol kontrol yang diklik berubah
        r1 = 124, g1 = 158, b1 = 104;
        r2 = 255, g2 = 251, b2 = 163;
        r3 = 255, g3 = 251, b3 = 163;
        r4 = 255, g4 = 251, b4 = 163;
        if (robot_y > -90)
            robot_y -=15;
      }
      //Interaksi robot dan kontrol jika di tekan tombol bawah
      if (key == GLFW_KEY_DOWN && (action == GLFW_REPEAT || action == GLFW_PRESS)){
        atas = 0;
        bawah = 15;
        kanan = 0;
        kiri = 0;
        //Warna tombol kontrol yang diklik berubah
        r1 = 255, g1 = 251, b1 = 163;
        r2 = 124, g2 = 158, b2 = 104;
        r3 = 255, g3 = 251, b3 = 163;
        r4 = 255, g4 = 251, b4 = 163;
        if (robot_y < 90)
            robot_y += 15;
      }
      //Interaksi robot dan kontrol jika di tekan tombol kanan
      if (key == GLFW_KEY_RIGHT && (action == GLFW_REPEAT || action == GLFW_PRESS)){
        atas = 0;
        bawah = 0;
        kanan = 15;
        kiri = 0;
        //Warna tombol kontrol yang diklik berubah
        r1 = 255, g1 = 251, b1 = 163;
        r2 = 255, g2 = 251, b2 = 163;
        r3 = 124, g3 = 158, b3 = 104;
        r4 = 255, g4 = 251, b4 = 163;
        if (robot_x < 450)
            robot_x += 15;
      }
      //Interaksi robot dan kontrol jika di tekan tombol kiri
      if (key == GLFW_KEY_LEFT && (action == GLFW_REPEAT || action == GLFW_PRESS)){
        atas= 0;
        bawah = 0;
        kanan = 0;
        kiri = -15;
        //Warna tombol kontrol yang diklik berubah
        r1 = 255, g1 = 251, b1 = 163;
        r2 = 255, g2 = 251, b2 = 163;
        r3 = 255, g3 = 251, b3 = 163;
        r4 = 124, g4 = 158, b4 = 104;
        if (robot_x > -15)
            robot_x -= 15;
      }
    }
    void display(){
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f); //Warna background
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
    }
    //Background
    void warna(){
        if(!klik) glColor3ub(0, 48, 64);
        else glColor3ub(168, 231, 238);
        glBegin(GL_QUADS);
        glVertex2d(0,1024);
        glVertex2d(1440, 1024);
        glVertex2d(1440, 0);
        glVertex2d(0,0);
        glEnd();
    }
    //Garis background
    void garis(){
        int j=0, k=0;
        while(j<1024){ //vertikal
        if(!klik) glColor3ub(211, 246, 250);
        else glColor3ub(0, 64, 64);
        glBegin(GL_LINES);
        glVertex2d(0,j);
        glVertex2d(1440, j);
        glEnd();
        j+=45;
        }
        while(k<1440){ //horizontal
        if(!klik) glColor3ub(211, 246, 250);
        else glColor3ub(0, 64, 64);
        glBegin(GL_LINES);
        glVertex2d(k,0);
        glVertex2d(k, 1024);
        glEnd();
        k+=45;
        }
    }
    //Nintendo
    void nintendo()
    {
        glBegin(GL_POLYGON);  //badan atas
        glColor4ub(15, 104, 104, 1);
        glVertex2d(257, 503);
        glVertex2d(257, 517);
        glVertex2d(1179, 517);
        glVertex2d(1179, 503);
        glVertex2d(1218, 503);
        glVertex2d(1218, 45);
        glVertex2d(217, 45);
        glVertex2d(217, 503);
        glEnd();
        glBegin(GL_QUADS); //badan bawah
        glColor4ub(15, 104, 104, 1);
        glVertex2d(217, 975);
        glVertex2d(1218, 976);
        glVertex2d(1218, 517);
        glVertex2d(217, 517);
        glEnd();
        glBegin(GL_LINE_STRIP); //garis bawah
        glColor4ub(0, 64, 64, 1);
        glVertex2d(217,560);
        glVertex2d(1218,560);
        glVertex2d(1218,517);
        glVertex2d(217,517);
        glEnd();
        glBegin(GL_LINES); //garis kiri
        glColor4ub(0, 64, 64, 1);
        glVertex2d(257,560);
        glVertex2d(257,517);
        glEnd();
        glBegin(GL_LINES); //garis kanan
        glColor4ub(0, 64, 64, 1);
        glVertex2d(1179,560);
        glVertex2d(1179,517);
        glEnd();
        glBegin(GL_LINE_STRIP); //garis kotak atas
        glColor4ub(0, 64, 64, 1);
        glVertex2d(263,484);
        glVertex2d(1179,484);
        glVertex2d(1179,75);
        glVertex2d(263,75);
        glVertex2d(263,484);
        glEnd();
        glBegin(GL_LINE_STRIP); //garis kotak atas
        glColor4ub(0, 64, 64, 1);
        glVertex2d(399,932);
        glVertex2d(1036,932);
        glVertex2d(1036,591);
        glVertex2d(399,591);
        glVertex2d(399,932);
        glEnd();
        glBegin(GL_QUADS); //layar atas
        glColor4ub(221, 239, 219, 1);
        glVertex2d(286, 455);
        glVertex2d(1145, 455);
        glVertex2d(1145, 101);
        glVertex2d(286, 101);
        glEnd();
        glBegin(GL_QUADS); //layar bawah
        glColor4ub(221, 239, 219, 1);
        glVertex2d(420, 911);
        glVertex2d(1015, 911);
        glVertex2d(1015, 607);
        glVertex2d(420, 607);
        glEnd();
    }
    //Komponen nama
    void nama(){
        glBegin(GL_QUADS); //w
        glColor4ub(19, 158, 167, 1);
        glVertex2d(473, 350);
        glVertex2d(495, 300);
        glVertex2d(457, 211);
        glVertex2d(415, 211);
        glEnd();
        glBegin(GL_QUADS); //w
        glColor4ub(19, 158, 167, 1);
        glVertex2d(523, 350);
        glVertex2d(545, 300);
        glVertex2d(507, 211);
        glVertex2d(465, 211);
        glEnd();
        glBegin(GL_TRIANGLES); //w
        glColor4ub(19, 158, 167, 1);
        glVertex2d(549, 289);
        glVertex2d(582, 211);
        glVertex2d(515, 211);
        glEnd();
        glBegin(GL_QUADS); //i
        glColor4ub(19, 158, 167, 1);
        glVertex2d(599, 350);
        glVertex2d(638, 350);
        glVertex2d(638, 211);
        glVertex2d(599, 211);
        glEnd();
        glBegin(GL_QUADS); //k
        glColor4ub(19, 158, 167, 1);
        glVertex2d(661, 350);
        glVertex2d(700, 350);
        glVertex2d(700, 211);
        glVertex2d(661, 211);
        glEnd();
        glBegin(GL_POLYGON); //k
        glColor4ub(19, 158, 167, 1);
        glVertex2d(710, 350);
        glVertex2d(766, 350);
        glVertex2d(717, 246);
        glVertex2d(766, 211);
        glVertex2d(710, 211);
        glEnd();
        glBegin(GL_POLYGON); //a
        glColor4ub(19, 158, 167, 1);
        glVertex2d(807, 261);
        glVertex2d(813, 272);
        glVertex2d(802, 272);
        glVertex2d(769, 350);
        glVertex2d(835, 350);
        glVertex2d(808, 286);
        glVertex2d(818, 286);
        glVertex2d(844, 350);
        glVertex2d(888, 350);
        glVertex2d(829, 211);
        glEnd();
        glBegin(GL_POLYGON); //a
        glColor4ub(19, 158, 167, 1);
        glVertex2d(937, 261);
        glVertex2d(942, 272);
        glVertex2d(931, 272);
        glVertex2d(899, 350);
        glVertex2d(965, 350);
        glVertex2d(937, 286);
        glVertex2d(948, 286);
        glVertex2d(974, 350);
        glVertex2d(1018, 350);
        glVertex2d(959, 211);
        glEnd();
    }
    //Lingkaran luar di nintendo
    void lingkaran(){
        glColor4ub(255, 251, 163, 1);
        glBegin(GL_POLYGON);
        for(i=0; i<360; i++){
            theta=i*3.142/180;
            glVertex2d(310+60*cos(theta),760+60*sin(theta));
        }
        glEnd();
    }
    //Lingkaran dalam di nintendo
    void lingkaran2(){
        glColor4ub(124, 158, 104, 1);
        glBegin(GL_POLYGON);
        for(i=0; i<360; i++){
            theta=i*3.142/180;
            glVertex2d(310+45*cos(theta),760+45*sin(theta));
        }
        glEnd();
    }
    //Robot
    void robot(){
        glPushMatrix();
        glTranslatef(robot_x, robot_y, 0); //posisi awal
        glBegin(GL_QUADS);    //kepala
        glColor3ub(78, 81, 106);
        glVertex2d(447,816);
        glVertex2d(555,816);
        glVertex2d(555,729);
        glVertex2d(447,729);
        glEnd();
        glBegin(GL_TRIANGLES); //telinga kanan
        glColor3ub(78, 81, 106);
        glVertex2d(523,729);
        glVertex2d(549,729);
        glVertex2d(537,702);
        glEnd();
        glBegin(GL_TRIANGLES); //telinga kiri
        glColor3ub(78, 81, 106);
        glVertex2d(453, 729);
        glVertex2d(477,729);
        glVertex2d(465, 702);
        glEnd();
        glBegin(GL_QUADS); //mata kiri
        glColor3ub(255,255,255);
        glVertex2d(467,773);
        glVertex2d(482, 773);
        glVertex2d(482, 751);
        glVertex2d(467,751);
        glEnd();
        glBegin(GL_QUADS); //mata kanan
        glColor3ub(255,255,255);
        glVertex2d(521,773);
        glVertex2d(536, 773);
        glVertex2d(536, 751);
        glVertex2d(521,751);
        glEnd();
        glBegin(GL_QUADS); //mulut
        glColor3ub(255,255,255);
        glVertex2d(463,798);
        glVertex2d(541,798);
        glVertex2d(541,789);
        glVertex2d(463, 789);
        glEnd();
    }
    //Tombol atas, bawah, kanan, kiri
    void tombolKontrol(){
        glPushMatrix();
        glTranslatef(0, atas, 0);
        glBegin(GL_POLYGON);
        glColor3ub(r1, g1, b1);
        glVertex2d(1110,733);
        glVertex2d(1126,753);
        glVertex2d(1142,732);
        glVertex2d(1142,699);
        glVertex2d(1110,699);
        glEnd();
        glPopMatrix();
        glPushMatrix();
        glTranslatef(0, bawah, 0);
        glBegin(GL_POLYGON);
        glColor3ub(r2, g2, b2);
        glVertex2d(1110,794);
        glVertex2d(1110,827);
        glVertex2d(1142,827);
        glVertex2d(1142,794);
        glVertex2d(1126, 773);
        glEnd();
        glPopMatrix();
        glPushMatrix();
        glTranslatef(kanan, 0, 0);
        glBegin(GL_POLYGON);
        glColor3ub(r3, g3, b3);
        glVertex2d(1135,762);
        glVertex2d(1156,777);
        glVertex2d(1189,777);
        glVertex2d(1189,745);
        glVertex2d(1156,745);
        glEnd();
        glPopMatrix();
        glPushMatrix();
        glTranslatef(kiri, 0, 0);
        glBegin(GL_POLYGON);
        glColor3ub(r4, g4, b4);
        glVertex2d(1064,777);
        glVertex2d(1097,777);
        glVertex2d(1118,762);
        glVertex2d(1098,745);
        glVertex2d(1064,745);
        glEnd();
        glPopMatrix();
    }
    //Bintang kanan
    void bintang1(){
        if(!klik) glColor3ub(211, 246, 250);
        else glColor3ub(0, 64, 64);
        glBegin(GL_POLYGON);
        glVertex2d(1310,590);
        glVertex2d(1290,611);
        glVertex2d(1320,608);
        glVertex2d(1335,632);
        glVertex2d(1340,604);
        glVertex2d(1369,600);
        glVertex2d(1345,585);
        glVertex2d(1347,553);
        glVertex2d(1325,575);
        glVertex2d(1296,561);
        glEnd();
    }
    //Bintang kiri
    void bintang2(){
        if(!klik) glColor3ub(211, 246, 250);
        else glColor3ub(0, 64, 64);
        glBegin(GL_POLYGON);
        glVertex2d(83,238);
        glVertex2d(49,247);
        glVertex2d(81,263);
        glVertex2d(78,301);
        glVertex2d(104,274);
        glVertex2d(136,290);
        glVertex2d(119,257);
        glVertex2d(142,227);
        glVertex2d(107,234);
        glVertex2d(88,200);
        glEnd();
}
    //XXX atas
    void xxx(){
        glBegin(GL_LINES);
        glColor3ub(0,0,0);
        glVertex2d(320,158);
        glVertex2d(344,120);
        glEnd();
        glBegin(GL_LINES);
        glVertex2d(344,158);
        glVertex2d(320,120);
        glEnd();
        glBegin(GL_LINES);
        glVertex2d(412,158);
        glVertex2d(435,120);
        glEnd();
        glBegin(GL_LINES);
        glVertex2d(435,158);
        glVertex2d(412,120);
        glEnd();
        glBegin(GL_LINES);
        glVertex2d(503,158);
        glVertex2d(527,120);
        glEnd();
        glBegin(GL_LINES);
        glVertex2d(527,158);
        glVertex2d(503,120);
        glEnd();
    }
    //XXX bawah
    void xxxx(){
        glBegin(GL_LINES);
        glColor3ub(0,0,0);
        glVertex2d(900,429);
        glVertex2d(922,393);
        glEnd();
        glBegin(GL_LINES);
        glColor3ub(0,0,0);
        glVertex2d(922,429);
        glVertex2d(900,393);
        glEnd();
        glBegin(GL_LINES);
        glColor3ub(0,0,0);
        glVertex2d(991,429);
        glVertex2d(1013,393);
        glEnd();
        glBegin(GL_LINES);
        glColor3ub(0,0,0);
        glVertex2d(1013,429);
        glVertex2d(991,393);
        glEnd();
        glBegin(GL_LINES);
        glColor3ub(0,0,0);
        glVertex2d(1082,429);
        glVertex2d(1105,393);
        glEnd();
        glBegin(GL_LINES);
        glColor3ub(0,0,0);
        glVertex2d(1105,429);
        glVertex2d(1082,393);
        glEnd();
    }
int main(void){
    GLFWwindow* window;
    glfwSetErrorCallback(error_callback);
    if (!glfwInit())
    exit(EXIT_FAILURE);
    window = glfwCreateWindow(1080, 680, "Wika Fauziah_G64190047", NULL, NULL);
    if (!window){
      glfwTerminate();
      exit(EXIT_FAILURE);
    }
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1);
    glfwSetKeyCallback(window, key_callback);
    glfwSetMouseButtonCallback(window, mouse_button_callback);
    while (!glfwWindowShouldClose(window)){
      float ratio;
      int width, height;
      glfwGetFramebufferSize(window, &width, &height);
      ratio = width / (float) height;
      glViewport(0, 0, width, height);
      glMatrixMode(GL_PROJECTION);
      glLoadIdentity();
      glOrtho(0, 1440, 1024, 0, 1.f, -1.f);
      glMatrixMode(GL_MODELVIEW);
      glLoadIdentity();
      display();
      warna();
      garis();
      nintendo();
      nama();
      lingkaran();

      //Klik spasi lingkaran2 mengecil membesar
      if(zoom%2!=0){
            glPushMatrix();
            glTranslatef(310, 760, 0);
            skala -= 0.001;
            glScalef(skala,skala,0);
            if (skala < -1)
                skala=1;
            glTranslatef(-310, -760, 0);
            lingkaran2();
            glPopMatrix();
      }
      else if(zoom%2==0)
            lingkaran2();

      //Bintang berotasi
      glPushMatrix();
      glTranslatef(98,252,0.f);
      glRotatef(glfwGetTime()*150,0.0f,0.0f,1.0f);
      glTranslatef(-98,-252,0);
      bintang2();
      glPopMatrix();

      glPushMatrix();
      glTranslatef(1328,593,0.f);
      glRotatef(glfwGetTime() *150,0.0f,0.0f,1.0f);
      glTranslatef(-1328,-593,0.f);
      bintang1();
      glPopMatrix();

      //XXX ke kanan
      glPushMatrix();
      var += 0.3;
      if(var > 570)
        var = 0;
      glTranslatef(var,0,0);
      xxx();
      glPopMatrix();

      //XXX ke kiri
      glPushMatrix();
      varr -= 0.3;
        if(varr < -570)
            varr = 0;
      glTranslatef(varr,0,0);
      xxxx();
      glPopMatrix();

      tombolKontrol();

      robot();

      glfwSwapBuffers(window);
      glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
}
