#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// 3-3
int main(void) {
	int num1, num2;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num1);
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num2);

	if (num1 % num2 == 0)
	{
		printf("����� �½��ϴ�.");
	}
	else
	{
		printf("����� �ƴմϴ�.");
	}

	return 0;
}


// 3-2
int main(void) {
	int x, y;
	printf("x ��ǥ�� �Է��ϼ���: ");
	scanf("%d", &x);
	printf("y��ǥ�� �Է��ϼ���: ");
	scanf("%d", &y);

	(x > 0) ? ((y > 0) ? printf("1��и�") : printf("4��и�")) : ((y > 0) ? printf("2��и�") : printf("3��и�"));

	return 0;
}



// 3-1
int main(void) {
	int num, ten, one;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &num);

	ten = num / 10;
	one = num % 10;

	printf("���� �ڸ�: %d \n", ten);
	printf("���� �ڸ�: %d", one);

	return 0;
}
