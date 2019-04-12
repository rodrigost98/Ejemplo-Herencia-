// EjemploHerencia.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Rectangulo.h"
#include "conio.h"
#include "Triangulo.h"
#include "Paralelogramo.h"

using namespace std;

int main(void) {
   Rectangulo Rect;
   Triangulo T;
   Paralelogramo P;
 
   T.setWidth(4);
   T.setHeight(5);
   P.setHeight(6);
   P.setWidth(3);
   Rect.setWidth(5);
   Rect.setHeight(7);

   // Muestra el área de un rectangulo
   cout << "Total area del rectangulo: " << Rect.getArea() << endl;
   cout <<"EL area del triangulo es :"<<T.getArea()<<endl;
   cout <<"EL area del paralelogramo es :"<<P.getArea();
   getch();
   return 0;
}