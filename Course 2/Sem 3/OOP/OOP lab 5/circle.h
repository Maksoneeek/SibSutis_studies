#ifndef CIRCLE_H
#define CIRCLE_H

#include <GL/glut.h>
#include <cmath>
#include "point.h"

class tCircle : public tPoint
{
	private:
		float _R;
	public:
		tCircle();

		void setR(float R);
		float getR();

		float getTmpX(float fi);
		float getTmpY(float fi);
		float grTOrad(float Gr);

		virtual void move();
		virtual void draw();
};

#endif
