//
#include "iostream"

using namespace std;

int main()
{	
	setlocale(LC_ALL, "Russian");	//–усский €зык в консоли
	 
	int a,b;						//переменные

	cout << "¬ведите число" << endl;
	cin >> a;
	b = a;
	if (a > 0)//против ошибок
	{
		for (int i = 1; i < b;)//цикл дл€ факториала 
		{
			a = a * i;
			i++;
		}
		cout << "факториал числа:" << a << endl;
	}

	
	return 0;
}