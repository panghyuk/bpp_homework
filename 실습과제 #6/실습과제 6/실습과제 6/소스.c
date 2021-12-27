#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 6-5
int fib(int n);

int main(void) {
	int num, result;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	printf("피보나치 수열의 %d번째 항은 %d입니다.", num, fib(num));

	return 0;
}

int fib(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	return fib(n - 2) + fib(n - 1);
}

/*



// 6-4
int sum(int n);

int main(void) {
	int num,result;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	result = sum(num);

	printf("1부터 %d까지의 합 = %d\n", num, result);

	return 0;
}

int sum(int n) {
	if (n != 0) {
		return n + sum(n - 1);
	}
	else {
		return n;
	}
}


// 6-3
void print_value(int n) {
	for (int i = 1;i <= n;i++)
		printf("*");
	printf("\n");
}

int main(void) {
	int n;

	while (1) {
		printf("값을 입력하시오(종료는 음수): ");
		scanf("%d", &n);
		if (n < 0) {
			break;
		}
		else {
			print_value(n);
		}
	}
	return 0;
}


// 6-2
#include <stdlib.h>
#include <time.h>

int b_rand();

int main(void) {
	int answer, coin;
	char res;

	while (1) {
		printf("앞면 또는 뒷면(1 또는 0): ");
		scanf("%d", &answer);
		coin = b_rand();

		if (coin == answer) {
			printf("맞았습니다.\n");
		}
		else {
			printf("틀렸습니다.\n");
		}

		printf("계속하시겠습니까?(y 또는 n): ");
		getchar();
		scanf("%c", &res);
		//scanf(" %c", &res); //빈 여백을 하나 두면 버퍼에 있는 엔터 무시

		if (res == 'n') {
			break;
		}
		else if (res == 'y') {
			continue;
		}
	}
	return 0;
}

int b_rand() {
	return rand() % 2;
}


// 6-1
#define pi 3.141592

// 원의 반지름 입력 + r 반환
double get_radius() {
	double r;
	printf("원의 반지름을 입력하시오:");
	scanf("%lf", &r);
	return r;
}

// 원의 면적 반환
double calc_area(double r) {
	return pi * r * r;
}

int main(void) {
	double r;
	r = get_radius();
	printf("원의 면적은 %f입니다.", calc_area(r));
	return 0;
}

*/

