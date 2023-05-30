#include <iostream>
#include <locale>
#include <math.h>
using namespace std;

int main()
{
	 setlocale(LC_ALL, "RUSSIAN");
	 char ss;
     do {
			 double a, b, s1, s2, h, n, m, x, I, r;
			 a = 0.8;
			 b = 1.8;
			 cout << "Введите количество разбиений" << endl;
			 cin >> n;
			 h = (b - a) / n;
			 x = a + h;
			 s1 = 0;
			 s2 = 0;
			 while (x <= b - h)
			 {
				 m = x*x;
				 r = sqrt(0.8*m + 1) / (x + sqrt(1.5*m + 2));
				 s1 = s1 + r;
				 x = x + 2 * h;
			 };
			 x = a + 2 * h;
			 while (x <= b - 2 * h)
			 {
				 m = x*x;
				 r = sqrt(0.8*m + 1) / (x + sqrt(1.5*m + 2));
				 s2 = s2 + r;
				 x = x + 2 * h;
			 };
			 I = (h / 3)*((sqrt(0.8*a*a + 1) / (a + sqrt(1.5*a*a + 2)) + sqrt(0.8*b*b + 1) / (b + sqrt(1.5*b*b + 2))) + 4 * s1 + 2 * s2);
			 cout << "Результат вычисления = " << I << endl;

			 cout << "Продолжить y/n?" << endl;
			 cin >> ss;
			 system("pause");
		 } while (ss == 'y');
     return 0;
}

