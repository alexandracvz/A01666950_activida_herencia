#include "Circulo.hpp"
#include <iostream>
#include <cmath>

Circulo::Circulo() : Figura() {
    radio = 1;
}

Circulo::Circulo(int x_, int y_, std:: string _color, int radio_) : Figura(x_, y_, color_) {
    radio = radio_;
}

Circulo::Circulo(int radio_) : Figura() {
    radio = radio_;
}

Circulo::Circulo(int x_, int y_, std::string color_) : Figura(x_, y_, color) {
    radio = 1;
}

int Circulo::getRadio() const{
    return radio;
}

void Circulo::setRadio(int radio_) {
    radio = radio_;
} 

double Circulo::circunferencia() {
    return 2 * radio * M_PI;
} 

void Circulo::dibuja() {
    std::cout << "Soy un círculo de color: " << getColor() << "con el centro en (" << std::to_string(getX()) << "," << std::to_string(getY()) << ") de radio = " << std::to_string(radio) << " y circunferencia= " << std::to_string(circunferefncia()) << "." << std::endl;

}