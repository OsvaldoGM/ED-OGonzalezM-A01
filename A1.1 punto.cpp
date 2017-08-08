#include "punto.h"



punto::punto(int coorx, int coory, int coorz)
{
	this->coorx = coorx;
	this->coory = coory;
	this->coorz = coorz;
	this->dimension = "Es de 3 dimensiones";
}


punto::punto(int coorx, int coory)
{
	this->coorx = coorx;
	this->coory = coory;
	this->coorz = NULL;
	this->dimension = "Es de 2 dimensiones";
}

punto::punto()
{
	this->coorx = NULL;
	this->coory = NULL;
	this->coorz = NULL;
	this->dimension = "No tiene dimensiones";
}

void punto::setcoorx(int coorx)
{
	this->coorx = coorx;
}

void punto::setcoory(int coory)
{
	this->coory = coory;
}

void punto::setcoorz(int coorz)
{
	this->coorz = coorz;
}

void punto::setdimension(std::string dimension)
{
	this->dimension = dimension;
}

int punto::getcoory()
{
	return this->coory;
}

int punto::getcoorz()
{
	return this->coorz;
}

int punto::getcoorx()
{
	return this->coorx;
}

std::string punto::getdimension()
{
	return this->dimension;
}
