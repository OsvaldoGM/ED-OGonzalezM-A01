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

Triangulo::Triangulo(int base, int altura, int hipo, int perimetro, int area, int sen, int csen, int tan)
{
	this->base = base;
	this->altura = altura;
	this->hipo = hipo;
	this->perimetro = perimetro;
	this->area = area;
	this->sen = sen;
	this->csen = csen;
	this->tan = tan;
}

Triangulo::Triangulo(int base, int altura, int hipo, int perimetro, int area, int sen, int csen)
{
	this->base = base;
	this->altura = altura;
	this->hipo = hipo;
	this->perimetro = perimetro;
	this->area = area;
	this->sen = sen;
	this->csen = csen;
	this->tan = 0;
}

Triangulo::Triangulo(int base, int altura, int hipo, int perimetro, int area, int sen)
{
	this->base = base;
	this->altura = altura;
	this->hipo = hipo;
	this->perimetro = perimetro;
	this->area = area;
	this->sen = sen;
	this->csen = 0;
	this->tan = 0;
}

Triangulo::Triangulo(int base, int altura, int hipo, int perimetro, int area)
{
	this->base = base;
	this->altura = altura;
	this->hipo = hipo;
	this->perimetro = perimetro;
	this->area = area;
	this->sen = 0;
	this->csen = 0;
	this->tan = 0;
}

Triangulo::Triangulo(int base, int altura, int hipo, int perimetro)
{
	this->base = base;
	this->altura = altura;
	this->hipo = hipo;
	this->perimetro = perimetro;
	this->area = 0;
	this->sen = 0;
	this->csen = 0;
	this->tan = 0;
}

Triangulo::Triangulo(int base, int altura, int hipo)
{
	this->base = base;
	this->altura = altura;
	this->hipo = hipo;
	this->perimetro = 0;
	this->area = 0;
	this->sen = 0;
	this->csen = 0;
	this->tan = 0;
}

Triangulo::Triangulo(int base, int altura)
{
	this->base = base;
	this->altura = altura;
	this->hipo = 0;
	this->perimetro = 0;
	this->area = 0;
	this->sen = 0;
	this->csen = 0;
	this->tan = 0;
}

Triangulo::Triangulo(int base)
{
	this->base = base;
	this->altura = 0;
	this->hipo = 0;
	this->perimetro = 0;
	this->area = 0;
	this->sen = 0;
	this->csen = 0;
	this->tan = 0;
}

Triangulo::Triangulo()
{
	this->base = 0;
	this->altura = 0;
	this->hipo = 0;
	this->perimetro = 0;
	this->area = 0;
	this->sen = 0;
	this->csen = 0;
	this->tan = 0;
}

void Triangulo::setB(int base) {
	this->base = base;
}

void Triangulo::setAL(int altura) {
	this->altura = altura;
}

void Triangulo::setH(int hipo) {
	this->hipo = hipo;
}

void Triangulo::setS(int sen) {
	this->sen = sen;
}

void Triangulo::setC(int csen) {
	this->csen = csen;
}

void Triangulo::setT(int tan) {
	this->tan = tan;
}

int Triangulo::getB() {
	return this->base;
}

int Triangulo::getAL() {
	return this->altura;
}

int Triangulo::getH() {
	return this->hipo;
}

int Triangulo::getS() {
	return this->sen;
}

int Triangulo::getC() {
	return this->csen;
}

int Triangulo::getT() {
	return this->tan;
}
