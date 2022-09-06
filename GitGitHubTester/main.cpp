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
};

class Person
{
	string name;
	int age;
public:
	Person()
	{
		name = "";
		age = 0;
	}
	Person(string n, int a)
	{
		name = n;
		age = a;
	}
};

int main()
{
	return 0;
}