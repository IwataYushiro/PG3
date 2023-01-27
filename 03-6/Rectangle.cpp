#include "Rectangle.h"
#include <stdio.h>
void Rectangle::size()
{
	int ans = x * y;
	printf("rect answer = %d\n", ans);
}

void Rectangle::draw()
{
	printf("x = %d , y = %d\n", x, y);
}
