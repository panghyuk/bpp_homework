#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1-4
int main(void)
{
	int x;

	printf("16���� ������ �Է��Ͻÿ�: ");
	scanf("%x", &x);

	printf("8�����δ� %#o�Դϴ�\n", x);
	printf("10�����δ� %d�Դϴ�\n", x);
	printf("16�����δ� %#x�Դϴ�\n", x);
	
	return 0;
}


// 1-3
int main(void)
{
	double x, result;

	printf("�Ǽ��� �Է��ϼ���: ");
	scanf("%lf", &x);

	result = 3 * (x*x) + 7 * x + 11;

	printf("���׽��� ���� %lf", result);

	return 0;
}


// 1-2
int main(void)
{
	double length, height, area;

	printf("�ﰢ���� �غ�: ");
	scanf("%lf", &length);

	printf("�ﰢ���� ����: ");
	scanf("%lf", &height);

	area = (length * height) / 2;

	printf("�ﰢ���� ���� : %lf", area);

	return 0;
}

// 1-1
int main(void)
{
	double x, y, z, sum, avg;

	printf("�Ǽ��� �Է��Ͻʽÿ�: ");
	scanf("%lf", &x);

	printf("�Ǽ��� �Է��Ͻʽÿ�: ");
	scanf("%lf", &y);

	printf("�Ǽ��� �Է��Ͻʽÿ�: ");
	scanf("%lf", &z);

	sum = x + y + z;
	avg = sum / 3.0;

	printf("���� %f�̰� ����� %f�Դϴ�.", sum, avg);

	return 0;
}