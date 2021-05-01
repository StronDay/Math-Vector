#pragma once
#include <string>
#include <iostream>

using namespace std;
typedef unsigned int uint;

class Vector {

private:

	int _x;
	int _y;
	int _z;

public:

	Vector(int x, int y, int z);

	void SumVector(const Vector& vectorTwo);
	void SubtractionVector(const Vector& vectorTwo);
	void MultVectorOnNumber(const int& number);
	int SclarMultVectors(const Vector& vectorTwo);
    Vector MultVectors(const Vector& vectorTwo);

    Vector operator+(const Vector& otherVector) const;
    Vector operator-(const Vector& otherVector) const;
    Vector operator*(const double& value) const;
    Vector operator*(const Vector& otherVector) const;
	int operator[](const Vector& otherVector) const;


	const void PrintVector();
	friend ostream& operator<<(ostream& os, const Vector& vector);
};