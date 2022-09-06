#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point()
	{
		x = y = 0;
	}
	Point(int a, int b)
	{
		x = a;
		y = b;
	}
	void Print()
	{
		cout << "X : " << x << endl;
		cout << "Y : " << y << endl;
	}
};


int main()
{
	Point obg1(5, 1);
	obg1.Print();
	return 0;
}