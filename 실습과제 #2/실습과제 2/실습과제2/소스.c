#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 2-4
int main(void)
{
	int a, b, c, max;

	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &a, &b, &c);

	max = (a >= b && a >= c) ? a :
		(b >= a && b >= c) ? b : c;
	
	// max ���ϴ� ���(������ Ǯ��)
	//max = (x > y) ? x : y;
	//max = (max > z) ? max : z;

	printf("�ִ밪: %d", max);

	return 0;
}


// 2-3
int main(void)
{
	double m, v, E;

	printf("����(kg): ");
	scanf("%lf", &m);
	printf("�ӵ�(m/s): ");
	scanf("%lf", &v);

	E = 0.5 * m * v * v;
	printf("�������(J): %lf", E);

	return 0;
}



// 2-2
int main(void)
{
	double x, y, z, v;

	printf("������ ���� ���� ���̸� �ѹ��� �Է�: ");
	scanf("%lf %lf %lf", &x, &y, &z);

	v = x * y * z;
	printf("������ ���Ǵ� %f", v);

	return 0;
}



// 2-1
int main(void)
{
	int x, y;
	int tmp;

	x = 10;
	y = 20;

	printf("x=%d y=%d\n", x, y);

	tmp = x;
	x = y;
	y = tmp;

	printf("x=%d y=%d", x, y);

	return 0;
}

