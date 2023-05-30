#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
// ������ ������ ������ ������ (���� ������ 124, �� ����������� "1")
char read_symbol()
{
	printf(">>>");
	char choice = (char)getchar();
	while (getchar() != '\n');
	return choice;
}
// ������� �������
void clear_console()
{
	system("cls");
}
// ������� ����
void print_menu()
{
	clear_console();
	printf("1. ���������� ���\n");
	printf("2. ���������� ���\n");
	printf("3. �� ������\n");
	printf("4. �����\n");
}
// ����� ������� � ���������� �����
void print_constant_menu()
{
	clear_console();
	printf("1. ����� ��������������� ����� ������\n");
	printf("2. ����� ��������������� ������ ������\n");
	printf("3. ����� ��������\n");
	printf("4. ����� �������\n");
	printf("5. �����\n");
}
// ����� ������� � ���������� �����
void print_variable_menu()
{
	clear_console();
	printf("1. ������� ��������\n");
	printf("2. �����\n");
}
// ������� �������� (���������� ���)
void left_variable_metode()
{
	double I_n, I_2n, h, E, a, b, s_2, x, R;
	int n;
	printf("������� ���������� ���������: \n");
	scanf("%d", &n);
	a = 1.0;
	b = 2.2;
	E = pow(10, -6);
	h = (b - a) / n;
	I_n = 0;
	do
	{
		s_2 = 0;
		x = a;
		while (x <= b - h)
		{
			s_2 += (sqrt(1.5 * x + 0.6) / (1.6 + sqrt(0.8 * x * x + 2)));
			x += h;
		}
		I_2n = h * s_2;
		R = fabs(I_2n - I_n);
		I_n = I_2n;
		h /= 2;
	} while (R > E);
	printf("��������� = %.10lf\n", I_2n);
	system("pause");
}
// ����� ����� ������
void left_metode()
{
	double a, b, h, n = 10, s, x, m, r, I;
	a = 1.0;
	b = 2.2;
	while (n <= 10000)
	{
		h = (b - a) / n;
		s = 0;
		x = a;
		while (x <= b - h)
		{
			m = x * x;
			r = (sqrt(1.5 * x + 0.6) / (1.6 + sqrt(0.8 * m + 2)));
			s = s + r;
			x = x + h;
		}
		I = h * s;
		printf("���������� ��������� = %.0lf\n", n);
		printf("��������� = %.10lf\n", I);
		n *= 10;
	}
	system("pause");
}
// ����� ������ ������
void right_metode()
{
	double a, b, h, n = 10, s, x, m, r, I;
	a = 1.0;
	b = 2.2;
	while (n <= 10000)
	{
		h = (b - a) / n;
		s = 0;
		x = a + h;
		while (x <= b)
		{
			m = x * x;
			r = (sqrt(1.5 * x + 0.6) / (1.6 + sqrt(0.8 * m + 2)));
			s = s + r;
			x = x + h;
		}
		I = h * s;
		printf("���������� ��������� = %.0lf\n", n);
		printf("��������� = %.10lf\n", I);
		n *= 10;
	}
	system("pause");
}
//����� ��������
void trapezoid_metode()
{
	double a, b, h, n = 10, s, x, m, r, I;
	a = 1.0;
	b = 2.2;
	while (n <= 10000) {
		h = (b - a) / n;
		s = 0;
		x = a + h;
		while (x <= b - h)
		{
			m = x * x;
			r = (sqrt(1.5 * x + 0.6) / (1.6 + sqrt(0.8 * m + 2)));
			s = s + r;
			x = x + h;
		}
		I = h * ((sqrt(1.5 * a + 0.6) / (1.6 + sqrt(0.8 * a * a + 2)) + sqrt(1.5 * b + 0.6) / (1.6 + sqrt(0.8 * b * b + 2))) / 2 + s);
		printf("���������� ��������� = %.0lf\n", n);
		printf("��������� = %.10lf\n", I);
		n *= 10;
	}
	system("pause");
}
//����� �������
void parabola_metode()
{
	double a, b, h, n = 10, s, x, m, r, I;
	a = 1.0;
	b = 2.2;
	while (n <= 10000)
	{
		h = (b - a) / n;
		x = a + h;
		double s1 = 0;
		double s2 = 0;
		while (x <= b - h)
		{
			m = x * x;
			r = (sqrt(1.5 * x + 0.6) / (1.6 + sqrt(0.8 * m + 2)));
			s1 = s1 + r;
			x = x + 2 * h;
		}
		x = a + 2 * h;
		while (x <= b - 2 * h)
		{
			m = x * x;
			r = (sqrt(1.5 * x + 0.6) / (1.6 + sqrt(0.8 * m + 2)));
			s2 = s2 + r;
			x = x + 2 * h;
		}
		I = (h / 3) * ((sqrt(1.5 * a + 0.6) / (1.6 + sqrt(0.8 * a * a + 2)) + sqrt(1.5 * b + 0.6) / (1.6 + sqrt(0.8 * b * b + 2))) + 4 * s1 + 2 * s2);
		printf("���������� ��������� = %.0lf\n", n);
		printf("��������� = %.10lf\n", I);
		n *= 10;
	}
	system("pause");
}
// ������� � ���������� �����
void print_constant_step()
{
	while (1)
	{
		print_constant_menu();
		char choice = read_symbol();
		switch (choice)
		{
		case '1':
			clear_console();
			left_metode();
			break;
		case '2':
			clear_console();
			right_metode();
			break;
		case '3':
			clear_console();
			trapezoid_metode();
			break;
		case '4':
			clear_console();
			parabola_metode();
			break;
		case '5':
			return;
		}
	}
}
// ������� � ���������� �����
void print_variable_step()
{
	while (1)
	{
		print_variable_menu();
		char choice = read_symbol();
		switch (choice)
		{
		case '1':
			clear_console();
			left_variable_metode();
			break;
		case '2':
			return;
		}
	}
}
// ������� �� ������
void about_author()
{
	clear_console();
	printf("������� ������ ������� 2 ����� ��� �������� �����\n");
	system("pause");
}

int main()
{
	setlocale(LC_ALL, "RUS");
	while (1)
	{
		print_menu();
		char choice = read_symbol();
		switch (choice)
		{
		case '1':
			print_constant_step();
			break;
		case '2':
			print_variable_step();
			break;
		case '3':
			about_author();
			break;
		case '4':
			return 0;
		}
	}

	return 0;
}
