#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 09-1 1��
int max(int, int, int);
int min(int, int, int);

int main()
{
	int num1, num2, num3;

	scanf("%d %d %d", &num1, &num2, &num3);

	printf("�ִ� : %d, �ּڰ� : %d", max(num1, num2, num3), min(num1, num2, num3));

}

int max(int num1, int num2, int num3)
{
	if ((num1 > num2) & (num1 > num3))
		return num1;

	else if ((num2 > num1) & (num2 > num3))
		return num2;

	else if ((num3 > num1) & (num3 > num2))
		return num3;
}

int min(int num1, int num2, int num3)
{
	if ((num1 < num2) & (num1 < num3))
		return num1;

	else if ((num2 < num1) & (num2 < num3))
		return num2;

	else if ((num3 < num1) & (num3 < num2))
		return num3;
} */
/* 09-1, 2��
float CelToFah(int cel);
float FahToCel(int fah);

int main()
{
	int temp;

	scanf("%d", &temp);

	printf("���� %d -> ȭ�� %f\n", temp, CelToFah(temp));
	printf("ȭ�� %d -> ���� %f", temp, FahToCel(temp));
}

float CelToFah(int cel)
{
	float fah;

	fah = 1.8 * cel + 32;
	return fah;
}
float FahToCel(int fah)
{
	float cel;

	cel = (fah - 32) / 1.8;
	return cel;
} */
/* 09-1, 3��, �Ǻ���ġ ����
int pibo(int);

int main()
{
	int time;
	
	scanf("%d", &time);
	pibo(time);
	
}

int pibo(int time)
{
	if (time == 1)
	{
		printf("0");
		return 0;
	}
	else if (time == 2)
	{
		printf("0, 1");
		return 0;
	}
	else if (time >= 3)
	{
		printf("0, 1");

		int first = 0, second = 1;
		int num;

		for (int i = 0; i < time - 2; i++)
		{
			num = first + second;
			printf(", %d", num);
			first = second;
			second = num;
		}

		return 0;
	}

}*/

/* 09-2
int AddToTotal(int num)
{
	static int total = 0; // ó���� �� �ѹ��� �ʱ�ȭ �ǰ� �� ���Ĵ� �ʱ�ȭ ����.
	total += num;
	return total;
}
int main()
{
	int num, i;
	for (i = 0; i < 3; i++)
	{
		printf("�Է�%d: ", i + 1);
		scanf("%d", &num);
		printf("����: %d\n", AddToTotal(num));
	}

} */