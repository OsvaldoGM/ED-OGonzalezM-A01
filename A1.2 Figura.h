#pragma once
class Figura
{
protected:
	int perimetro, area;
public:
	Figura(int , int);
	Figura(int);
	Figura();
	int getP();
	int getA();
	void setP(int);
	void setA(int);
};

class circulo : public Figura {
protected:
	int radio;

public:
	circulo(int, int, int);
	circulo(int, int);
	circulo(int);
	circulo();
	int getR();
	void setR(int);
};

