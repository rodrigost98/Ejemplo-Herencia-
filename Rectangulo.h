#pragma once
#include "Shape.h"
class Rectangulo: public Shape {
public:
	Rectangulo(void);
	~Rectangulo(void);
	 int getArea() { 
         return (width * height); 
      }
};

