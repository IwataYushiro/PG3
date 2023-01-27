#pragma once
#include "Ishape.h"
class Rectangle:public IShape 
{
public:
	void size();

	void draw();

private:
	int x = 3;
	int y = 5;
};

