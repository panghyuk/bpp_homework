#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 2-4
int main(void)
{
	int a, b, c, max;

	printf("3개의 정수를 입력하시오: ");
	scanf("%d %d %d", &a, &b, &c);

	max = (a >= b && a >= c) ? a :
		(b >= a && b >= c) ? b : c;
	
	// max 구하는 방법(교수님 풀이)
	//max = (x > y) ? x : y;
	//max = (max > z) ? max : z;

	printf("최대값: %d", max);

	return 0;
}


// 2-3
int main(void)
{
	double m, v, E;

	printf("질량(kg): ");
	scanf("%lf", &m);
	printf("속도(m/s): ");
	scanf("%lf", &v);

	E = 0.5 * m * v * v;
	printf("운동에너지(J): %lf", E);

	return 0;
}



// 2-2
int main(void)
{
	double x, y, z, v;

	printf("상자의 가로 세로 높이를 한번에 입력: ");
	scanf("%lf %lf %lf", &x, &y, &z);

	v = x * y * z;
	printf("상자의 부피는 %f", v);

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

