#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 07-1, 2��
int main()
{
	int num = 0;
	int i = 1;
	scanf("%d", &num);

	while (i < num + 1)
	{
		printf("%d ", 3 * i);
		i++;
	}
} */
/* 07-1, 3��
int main()
{
	int num, total = 0;

	scanf("%d", &num);

	while (num != 0)
	{
		total += num;
		scanf("%d", &num);
	}
	printf("���� : %d", total);

} */
/* 07-1, 4��
int main()
{
	int num, n = 9;

	scanf("%d", &num);

	while (n > 0)
	{
		printf("%d * %d = %2d\n", num, n, num * n);
		n--;
	}
} */
/* 07-1, 5��
int main()
{
	int i = 0, time, num, total = 0;
	float avg = 0;

	scanf("%d", &time);
	while (i < time)
	{
		scanf("%d", &num);
		total += num;
		i++;
	}
	avg = (float)total / time;
	printf("��� : %f", avg);
} */

/* 07-2, 1��
int main()
{
	int time = 0, num, total = 0;

	while (time < 5)
	{
		scanf("%d", &num);
		while (num < 1)
		{
			printf("1�̻��� ������ �ٽ� �Է��� �ּ���.\n");
			scanf("%d", &num);
		}
		total += num;
		time++;
	}

	printf("���� : %d", total);
} */
/* 07-2, 2��
int main()
{
	int time1 = 0, time2;

	while (time1 < 5)
	{
		time2 = 0;
		while (time2 < time1)
		{
			printf("o");
			time2++;
		}
		printf("*\n");
		time1++;
	}

} */


/* 07-3, 2��
int main()
{
	int total = 0, num = 0;

	do
	{
		total += num;
		num += 2;

	} while (num <= 100);

	printf("���� : %d", total);
} */
/* 07-3, 3��
int main()
{
	int dan = 2, i;

	do
	{
		i = 1;

		do
		{
			printf("%d * %d = %2d\n", dan, i, dan * i);
			i++;

		} while (i < 10);

		dan++;

	} while (dan < 10);

} */

/* 07-4, 1��
int main()
{
	int i, num1, num2, total = 0;

	scanf("%d %d", &num1, &num2);

	for (i = 0 ; i < (num2 - num1 + 1) ; i++)
	{
		total += (i + num1);

	}
	printf("���� : %d", total);
} */
/* 07-4, 2��
int main()
{
	int n, result = 1;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}

	printf("��� : %d", result);
} */
