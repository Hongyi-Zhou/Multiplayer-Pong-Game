#include <iostream>
#include "helper.hpp"
#include <cmath>
#include <GL/glut.h>
#include <GL/freeglut.h>
#include <string.h>

using namespace std;

int main(int argc, char* argv[])
{
	//init
	for(short i = 0; i < 100; i++){
		glutInit(&argc, argv);


		glutSetOption(GLUT_ACTION_ON_WINDOW_CLOSE, GLUT_ACTION_CONTINUE_EXECUTION);
		glutInitWindowPosition(200, 0);
		glutInitWindowSize(1200,800);
		glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
		glutCreateWindow("Pong");

		//set callback
		glutDisplayFunc(renderScene);
		
		glutKeyboardFunc(keyboardFunc);
		glutSpecialFunc(arrowFunc);
		glutTimerFunc(20, update, 0);

		// enter GLUT event processing cycle
		glutMainLoop();
	}

		cout << "done" << endl;

  return 0;
}

