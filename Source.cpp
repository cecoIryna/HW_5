#include <iostream>
using namespace std;

class CPU
{
	char* model;
public:
	CPU(const char* m)
	{
		model = new char[strlen(m) + 1];
		strcpy_s(model, strlen(m) + 1, m);
	}
	void PrintCPU()
	{
		cout << "CPU model: " << model << endl;
	}
	~CPU()
	{
		delete[]model;
	}
};
class SDD
{
	char* model;
public:
	SDD(const char* m)
	{
		model = new char[strlen(m) + 1];
		strcpy_s(model, strlen(m) + 1, m);
	}
	void PrintCond()
	{
		cout << "SDD model: " << model << endl;
	}
	~SDD()
	{
		delete[]model;
	}
};
class SDD
{
	char* model;
public:
	SDD(const char* m)
	{
		model = new char[strlen(m) + 1];
		strcpy_s(model, strlen(m) + 1, m);
	}
	void PrintCond()
	{
		cout << "SDD model: " << model << endl;
	}
	~SDD()
	{
		delete[]model;
	}
};
class Car
{
	char* model;
	const int year;
	Engine eng;
	Cond c;
public:
	Car(const char* n, int y, const char* eng_name, const char* c_name) : year(y), eng(eng_name), c(c_name)
	{
		model = new char[strlen(n) + 1];
		strcpy_s(model, strlen(n) + 1, n);
	}
	~Car()
	{
		delete[]model;
	}
	void PrintCar() {
		cout << model << endl;
		cout << year << endl;
		eng.PrintEngine();
		c.PrintCond();
	}
};

int main()
{
	Car car1("Toyota", 2003, "V8 Engine", "Bosh");
	car1.PrintCar();
}