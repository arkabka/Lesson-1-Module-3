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
	printf("�������, ����������, ����� ������� = ");
	scanf("%d", &n);

	if (n == 1)
	{
		int a, b, c, d;
		printf("�������, ����������, ��� ����� � � � \n");
		scanf("%d%d", &a, &b);

		if (pow(a, 2) + pow(b, 2) > pow((a + b), 2))
		{
			printf("����� ��������� ������\n");
		}
		else
			printf("������� ����� ������\n");
	}

	else if (n == 2)

	{
		float a, b, c = 0, d;

		printf("�������, ����������, ��� ���� ������ � ��������: ");
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

		printf("���� �������� ����� %f � ��������� �������� ����� %f \n", c, d);
	}

	else if (n == 3)

	{
		int a, b, c;
		printf("�������, ����������, 3 �����: ");
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
		printf("�������, ����������, ����� = ");
		scanf("%d", &a);

		if (((a - 3) % 10) > 0 && ((a % 10) > 0))
			printf("������� ���������\n");
		else
			printf("������� �� ���������\n");
	}

	else if (n == 5)

	{
		float a, b, c;
		printf("������, ����������, ����� ������ � ���� �������� � ������� = ");
		scanf("%f %f", &a, &b);

		if (b > 0 && b < 7)
		{
			c = ((a * 0.06) / 12);
			printf("����������� ������� = %f\n", c);
		}
		else if (b > 6 && b < 12)
		{
			c = ((a * 0.08) / 12);
			printf("����������� ������� = %f\n", c);
		}
		else
			printf("������������ ���� �������� ���\n");
	}

	else if (n == 6)

	{
		int a;
		printf("�������, ����������, ��� � ��������� �� -2000 �� +2000 = ");
		scanf("%d", &a);

		if ((a % 4) > 0)
			printf("��� �� ����������\n");
		else
			printf("��� ����������\n");
	}

	else if (n == 7)

	{
		int a, b, c;
		printf("�������, ����������, ����� ����� ������� = ");
		scanf("%d", &a);

		if (a > 0)
		{
			b = a * 0.1;
			c = a - b;
			printf("��� ������������� ������ � 10 ��������� ����� � ������ = %d", c);
		}
		else
			printf("��� �� ��������������� ������\n");
	}

	else if (n == 8)

	{
		int a, b;
		char c;
		printf("�������, ����������, ��� ���, ���� � ����������� � ��� ��� ");
		scanf("%c %d %d", &c, &a, &b);

		if ((a - 100) == b)
			printf("� ��� ��������� ���");
		else

			printf("����� ��� ������� ����� �� ���� ����������, � ����� ������� � ������� � ������� � ������� ���\n");
	}
	goto start;

}