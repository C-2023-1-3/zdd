#include "mytemperature.h"
double celsius_to_fah(double a)
{
	double b = a * 9 / 5 + 32;
	return b;
}
double fah_to_celsius(double x)
{
	double y = (x - 32) / 9 * 5;
	return y;
}
