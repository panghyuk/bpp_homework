#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 4-4
int main(void) {
	int a, b, c;

	printf("3개의 변의 길이를 입력하세요.\n");
	scanf("%d %d %d", &a, &b, &c);

	if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b) {
		printf("입력하신 세 변은 직각삼각형을 이룹니다.");
	}
	else {
		printf("입력하신 세 변으로는 직각삼각형을 이룰 수 없습니다.");
	}

	return 0;
}

// 4-3
int main(void) {
	int height, age;

	printf("키를 입력하시오(cm): ");
	scanf("%d", &height);

	printf("나이를 입력하시오: ");
	scanf("%d", &age);

	if (height >= 140 && age >= 10) {
		printf("타도 좋습니다");
	}

	else {
		printf("죄송합니다.");
	}

	return 0;
}

// 4-2
int main(void) {
	int x, y, z;

	printf("3개의 정수를 입력하시오: ");
	scanf("%d %d %d", &x, &y, &z);

	if (x < y) {
		if (x < z) {
			printf("제일 작은 정수는 %d입니다.", x);
		}
		else
			printf("제일 작은 정수는 %d입니다.", z);
	}
	else {
		if (y < z) {
			printf("제일 작은 정수는 %d입니다.", y);
		}
		else
			printf("제일 작은 정수는 %d입니다.", z);
	}

	return 0;
}
 

// 4-1
int main(void) {
	int num;
	
	printf("월 번호를 입력하시오: ");
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
		printf("잘못입력하셨습니다.\n");
		break;
	}
	return 0;
}
