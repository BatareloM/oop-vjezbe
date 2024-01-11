#include <iostream>
#include <cmath>

using namespace std;
template<typename T>
class Point
{
private:
	T x;
	T y;
public:
	Point(T x, T y) : x(x),y(y){}

	Point operator-(Point& other)
	{
		return Point(x - other.x, y - other.y);
	}
	T udaljenost(const Point& other)
	{
		T dx = x - other.x;
		T dy = y - other.y;
		return sqrt(dx * dx + dy * dy);
	}
};

int main()
{
	Point<int> p1(2, 3), p2(3, 4);
	cout << "udaljenost tocaka" << p1 << " i " << p2 << " je " << p1 - p2;
}