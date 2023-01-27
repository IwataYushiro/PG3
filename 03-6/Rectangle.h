#pragma once
#include "Ishape.h"
class Rectangle:public IShape 
{
public:
	void size()override;

	void draw()override;

private:
	int x = 3;
	int y = 5;
};

