#pragma once
#include <String>
class punto
{
public:
	punto(int,int,int);
	punto(int,int);
	punto();
	void setcoorx (int);
	void setcoory(int);
	void setcoorz(int);
	void setdimension(std::string);
	int getcoorx();
	int getcoory();
	int getcoorz();
	std::string getdimension();

private:
	int coorx;
	int coory;
	int coorz;
	std::string dimension;
};
