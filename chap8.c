#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 08-1, 1��
int main()
{
	int num = 1;

	while (num < 100)
	{
		if ((num % 7 == 0) || (num % 9 == 0))
			printf("%3d", num);

		num++;
	}

} */
/* 08-1, 2��
int main()
{
	int num1, num2, diff;

	scanf("%d %d", &num1, &num2);

	if (num1 < num2)
	{
		diff = num2 - num1;
		printf("%d - %d = %d", num2, num1, diff);
	}
	
	else
	{
		diff = num1 - num2;
		printf("%d - %d = %d", num1, num2, diff);
	}
} */
/* 08-1, 3��
int main()
{
	int korean, english, math;
	float avg;

	printf("������ �Է��ϼ���. ");
	scanf("%d %d %d", &korean, &english, &math);

	avg = (korean + english + math) / 3.0;
	printf("��� : %.2f\n", avg);

	if (avg >= 90)
		printf("���� : A");

	else if (avg >= 80)
		printf("���� : B");

	else if (avg >= 70)
		printf("���� : C");

	else if (avg >= 50)
		printf("���� : D");

	else
		printf("���� : F");

} */

/* 08-2, 1��
int main()
{
	int i, j, result;

	for (i = 1; i <= 9; i++)
	{
		if (i % 2 == 1)
			continue;

		for (j = 1; j <= i; j++)
		{
			if (i < j)
				break;

			result = i * j;
			printf("%d * %d = %2d\n", i, j, result);
		}
		
		printf("\n");

	}

} */
/* 08-2, 2��
int main()
{
	int a, z;

	for (a = 0; a <= 9; a++)
	{
		for (z = 0; z <= 9 ; z++)
		{
			if ((a * 10 + z) + z * 10 + a == 99)
				printf("%d%d + %d%d = 99\n", a, z, z, a);
		}
	}

} */

/* 08-3
int main()
{
	int num, div;

	scanf("%d", &num);

	div = num / 10;

	switch(div)
	{
		case 0:
			printf("0�̻� 10�̸�");
			break;
		case 1:
			printf("10�̻� 20�̸�");
			break;
		case 2:
			printf("20�̻� 30�̸�");
			break;
		default:
			printf("30�̻�");

	}


} */