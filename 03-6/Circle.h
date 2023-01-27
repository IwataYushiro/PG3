#pragma once
#include "IShape.h"

class Circle :public IShape
{
public:
	void size();

	void draw();

private:
	const float pi = 3.14f;
	float rad = 5.0f;

};

