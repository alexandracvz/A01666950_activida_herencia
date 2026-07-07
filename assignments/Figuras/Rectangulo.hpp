#pragma once
#include "Figura.hpp"
#include <iostream>

class Rectangulo : public Figura {

private:
    int base;
    int altura;

public:
    Rectangulo();
    Rectangulo(int,int,std::string,int,int);
    Rectangulo(int,int);
    Rectangulo(int,int,std::string);

    int getBase() const;
    int getAltura() const;

    void setBase(int);
    void setAltura(int);

    double perimetro();

    void dibujar();
};