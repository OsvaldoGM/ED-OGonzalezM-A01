#pragma once
class Figura
{
protected:
	int perimetro, area;

public:
	Figura(int, int);
	Figura(int);
	Figura();
	int getP();
	int getA();
	void setP(int);
	void setA(int);
};

class Triangulo : public Figura
{
protected:
	int base, altura, hipo, sen, csen, tan;

public:
	Triangulo(int, int, int, int, int, int, int, int);
	Triangulo(int, int, int, int, int, int, int);
	Triangulo(int, int, int, int, int, int);
	Triangulo(int, int, int, int, int);
	Triangulo(int, int, int, int);
	Triangulo(int, int, int);
	Triangulo(int, int);
	Triangulo(int);
	Triangulo();
	void setB(int);
	void setAL(int);
	void setH(int);
	void setS(int);
	void setC(int);
	void setT(int);
	int getB();
	int getAL();
	int getH();
	int getS();
	int getC();
	int getT();
};
