#include "Vector.h"
#include <cmath>

Vector::Vector(int x, int y, int z) {

	_x = x;
	_y = y;
	_z = z;
}

void Vector::SumVector(const Vector& vectorTwo)
{
	_x = _x + vectorTwo._x;
	_y = _y + vectorTwo._y;
	_z = _z + vectorTwo._z;
}


void Vector::SubtractionVector(const Vector& vectorTwo)
{
	_x = _x - vectorTwo._x;
	_y = _y - vectorTwo._y;
	_z = _z - vectorTwo._z;
}

void Vector::MultVectorOnNumber(const int& number)
{
	_x = _x * number;
	_y = _y * number;
	_z = _z * number;
}

int Vector::SclarMultVectors(const Vector& vectorTwo)
{
	int sum;

	sum = _x * vectorTwo._x + _y * vectorTwo._y + _z * vectorTwo._z;

	return sum;
}

Vector Vector::MultVectors(const Vector& vectorTwo)
{
	int newX;
	int newY;
	int newZ;

	newX = (_y * vectorTwo._z - _z * vectorTwo._y);
	newY = (_z * vectorTwo._x - _x * vectorTwo._z);
	newZ = (_x * vectorTwo._y - _y * vectorTwo._x);

	Vector product(newX, newY, newZ);

	return product;
}

const void Vector::PrintVector()
{
	cout << "Vector point: x = " << _x << "\ty = " << _y << "\tz = " << _z << endl;
}

Vector Vector::operator+(const Vector& otherVector) const
{
    Vector newVector(0, 0, 0);

	newVector._x = _x + otherVector._x;
	newVector._y = _y + otherVector._y;
	newVector._z = _z + otherVector._z;

	return newVector;
}

Vector Vector::operator-(const Vector& otherVector) const
{
	Vector newVector(0, 0, 0);

	newVector._x = _x - otherVector._x;
	newVector._y = _y - otherVector._y;
	newVector._z = _z - otherVector._z;

	return newVector;	
}

Vector Vector::operator*(const double& value) const
{
	Vector newVector(0, 0, 0);

	newVector._x = _x * value;
	newVector._y = _y * value;
	newVector._z = _z * value;

	return newVector;
}

Vector Vector::operator*(const Vector& otherVector) const
{
	Vector newVector(0, 0, 0);

	newVector._x = (_y * otherVector._z - _z * otherVector._y);
	newVector._y = (_z * otherVector._x - _x * otherVector._z);
	newVector._z = (_x * otherVector._y - _y * otherVector._x);

	return newVector;
}

int Vector::operator[](const Vector& otherVector) const
{
	int sum;

	sum = _x * otherVector._x + _y * otherVector._y + _z * otherVector._z;

	return sum;
}

ostream& operator<<(ostream& os, const Vector& vector)
{
	os << "Vector point:\tx = " << vector._x << "\ty = " << vector._y << "\tz = " << vector._z << endl;

	return os;
}