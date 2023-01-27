#include "Circle.h"
#include <stdio.h>
void Circle::size()
{
	float ans = rad * rad * pi;
	printf("circle answer = %f\n", ans);
}

void Circle::draw()
{
	printf("rad = %f , pi = %f\n", rad, pi);
}
