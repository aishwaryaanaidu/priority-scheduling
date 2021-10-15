#include<stdio.h>
#include<gl/glut.h>
int x;
void problem();
void display();
void front();
void disp_string(int x, int y, char *string)
{
	char *c;
	glRasterPos3f(x, y, 0);
	for (c = string; *c != '\0'; *c++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
	}
}
void display_str2(GLfloat x, GLfloat y, char *text)
{
	glLineWidth(4.0);
	char *p;
	glPushMatrix();
	glTranslatef(x, y, 0);
	glScalef(0.1, 0.1, 0.1);
	for (p = text; *p; p++)
		glutStrokeCharacter(GLUT_STROKE_ROMAN, *p);
	glPopMatrix();
}
void fr()
{
	front();
	glFlush();
}
void front()
{
	glColor3f(0, 1, 1);
	display_str2(150, 450, "BNM INSTITUTE OF TECHNOLOGY");
	disp_string(210, 425, "PRIORITY SCHEDULING");
	disp_string(215, 310, "AISHWARYA M S");
	disp_string(225, 290, "1BG15CS006");
	disp_string(235, 265, "CSE A");
	disp_string(380.33, 172.5, "PRESS 'C' OR 'c' ");
	disp_string(380.33, 155.5, "TO CONTINUE");
	glFlush();
}
void disp_screen1()
{
	problem();
	glColor3f(0, 0, 0);
	display_str2(150, 450, "BNM INSTITUTE OF TECHNOLOGY");
	disp_string(210, 425, "PRIORITY SCHEDULING");
	disp_string(215, 310, "AISHWARYA M S");
	disp_string(225, 290, "1BG15CS006");
	disp_string(235, 265, "CSE A");
	disp_string(380.33, 172.5, "PRESS 'C' OR 'c' ");
	disp_string(380.33, 155.5, "TO CONTINUE");
	disp_string(380.33, 172.5, "PRESS 'A' OR 'a' TO ");
	disp_string(375.33, 155.5, "START THE EXECUTION");
	disp_string(185, 363, "P2");
	glColor3f(0, 0, 1);
	disp_string(385, 363, "P2");
	glColor3f(0, 0, 0);
	disp_string(141.33, 172.5, "0");
	glColor3f(1, 1, 1);
	disp_string(141.33, 172.5, "1");
	glLineWidth(6.0);
	glColor3f(0, 1, 1);
	disp_string(380.33, 172.5, "PRESS 'I' OR 'i' TO ");
	disp_string(360.33, 155.5, "EXECUTE THE NEXT PROCESS");
	glFlush();
}
void disp_screen2()
{
	problem();
	glColor3f(0, 0, 0);
	display_str2(150, 450, "BNM INSTITUTE OF TECHNOLOGY");
	disp_string(210, 425, "PRIORITY SCHEDULING");
	disp_string(215, 310, "AISHWARYA M S");
	disp_string(225, 290, "1BG15CS006");
	disp_string(235, 265, "CSE A");
	disp_string(380.33, 172.5, "PRESS 'C' OR 'c' ");
	disp_string(380.33, 155.5, "TO CONTINUE");
	disp_string(380.33, 172.5, "PRESS 'A' OR 'a' TO ");
	disp_string(375.33, 155.5, "START THE EXECUTION");
	disp_string(380.33, 172.5, "PRESS 'I' OR 'i' TO ");
	disp_string(360.33, 155.5, "EXECUTE THE NEXT PROCESS");
	disp_string(185, 363, "P2");
	disp_string(210, 363, "P5");
	glColor3f(0, 0, 1);
	disp_string(385, 363, "P5");
	glColor3f(0, 0, 0);
	disp_string(141.33, 172.5, "0");
	disp_string(141.33, 67.5, "0");
	glColor3f(1, 1, 1);
	disp_string(141.33, 172.5, "1");
	disp_string(141.33, 67.5, "1");
	glColor3f(0, 1, 1);
	disp_string(380.33, 172.5, "PRESS 'S' OR 's' TO ");
	disp_string(360.33, 155.5, "EXECUTE THE NEXT PROCESS");
	glFlush();
}
void disp_screen3()
{
	problem();
	glColor3f(0, 0, 0);
	display_str2(150, 450, "BNM INSTITUTE OF TECHNOLOGY");
	disp_string(210, 425, "PRIORITY SCHEDULING");
	disp_string(215, 310, "AISHWARYA M S");
	disp_string(225, 290, "1BG15CS006");
	disp_string(235, 265, "CSE A");
	disp_string(380.33, 172.5, "PRESS 'C' OR 'c' ");
	disp_string(380.33, 155.5, "TO CONTINUE");
	disp_string(380.33, 172.5, "PRESS 'A' OR 'a' TO ");
	disp_string(375.33, 155.5, "START THE EXECUTION");
	disp_string(380.33, 172.5, "PRESS 'I' OR 'i' TO ");
	disp_string(360.33, 155.5, "EXECUTE THE NEXT PROCESS");
	disp_string(380.33, 172.5, "PRESS 'S' OR 's' TO ");
	disp_string(360.33, 155.5, "EXECUTE THE NEXT PROCESS");
	disp_string(185, 363, "P2");
	disp_string(210, 363, "P5");
	disp_string(235, 363, "P1");
	glColor3f(0, 0, 1);
	disp_string(385, 363, "P1");
	glColor3f(0, 0, 0);
	disp_string(141.33, 172.5, "0");
	disp_string(141.33, 67.5, "0");
	disp_string(141.33, 204.5, "0");
	glColor3f(1, 1, 1);
	disp_string(141.33, 172.5, "1");
	disp_string(141.33, 67.5, "1");
	disp_string(141.33, 204.5, "1");
	glColor3f(0, 1, 1);
	disp_string(380.33, 172.5, "PRESS 'H' OR 'h' TO ");
	disp_string(360.33, 155.5, "EXECUTE THE NEXT PROCESS");
	glFlush();
}
void disp_screen4()
{
	problem();
	glColor3f(0, 0, 0);
	display_str2(150, 450, "BNM INSTITUTE OF TECHNOLOGY");
	disp_string(210, 425, "PRIORITY SCHEDULING");
	disp_string(215, 310, "AISHWARYA M S");
	disp_string(225, 290, "1BG15CS006");
	disp_string(235, 265, "CSE A");
	disp_string(380.33, 172.5, "PRESS 'C' OR 'c' ");
	disp_string(380.33, 155.5, "TO CONTINUE");
	disp_string(380.33, 172.5, "PRESS 'A' OR 'a' TO ");
	disp_string(375.33, 155.5, "START THE EXECUTION");
	disp_string(380.33, 172.5, "PRESS 'I' OR 'i' TO ");
	disp_string(360.33, 155.5, "EXECUTE THE NEXT PROCESS");
	disp_string(380.33, 172.5, "PRESS 'S' OR 's' TO ");
	disp_string(360.33, 155.5, "EXECUTE THE NEXT PROCESS");
	disp_string(380.33, 172.5, "PRESS 'H' OR 'h' TO ");
	disp_string(360.33, 155.5, "EXECUTE THE NEXT PROCESS");
	disp_string(185, 363, "P2");
	disp_string(210, 363, "P5");
	disp_string(235, 363, "P1");
	disp_string(260, 363, "P3");
	glColor3f(0, 0, 1);
	disp_string(385, 363, "P3");
	glColor3f(0, 0, 0);
	disp_string(141.33, 172.5, "0");
	disp_string(141.33, 67.5, "0");
	disp_string(141.33, 204.5, "0");
	disp_string(141.33, 137.5, "0");
	glColor3f(1, 1, 1);
	disp_string(141.33, 172.5, "1");
	disp_string(141.33, 67.5, "1");
	disp_string(141.33, 204.5, "1");
	disp_string(141.33, 137.5, "1");
	glColor3f(0, 1, 1);
	disp_string(380.33, 172.5, "PRESS 'W' OR 'w' TO ");
	disp_string(360.33, 155.5, "EXECUTE THE NEXT PROCESS");
	glFlush();
}
void disp_screen5()
{
	problem();
	glColor3f(0, 0, 0);
	display_str2(150, 450, "BNM INSTITUTE OF TECHNOLOGY");
	disp_string(210, 425, "PRIORITY SCHEDULING");
	disp_string(215, 310, "AISHWARYA M S");
	disp_string(225, 290, "1BG15CS006");
	disp_string(235, 265, "CSE A");
	disp_string(380.33, 172.5, "PRESS 'C' OR 'c' ");
	disp_string(380.33, 155.5, "TO CONTINUE");
	disp_string(380.33, 172.5, "PRESS 'A' OR 'a' TO ");
	disp_string(375.33, 155.5, "START THE EXECUTION");
	disp_string(380.33, 172.5, "PRESS 'I' OR 'i' TO ");
	disp_string(360.33, 155.5, "EXECUTE THE NEXT PROCESS");
	disp_string(380.33, 172.5, "PRESS 'S' OR 's' TO ");
	disp_string(360.33, 155.5, "EXECUTE THE NEXT PROCESS");
	disp_string(380.33, 172.5, "PRESS 'H' OR 'h' TO ");
	disp_string(360.33, 155.5, "EXECUTE THE NEXT PROCESS");
	disp_string(380.33, 172.5, "PRESS 'W' OR 'w' TO ");
	disp_string(360.33, 155.5, "EXECUTE THE NEXT PROCESS");
	disp_string(185, 363, "P2");
	disp_string(210, 363, "P5");
	disp_string(235, 363, "P1");
	disp_string(260, 363, "P3");
	disp_string(160, 363, "P4");
	glColor3f(0, 0, 1);
	disp_string(385, 363, "P4");
	glColor3f(0, 0, 0);
	disp_string(141.33, 172.5, "0");
	disp_string(141.33, 67.5, "0");
	disp_string(141.33, 204.5, "0");
	disp_string(141.33, 137.5, "0");
	disp_string(141.33, 102.5, "0");
	glColor3f(1, 1, 1);
	disp_string(141.33, 172.5, "1");
	disp_string(141.33, 67.5, "1");
	disp_string(141.33, 204.5, "1");
	disp_string(141.33, 137.5, "1");
	disp_string(141.33, 102.5, "1");
	glColor3f(0, 1, 1);
	disp_string(380.33, 172.5, "PRESS 'F' OR 'f' TO ");
	disp_string(360.33, 155.5, "EXECUTE THE NEXT PROCESS");
	glFlush();
}
void disp_screen6()
{
	problem();
	glColor3f(0, 0, 0);
	display_str2(150, 450, "BNM INSTITUTE OF TECHNOLOGY");
	disp_string(210, 425, "PRIORITY SCHEDULING");
	disp_string(215, 310, "AISHWARYA M S");
	disp_string(225, 290, "1BG15CS006");
	disp_string(235, 265, "CSE A");
	disp_string(380.33, 172.5, "PRESS 'C' OR 'c' ");
	disp_string(380.33, 155.5, "TO CONTINUE");
	disp_string(380.33, 172.5, "PRESS 'A' OR 'a' TO ");
	disp_string(375.33, 155.5, "START THE EXECUTION");
	disp_string(380.33, 172.5, "PRESS 'I' OR 'i' TO ");
	disp_string(360.33, 155.5, "EXECUTE THE NEXT PROCESS");
	disp_string(380.33, 172.5, "PRESS 'S' OR 's' TO ");
	disp_string(360.33, 155.5, "EXECUTE THE NEXT PROCESS");
	disp_string(380.33, 172.5, "PRESS 'H' OR 'h' TO ");
	disp_string(360.33, 155.5, "EXECUTE THE NEXT PROCESS");
	disp_string(380.33, 172.5, "PRESS 'W' OR 'w' TO ");
	disp_string(360.33, 155.5, "EXECUTE THE NEXT PROCESS");
	disp_string(380.33, 172.5, "PRESS 'F' OR 'f' TO ");
	disp_string(360.33, 155.5, "EXECUTE THE NEXT PROCESS");
	disp_string(185, 363, "P2");
	disp_string(210, 363, "P5");
	disp_string(235, 363, "P1");
	disp_string(260, 363, "P3");
	disp_string(160, 363, "P4");
	//glColor3f(0, 0, 1);
	//disp_string(385, 363, "P4");
	glColor3f(0, 0, 0);
	disp_string(141.33, 172.5, "0");
	disp_string(141.33, 67.5, "0");
	disp_string(141.33, 204.5, "0");
	disp_string(141.33, 137.5, "0");
	disp_string(141.33, 102.5, "0");
	glColor3f(1, 1, 1);
	disp_string(141.33, 172.5, "1");
	disp_string(141.33, 67.5, "1");
	disp_string(141.33, 204.5, "1");
	disp_string(141.33, 137.5, "1");
	disp_string(141.33, 102.5, "1");
	glColor3f(0, 1, 1);
	disp_string(372.33, 172.5, "ALL THE PROCESSES IN THE ");
	disp_string(365.33, 155.5, "READY QUEUE WERE EXECUTED");
	glFlush();
}
void keyboard(unsigned char key, int x, int y)
{
	if (key == 'C' || key == 'c')
		problem();
	if (key == 'A' || key == 'a')
		disp_screen1();
	if (key == 'I' || key == 'i')
		disp_screen2();
	if (key == 'S' || key == 's')
		disp_screen3();
	if (key == 'H' || key == 'h')
		disp_screen4();
	if (key == 'W' || key == 'w')
		disp_screen5();
	if (key == 'F' || key == 'f')
		disp_screen6();
	if (key == 'Q' || key == 'q')
		exit(0);
}
void problem()
{
	glColor3f(0, 0, 0);
	display_str2(150, 450, "BNM INSTITUTE OF TECHNOLOGY");
	disp_string(210, 425, "PRIORITY SCHEDULING");
	disp_string(215, 310, "AISHWARYA M S");
	disp_string(225, 290, "1BG15CS006");
	disp_string(235, 265, "CSE A");
	disp_string(380.33, 172.5, "PRESS 'C' OR 'c' ");
	disp_string(380.33, 155.5, "TO CONTINUE");
	//glFlush();
	glLineWidth(4.0);
	glBegin(GL_LINES);
	glColor3f(0, 1, 1);
	glVertex2i(150, 345);//top
	glVertex2i(275, 345);
	glVertex2i(150, 395);
	glVertex2i(275, 395);
	glVertex2i(150, 345);
	glVertex2i(150, 395);
	glVertex2i(175, 345);
	glVertex2i(175, 395);
	glVertex2i(200, 345);
	glVertex2i(200, 395);
	glVertex2i(225, 345);
	glVertex2i(225, 395);
	glVertex2i(250, 345);
	glVertex2i(250, 395);
	glVertex2i(275, 345);
	glVertex2i(275, 395);
	glEnd();
	glColor3f(0.5, 1.4, 0.3);
	glBegin(GL_QUADS);//1
	glVertex2i(35, 360);
	glVertex2i(35, 380);
	glVertex2i(125, 380);
	glVertex2i(125, 360);
	glEnd();
	glBegin(GL_TRIANGLES);
	glVertex2i(150, 370);
	glVertex2i(125, 390);
	glVertex2i(125, 350);
	glEnd();//1
	glBegin(GL_QUADS);//2
	glVertex2i(280, 360);
	glVertex2i(280, 380);
	glVertex2i(325, 380);
	glVertex2i(325, 360);
	glEnd();
	glBegin(GL_TRIANGLES);//2
	glVertex2i(350, 370);
	glVertex2i(325, 390);
	glVertex2i(325, 350);
	glEnd();//2
	glColor3f(1, 0, 0);
	glBegin(GL_QUADS);//cpu
	glVertex2i(353, 320);
	glVertex2i(353, 410);
	glVertex2i(422, 410);
	glVertex2i(422, 320);
	glEnd();
	glColor3f(0.5, 1.4, 0.3);
	glBegin(GL_QUADS);//3
	glVertex2i(425, 360);
	glVertex2i(425, 380);
	glVertex2i(465, 380);
	glVertex2i(465, 360);
	glEnd();
	glBegin(GL_TRIANGLES);
	glVertex2i(490, 370);
	glVertex2i(465, 390);
	glVertex2i(465, 350);
	glEnd();
	glColor3f(0, 1, 1);
	glBegin(GL_LINES);
	glLineWidth(2.0);
	glVertex2i(120, 50);
	glVertex2i(350, 50);
	glVertex2i(120, 85);
	glVertex2i(350, 85);

	glVertex2i(120, 120);
	glVertex2i(350, 120);
	glVertex2i(120, 155);
	glVertex2i(350, 155);
	glVertex2i(120, 190);
	glVertex2i(350, 190);
	glVertex2i(120, 225);
	glVertex2i(350, 225);
	glVertex2i(120, 260);
	glVertex2i(350, 260);

	glVertex2i(120, 50);
	glVertex2i(120, 260);
	glVertex2i(350, 50);
	glVertex2i(350, 260);
	glVertex2i(166.66, 50);
	glVertex2i(166.66, 260);
	glVertex2i(283.26, 50);
	glVertex2i(283.26, 260);
	glVertex2i(220.26, 50);
	glVertex2i(220.26, 260);
	glEnd();
	glColor3f(1, 1, 1);
	disp_string(186, 405, "READY QUEUE");
	disp_string(383, 415, "CPU");
	disp_string(260, 363, "P3");
	disp_string(235, 363, "P1");
	disp_string(210, 363, "P5");
	disp_string(185, 363, "P2");
	disp_string(160, 363, "P4");
	disp_string(440, 390, "EXIT");
	glColor3f(1, 1, 1);
	disp_string(130.33, 237.5, "STATE");
	disp_string(177.33, 237.5, "PROCESS");
	disp_string(226.96, 237.5, "BURST TIME");
	disp_string(298.63, 237.5, "PRIORITY");
	disp_string(187.33, 204.5, "P1");
	disp_string(245.96, 204.5, "10");
	disp_string(313.63, 204.5, "3");
	disp_string(187.33, 172.5, "P2");
	disp_string(246.96, 172.5, "1");
	disp_string(313.63, 172.5, "1");
	disp_string(187.33, 137.5, "P3");
	disp_string(246.96, 137.5, "2");
	disp_string(313.63, 137.5, "4");
	disp_string(187.33, 102.5, "P4");
	disp_string(246.96, 102.5, "1");
	disp_string(313.63, 102.5, "5");
	disp_string(187.33, 67.5, "P5");
	disp_string(246.96, 67.5, "5");
	disp_string(313.63, 67.5, "2");
	disp_string(141.33, 204.5, "0");
	disp_string(141.33, 172.5, "0");
	disp_string(141.33, 137.5, "0");
	disp_string(141.33, 102.5, "0");
	disp_string(141.33, 67.5, "0");
	glColor3f(0, 1, 1);
	disp_string(380.33, 172.5, "PRESS 'A' OR 'a' TO ");
	disp_string(375.33, 155.5, "START THE EXECUTION");
	disp_string(30.33, 204.5, "STATE VALUE");
	disp_string(20.33, 172.5, "0 - NOT EXECUTED");
	disp_string(20.33, 137.5, "1 - EXECUTED");
	glFlush();
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0, 0, 0, 1);
	fr();
	glFlush();
}
void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Priority Scheduling");
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 500, 0, 500);
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutMainLoop();
}