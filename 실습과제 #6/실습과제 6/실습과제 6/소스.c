#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 6-5
int fib(int n);

int main(void) {
	int num, result;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	printf("�Ǻ���ġ ������ %d��° ���� %d�Դϴ�.", num, fib(num));

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

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	result = sum(num);

	printf("1���� %d������ �� = %d\n", num, result);

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
		printf("���� �Է��Ͻÿ�(����� ����): ");
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
		printf("�ո� �Ǵ� �޸�(1 �Ǵ� 0): ");
		scanf("%d", &answer);
		coin = b_rand();

		if (coin == answer) {
			printf("�¾ҽ��ϴ�.\n");
		}
		else {
			printf("Ʋ�Ƚ��ϴ�.\n");
		}

		printf("����Ͻðڽ��ϱ�?(y �Ǵ� n): ");
		getchar();
		scanf("%c", &res);
		//scanf(" %c", &res); //�� ������ �ϳ� �θ� ���ۿ� �ִ� ���� ����

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

// ���� ������ �Է� + r ��ȯ
double get_radius() {
	double r;
	printf("���� �������� �Է��Ͻÿ�:");
	scanf("%lf", &r);
	return r;
}

// ���� ���� ��ȯ
double calc_area(double r) {
	return pi * r * r;
}

int main(void) {
	double r;
	r = get_radius();
	printf("���� ������ %f�Դϴ�.", calc_area(r));
	return 0;
}

*/

