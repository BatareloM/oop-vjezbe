#include "food.hpp"
#include <iostream>

using namespace std;

void Food::plusic()
{
	counter++;
}

void Food::minusic()
{
	counter--;
}

void Food::ispis()
{
	cout << "Raspolozivo je:" << counter;
}

void Food::getCounter()
{
	return counter;
}






