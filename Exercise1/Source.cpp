#include <iostream>
#include <stdio.h>
#include <locale.h>
int main()
{


	/* Task 1a
	int x, y;

	printf("x = ");
	scanf_s ("%d", &x);

	y = 5 * x + 7;
	printf("y = %d\n", y);

	system("pause");

	*/

	/* Task 1b
	int a, p;

	printf("a = ");
	scanf_s ("%d", &a);

	p = 4 * a;
	printf("p = %d\n", p);

	system("pause");

	*/

	/* Task 1c
	int r, l;

	printf("r = ");
	scanf_s ("%d", &r);

	l = 2 * 3.14 * r;
	printf("l = %d\n", l);

	system("pause");
	*/

	/* Task 1d
	int d, s;

	printf("d = ");
	scanf_s ("%d", &d);

	s = 3.14 * d * d / 4;
	printf("s = %d\n", s);

	system("pause");

	*/

	/* Task 1e
	int a, b, c;

	printf("a = ");
	scanf_s("%d", &a);

	printf("b = ");
	scanf_s ("%d", &b);

	c = sqrt(a*a+b*b);
	printf("c = %d\n", c);
	system("pause");

	*/

	/* Task 1f
	int a, b, p;

	printf("a = ");
	scanf_s("%d", &a);

	printf("b = ");
	scanf_s ("%d", &b);

	p = a+b+sqrt(a*a+b*b);
	printf("p = %d\n", p);

	system("pause");

	*/

	/* Task 1g
	int a, b, p, d;

	printf("a = ");
	scanf_s("%d", &a);

	printf("b = ");
	scanf_s ("%d", &b);

	p = 2 * a + 2 * b;
	d = sqrt(a * a + b * b);

	printf("p = %d\n", p);
	printf("d = %d\n", d);
	system("pause");

	*/

	/* Task 2a
	int a, b;

	printf("a = ");
	scanf_s("%d", &a);

	printf("b = ");
	scanf_s("%d", &b);

	if (a > b)
	{
		printf("Min number: %d\n", b);
		printf("Max number: %d\n", a);
	}

	else
	{
		printf("Min number: %d\n", a);
		printf("Max number: %d\n", b);
	}

	*/
	
	/* Task 2b
	int a, r;

	printf("a = ");
	scanf_s("%d", &a);
	printf("r = ");
	scanf_s ("%d", &r);

	if (a > 2 * r)
	{
		printf("The square will fit in the circle\n");
	}

	else
	{
		printf("The square will not fit in the circle\n");
	}
	
	system("pause");


	*/

	/* Task 2c
	int a, r;

	printf("a = ");
	scanf_s("%d", &a);

	printf("r = ");
	scanf_s ("%d", &r);

	if (a > 2 * r)
	{
		printf("The circle will not fit\n");
	}

	else
	{
		printf("The circle will fit\n");
	}
	
	system("pause");

	*/

	/* Task 2d
	int a, b;

	printf("a = ");
	scanf_s("%d", &a);

	printf("b = ");
	scanf_s ("%d", &b);

	if (a > b)
	{
		printf("The greater number : %d\n", a);
	}

	else
	{
		printf("The greater number: %d\n", b);
	}
	
	system("pause");

	*/

	/* Task 2e
	int a, b;

	printf("a = ");
	scanf_s("%d", &a);

	printf("b = ");
	scanf_s ("%d", &b);

	if (a > b)
	{
		printf("The lower number: %d\n", b);
	}

	else
	{
		printf("The lower number: %d\n", a);
	}
	
	system("pause");

	*/

	/* Task 2f
	int Sf, Skm, Smf, Sm;

	printf("Sf = ");
	scanf_s("%d", &Sf);

	printf("Skm = ");
	scanf_s("%d", &Skm);

	Smf = Sf * 0.45 * 1000;
	Sm = Skm * 1000;

	if (Smf > Sm)
	{
		printf("S v futah >\n");
	}
	else
	{
		printf("S v km >\n");
	}
	system("pause");

	*/

	/* Task 3a
	float a, b;

	for (int a = 10; a < 23; a++)
	{
		b = a * 2.54;
		printf("result: %f\n", b);
	}

	system("pause");

	*/

	/* Task 3b
	float a, b;

	for (int a = 1; a < 21; a++)
	{
		b = a * 66.5;
		printf("result: %f\n", b);
	}

	system("pause");

	*/

	/* Task 3c
	float a, b;

	for (int a = 1; a < 21; a++)
	{
		b = exp(a);
		printf("result: %f\n", b);
	}
	system("pause");

	*/

	/* Task 3d
	float a, b;

	for (int a = 1; a < 22; a++)
	{
		b = a + 0.1;
		printf("result: %f\n", b);
	}

	system("pause");

	*/

	/* Task 3e
	float a, b;

	for (int a = 1; a < 10; a ++)
	{
		b = 2 + (a*0.1);
		printf("result: %f\n", b);
	}

	system("pause");
	*/

	/* Task 3f
	int a, b;

	for (int a = 1; a < 21; a ++)
	{
		b = 2 * a;
		printf("result: %d\n", b);
	}

	system("pause");
	*/

	/* Task 3g
	int a, b;

	for (int a = 0; a < 15; a ++)
	{
		b = a*2+1;
		printf("result: %d\n", b);
	}

	system("pause");
	*/

	/* Task 3h
	float a, b;
	for (int a = 1; a < 11; a ++)

	{
		b = sqrt(a*2.0);
		printf("result: %f\n", b);
	}

	system("pause");
	*/

	/* Task 3i
	int a, b, c;

	printf("enter price of candies = ");
	scanf_s ("%d", &c);

	for (int a = 2; a < 11; a ++)
	{
		b = a * c;
		printf("result: %d\n", b);
	}

	system("pause");

	*/

	/* Task 3j
	int a, b, x;
	float y;

	printf("enter a = ");
	scanf_s ("%d", &a);

	printf("enter b = ");
	scanf_s("%d", &b);

	for (int x = a; x < b; x ++)
	{
		y=sqrt(x);
		printf("result: %f\n", y);
	}

	system("pause");
	*/

	/* Task 4a
	setlocale(LC_ALL, "");
	int a, b, x;

	printf("enter a (a<b): ");
	scanf_s("%d", &a);

	printf("enter b (a<b): ");
	scanf_s("%d", &b);

	if (a < b)
	{
		for (int x = a+1; x < b; x++)
		{
			printf("%d\n", x);
		}
	}

	else
	{
		printf("a must be less than b\n");
	}

	system("pause");
	*/

	/* Task 4b
	setlocale(LC_ALL, "");
	int a, b, x;

	printf("enter a (a<b): ");
	scanf_s("%d", &a);

	printf("enter b (a<b): ");
	scanf_s("%d", &b);

	if (a < b)
	{
		for (int x = b-1; x > a; x--)
		{
			printf("%d\n", x);
		}
	}
	else
	{
		printf("a must be less than b\n");
	}
	 system("pause");
	*/

	/* Task 5a
	setlocale(LC_ALL, "");
	int a, b, c, d;

	printf("Введите двузначное число: ");
	scanf_s("%d", &a);

	b = a / 10;
	c = a - (b * 10);
	d = c * 10 + b;

	printf("Конечное число: %d\n", d);
	system("pause");

	*/

	/* Task 5c
	setlocale(LC_ALL, "");
	int a, b, c;

	printf("Введите двузначное число: \n");
	scanf_s("%d", &a);

	b = a / 10;
	c = a - (b * 10);

	printf("Десятков: %d\n", b);
	printf("Единиц: %d\n", c);

	system("pause");
	*/

	/* Task 5d
	setlocale(LC_ALL, "");
	float cm, dm, mm, m;

	printf("Введите количество сантиметров: ");
	scanf_s("%f", &cm);
	m = cm / 100;
	printf("%f cm = %f m\n", cm, m);

	printf("Введите количество дециметров: ");
	scanf_s("%f", &dm);
	m = dm / 10;
	printf("%f dm = %f m\n", dm, m);

	printf("Введите количество миллиметров: ");
	scanf_s("%f", &mm);
	m = mm / 1000;
	printf("%f mm = %f m\n", mm, m);

	system ("pause");
	*/

	/* Task 5e
	setlocale(LC_ALL, "");
	int a, b, c, d;

	printf("Введите a: ");
	scanf_s("%d", &a);

	printf("Введите b: ");
	scanf_s("%d", &b);

	printf("Введите c: ");
	scanf_s("%d", &c);

	if ((a < b and b < c) or (b < a and a < c))
	{
		d = a * b;
		printf("Произведение меньших чисел = %d\n", d);
	}

	if ((c < b and b < a) or (b < c and c < a))
	{
		d = b * c;
		printf("Произведение меньших чисел = %d\n", d);
	}
		
	if ((c < a and a < b) or (a < c and c < b))
	{
		d = a * c;
		printf("Произведение меньших чисел = %d\n", d);
	}

	system("pause");
	*/

	/* Task 5f
	setlocale(LC_ALL, "");
	int a, b, c;
	float x1, x2;

	printf("Введите a: ");
	scanf_s("%d", &a);

	printf("Введите b: ");
	scanf_s("%d", &b);

	printf("Введите c: ");
	scanf_s("%d", &c);

	if ((b * b - 4 * a * c) >= 0)
	{
		x1 = (-b + sqrt(b*b - 4 * a*c)) / 2 * a;
		x2 = (-b - sqrt(b*b - 4 * a*c)) / 2 * a;
		printf("Корни уравнения: %f и %f\n", x1, x2);
	}

	else 
	{
		printf("Дискриминант меньше 0\n");
	}
	
	system("pause");
	*/

	/* Task 5g
	setlocale(LC_ALL, "");
	int a;
	float b, c;

	printf("Введите оклад: ");
	scanf_s("%d", &a);

	if (a < 5000)
	{
		b = a * 1.12;
		printf("Премия = %f\n", a * 0.12);
		printf("Оклад и премия = %f\n", b);
	}

	else
	{
		b = a * 1.1;
		printf("Премия = %f\n", a * 0.1);
		printf("Оклад и премия = %f\n", b);
	}
	system("pause");

	*/

	
}
