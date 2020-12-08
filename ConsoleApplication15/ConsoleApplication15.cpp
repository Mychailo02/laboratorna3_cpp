// ConsoleApplication15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


int main()
{
	setlocale(LC_ALL, "Russian");
	double a=0;//об'ява змінних
	double xo=0;
	double x=0;
	double xn = 0;
	std::cout << "Введiть значення a: ";
	std::cin >> a;
	if (a <= 1)

	{
		xo = std::min(2 * a, 0.95); //знаходження xo в залежності від а
	}
	else if (a < 25)
	{
		xo = a / 5.f;
	}
	else  xo = a / 25.f;
	
	x = 0.8 * (xo) + a / (5 * pow(xo, 4));//знаходження x1 та x2
	xn = 0.8 * x + a / (5 * pow(x, 4));
	while (1.25 * a * abs(x - xn) >= pow(10, -6))  //Знаходження поточного та наступного значення х даного ряду та перевірка виконання умови
	{
		x = xn;
		xn = 0.8 * x + a / (5 * pow(x, 4));
	};
	
	std::cout <<"Поточне значення, при якому виконється умова: "<<x<<std::endl;
	std::cout << "res: " << a - pow(x, 5);
	

	
}


