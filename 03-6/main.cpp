#include "Circle.h"
#include "Rectangle.h"

int main(void) {
	IShape* circle = new Circle();
	IShape* rect = new Rectangle();

	circle->size();
	circle->draw();

	rect->size();
	rect->draw();

	delete circle;
	delete rect;

	return 0;
}