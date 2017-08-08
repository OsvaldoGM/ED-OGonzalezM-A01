#include "Figura.h"



Figura::Figura(int perimetro, int area)
{
	this->area = area;
	this->perimetro = perimetro;
}


Figura::Figura(int perimetro)
{
	this->perimetro = perimetro;
	this->area = 0;
}

Figura::Figura(int area)
{
	this->perimetro = 0;
	this->area = area;
}

Figura::Figura()
{
	this->perimetro = 0;
	this->area = 0;
}

void Figura::setA(int area)
{
	this->area = area;
}

void Figura::setP(int perimetro)
{
	this->perimetro = perimetro;
}

int Figura::getA()
{
	return this->area;
}

int Figura::getP()
{
	return this->perimetro;
}


circulo::circulo(int perimetro, int area, int radio)
{
	this->area = area;
	this->perimetro = perimetro;
	this->radio = radio;
}

circulo::circulo(int perimetro, int area)
{
	this->area = area;
	this->perimetro = perimetro;
	this->radio = 0;
}

circulo::circulo(int perimetro, int radio)
{
	this->area = 0;
	this->perimetro = perimetro;
	this->radio = radio;
}

circulo::circulo(int area, int radio)
{
	this->area = area;
	this->perimetro = 0;
	this->radio = radio;
}

circulo::circulo(int perimetro)
{
	this->area = 0;
	this->perimetro = perimetro;
	this->radio = 0;
}

circulo::circulo(int area)
{
	this->area = area;
	this->perimetro = 0;
	this->radio = 0;
}

circulo::circulo(int radio)
{
	this->area = 0;
	this->perimetro = 0;
	this->radio = radio;
}

circulo::circulo()
{
	this->area = 0;
	this->perimetro = 0;
	this->radio = 0;
}

int circulo::getR() {
	return this->radio;
}

void circulo::setR(int radio) {
	this->radio = radio;
}
