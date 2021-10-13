#include <iostream>
//#include "Object.h"
#include "automobile.h" 
#include"Lorry.h"
using namespace std;
//функция принимает объект базового класса как параметр 
void f1(Car&c)
{
	c.Set_mark("Opel"); cout << c;
}
//функция возвращает объект базового класса как результат 
Car f2()
{
	Lorry l("Kia", 1, 2, 3);
	return l;
}

void main()
{
	Car a;
	cin >> a;
	cout << a;
	Car b("Ford", 4, 115);
	cout << b;
	a = b;
	cout << a;
	Lorry c;
	cin >>c;
	cout << c << endl;//вывод с помощью перегруженной операции
	
}