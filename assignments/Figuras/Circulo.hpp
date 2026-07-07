#pragma once 
#include "Figura.hpp"
#include <iostream>

class Circulo : public Figura {
    private:
        int radio;
    public:
        Circulo();
        Circulo(int,int,std::string, int);
        Circulo(int);
        Circulo(int,int,std::string);
        int getRadio() const;
        void setRadio(int);
        double circunferencia();
        void dibujar(); 
};

