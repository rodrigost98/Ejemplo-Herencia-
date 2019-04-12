#pragma once
#include "Shape.h"

class Paralelogramo: public Shape 
{
 public:

	Paralelogramo(void);
	~Paralelogramo(void);
	int getArea()
	{ 
         return (width * height); 
    }
};
