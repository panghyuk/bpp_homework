#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 4-4
int main(void) {
	int a, b, c;

	printf("3���� ���� ���̸� �Է��ϼ���.\n");
	scanf("%d %d %d", &a, &b, &c);

	if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b) {
		printf("�Է��Ͻ� �� ���� �����ﰢ���� �̷�ϴ�.");
	}
	else {
		printf("�Է��Ͻ� �� �����δ� �����ﰢ���� �̷� �� �����ϴ�.");
	}

	return 0;
}

// 4-3
int main(void) {
	int height, age;

	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf("%d", &height);

	printf("���̸� �Է��Ͻÿ�: ");
	scanf("%d", &age);

	if (height >= 140 && age >= 10) {
		printf("Ÿ�� �����ϴ�");
	}

	else {
		printf("�˼��մϴ�.");
	}

	return 0;
}

// 4-2
int main(void) {
	int x, y, z;

	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &x, &y, &z);

	if (x < y) {
		if (x < z) {
			printf("���� ���� ������ %d�Դϴ�.", x);
		}
		else
			printf("���� ���� ������ %d�Դϴ�.", z);
	}
	else {
		if (y < z) {
			printf("���� ���� ������ %d�Դϴ�.", y);
		}
		else
			printf("���� ���� ������ %d�Դϴ�.", z);
	}

	return 0;
}
 

// 4-1
int main(void) {
	int num;
	
	printf("�� ��ȣ�� �Է��Ͻÿ�: ");
	scanf("%d", &num);
	switch (num) {
	case 1:
		printf("Jan\n");
		break;
	case 2:
		printf("Feb\n");
		break;
	case 3:
		printf("Mar\n");
		break;
	case 4:
		printf("Apr\n");
		break;
	case 5:
		printf("May\n");
		break;
	case 6:
		printf("Jun\n");
		break;
	case 7:
		printf("Jul\n");
		break;
	case 8:
		printf("Aug\n");
		break;
	case 9:
		printf("Sep\n");
		break;
	case 10:
		printf("Oct\n");
		break;
	case 11:
		printf("Nov\n");
		break;
	case 12:
		printf("Dec\n");
		break;
	default:
		printf("�߸��Է��ϼ̽��ϴ�.\n");
		break;
	}
	return 0;
}
