#include "dibujo.h"

int dibujo:: display(float alfha,int segmentos)
{
	int j = 0 ;
	glPushMatrix();
	
		for  (int i=0;i< segmentos/2; i++){
			glTranslatef(0.0, 0.0, 0.0);
			glRotatef((GLfloat)alfha+j,  segmentos * 0.5, segmentos * 0.2, 0.1);
			glTranslatef(0.3, 0.0, 0.0);
			glPushMatrix();
				glScalef(0.5, 0.3, 0.2); /* shoulder */
				glutSolidCylinder(0.1,0.5,20,20);
				glPopMatrix();
			j += 10;
		}

		for (int i = 0; i < segmentos/2; i++) {
			glTranslatef(0.0, 0.0, 0.0);
			glRotatef((GLfloat)alfha + j, segmentos * 0.5, segmentos * 0.2, 0.1);
			glTranslatef(-0.3, 0.0, 0.0);
			glPushMatrix();
			glScalef(0.5, 0.3, 0.2); /* shoulder */
			glutSolidCylinder(0.1, 0.5, 20, 20);
			glPopMatrix();
			j += 10;
		}
	glPopMatrix();
	j = 0;

	glPushMatrix();
	for (int i = 0; i < segmentos / 2; i++) {
		glTranslatef(0.0, 0.0, 0.0);
		glRotatef((GLfloat)alfha + j, segmentos * 0.5, segmentos * 0.2, 0.1);
		glTranslatef(-0.3, 0.0, 0.0);
		glPushMatrix();
		glScalef(0.5, 0.3, 0.2); /* shoulder */
		glutSolidCylinder(0.1, 0.5, 20, 20);
		glPopMatrix();
		j += 10;
	}

	for (int i = 0; i < segmentos / 2; i++) {
		glTranslatef(0.0, 0.0, 0.0);
		glRotatef((GLfloat)alfha + j, segmentos * 0.5, segmentos * 0.2, 0.1);
		glTranslatef(0.3, 0.0, 0.0);
		glPushMatrix();
		glScalef(0.5, 0.3, 0.2); /* shoulder */
		glutSolidCylinder(0.1, 0.5, 20, 20);
		glPopMatrix();
		j += 10;
	}
	
	
	glPopMatrix();
	return 1;
}