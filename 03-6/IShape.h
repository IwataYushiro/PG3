#pragma once
class IShape
{
public:
	virtual ~IShape() = default;
	virtual void size() = 0;

	virtual void draw() = 0;
};

