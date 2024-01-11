#include <iostream>
#include <string>

using namespace std;

template<typename T>

T mmin(T x, T y)
{
	return x < y ? x : y; //skripta
}

int main()
{
	int rezultat = mmin(5, 2);

	cout << "Manji je je:" << rezultat;
	return 0;
}
