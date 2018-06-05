#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<locale>

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int n = 0;
start:
	printf("Укажите, пожалуйста, номер задания = ");
	scanf("%d", &n);

	if (n == 1)
	{
		int a, b, c, d;
		printf("Введите, пожалуйста, две цифры а и б \n");
		scanf("%d%d", &a, &b);

		if (pow(a, 2) + pow(b, 2) > pow((a + b), 2))
		{
			printf("Сумма квадратов больше\n");
		}
		else
			printf("Квадрат суммы больше\n");
	}

	else if (n == 2)

	{
		float a, b, c = 0, d;

		printf("Введите, пожалуйста, Ваш стаж работы и зарплату: ");
		scanf("%f %f", &a, &b);

		//d = b;

		if (a > 2 && a < 5)
		{
			c = b * 0.02;
			d = c + b;
		}
		else if (a > 5 && a < 10)
		{
			c = b * 0.05;
			d = c + b;
		}

		printf("Ваша надбвака равна %f и настоящая зарплата равна %f \n", c, d);
	}

	else if (n == 3)

	{
		int a, b, c;
		printf("Введите, пожалуйста, 3 цифры: ");
		scanf("%d%d%d", &a, &b, &c);

		if (a > 0)
			a = pow(a, 2);
		if (b > 0)
			b = pow(b, 2);
		if (c > 0)
			c = pow(c, 2);
		
			printf("a = %d, b = %d, c = %d\n", a, b, c);
	}

	else if (n == 4)
	
	{
		int a;
		printf("Введите, пожалуйста, число = ");
		scanf("%d", &a);

		if (((a - 3) % 10) > 0 && ((a % 10) > 0))
			printf("Условия выполнены\n");
		else
			printf("Условия не выполнены\n");
	}

	else if (n == 5)

	{
		float a, b, c;
		printf("Введит, пожалуйста, сумму вклада и срок договора в месяцах = ");
		scanf("%f %f", &a, &b);

		if (b > 0 && b < 7)
		{
			c = ((a * 0.06) / 12);
			printf("Ежемесячная выплата = %f\n", c);
		}
		else if (b > 6 && b < 12)
		{
			c = ((a * 0.08) / 12);
			printf("Ежемесячная выплата = %f\n", c);
		}
		else
			printf("Максимальный срок депозита год\n");
	}

	else if (n == 6)

	{
		int a;
		printf("Укажите, пожалуйста, год в диапазоне от -2000 до +2000 = ");
		scanf("%d", &a);

		if ((a % 4) > 0)
			printf("Год не високосный\n");
		else
			printf("Год високосный\n");
	}

	else if (n == 7)

	{
		int a, b, c;
		printf("Укажите, пожалуйста, сумму Вашей закупки = ");
		scanf("%d", &a);

		if (a > 0)
		{
			b = a * 0.1;
			c = a - b;
			printf("Вам предоставлена скидка в 10 процентов сумма к оплате = %d", c);
		}
		else
			printf("Вам не предоставляется скидка\n");
	}

	else if (n == 8)

	{
		int a, b;
		char c;
		printf("Укажите, пожалуйста, Ваш пол, рост в сантиметрах и Ваш вес ");
		scanf("%c %d %d", &c, &a, &b);

		if ((a - 100) == b)
			printf("У Вас идеальный вес");
		else

			printf("Худей или набирай массу на свое усмотрение, а лучше поезжай к бабушке и дедушке и набирай вес\n");
	}
	goto start;

}