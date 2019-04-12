#pragma once
#include "Shape.h"

class Triangulo: public Shape
{
public:
	Triangulo(void);
	~Triangulo(void);
	int getArea() 
	{ 
         return ((width * height)/2); 
      }
};

