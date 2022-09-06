#include <iostream>
using namespace std;

class Student
{
	string name;
	int age;
public:
	Student()
	{
		name = "";
		age = 0;
	}
	Student(string n, int a)
	{
		name = n;
		age = a;
	}
};

int main()
{
	return 0;
}