#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cmath>
#include <fstream>
#include <sstream>

using namespace std;

struct Point
{
	double x;
	double y;
};

void cita(string& datoteka, double radijus, double udaljenost)
{
	ifstream file(datoteka);
	vector<Point> kordinate;
	{
		istream_iterator<double>(file),
		istream_iterator<double>(),
		istream_iterator<double>(file),
		istream_iterator<double>()
	};

	sort(kordinate.begin(), kordinate.end(), [](Point& a, Point& b)
		{
			return hypot(a.x, a.y) < hypot(b.x, b.y);
		});

	int brojTocaka = count_if(kordinate.begin(), kordinate.end(), [radijus](Point& p)
		{
			return hypot(p.x, p.y) < radijus;

		});

	replace_if(kordinate.begin(), kordinate.end(), [udaljenost](Point& p)
		{
			return hypot(p.x, p.y) == udaljenost;
		}, Point{ 2.0,4.0 });

	reverse(kordinate.begin(), kordinate.end());
	ostream_iterator<Point> ispis(cout, " ");
	copy(kordinate.begin(), kordinate.end(), ispis);

	file.close();
}

int main()
{
	cita("points.txt", 2, 4);
	return 0;
}