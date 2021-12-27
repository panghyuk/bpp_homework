#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>

// 3번
int main(void) {
	int i, n, sum;
	n = 0;
	sum = 0;

	for (i = 1; sum <= 10000; i++, n++) {
		if ((sum + i) > 10000) {
			break;
		}
		sum += i;
	}
	printf("1부터 %d까지의 합이 %d입니다.", n, sum);
	
	return 0;
}



//2번
int main(void) {
	int n, div, cnt;

	for (n = 2; n <= 100; n++)
	{
		cnt = 0;
		for (div = 1; div <= n; div++)
		{
			if (n % div == 0)
				cnt++;
		}
		if (cnt == 2)
			printf("%d ", n);
	}
	return 0;
}

// 1번
int main(void)
{
	int y, x;

	for (y = 0; y < 7; y++) {
		for (x = 0; x < (6 - y); x++)
			printf(" ");
		for (x = 6 - y; x < 7; x++)
			printf("*");
		printf("\n");
	}

	return 0;
}
