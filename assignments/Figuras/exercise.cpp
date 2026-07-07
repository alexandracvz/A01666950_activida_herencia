#include <iostream>
#include "Figura.hpp"
#include "Circulo.hpp"
#include "Rectangulo.hpp"
using namespace std;

int main() 
{
    Figura f1;
	cout << f1.dibuja() << std::endl;
    
    Figura f2(1,2,"Rojo");
    cout << f2.dibuja() << std::endl;

    Circulo c1;
    c1.dibujar();

    Circulo c2(5,7,"Azul",10);
    c2.dibujar();

    Rectangulo r1;
    r1.dibujar();

    Rectangulo r2(3,4,"Verde",8,5);
    r2.dibujar();
}
