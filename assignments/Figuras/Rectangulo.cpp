#include "Rectangulo.hpp"
#include <iostream>

Rectangulo::Rectangulo() : Figura() {
    base = 1;
    altura = 1;
}

Rectangulo::Rectangulo(int x_, int y_, std::string color_, int base_, int altura_)
    : Figura(x_, y_, color_) {

    base = base_;
    altura = altura_;
}

Rectangulo::Rectangulo(int base_, int altura_) : Figura() {
    base = base_;
    altura = altura_;
}

Rectangulo::Rectangulo(int x_, int y_, std::string color_)
    : Figura(x_, y_, color_) {

    base = 1;
    altura = 1;
}

int Rectangulo::getBase() const {
    return base;
}

int Rectangulo::getAltura() const {
    return altura;
}

void Rectangulo::setBase(int base_) {
    base = base_;
}

void Rectangulo::setAltura(int altura_) {
    altura = altura_;
}

double Rectangulo::perimetro() {
    return 2 * (base + altura);
}

void Rectangulo::dibujar() {

    std::cout
        << "Soy un rectángulo de color: " << getColor() << " con la esquina en (" << getX() << "," << getY() << ") de base = " << base << " y altura = " << altura << " y perímetro = " << perimetro() << "." << std::endl;

}