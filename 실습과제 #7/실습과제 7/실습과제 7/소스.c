#include <stdio.h>

// 7-5
#define N_DATA 4

void merge(int* A, int* B, int* C, int size)
{
	int i, a, b, c;

	for (a = 0, b = 0, c = 0; a < size && b < size;) {
		if (A[a] <= B[b])
			C[c++] = A[a++];
		else
			C[c++] = B[b++];
	}

	for (i = a; i < size; i++)
		C[c++] = A[i];

	for (i = b; i < size; i++)
		C[c++] = B[i];
}

void array_print(char* name, int* a, int size)
{
	printf("%s[] = ", name);
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main(void)
{
	int i;

	int A[] = { 2, 5, 7, 8 };
	int B[] = { 1, 3, 4, 6 };
	int C[8];

	array_print("A", A, N_DATA);
	array_print("B", B, N_DATA);

	merge(A, B, C, 4);

	array_print("C", C, 2 * N_DATA);

	printf("\n");
	return 0;
}


/*
 



// 7-4 구조 확인하기!!!
void get_sum_diff(int x, int y, int* p_sum, int* p_diff) {
	*p_sum = x + y;
	*p_diff = x - y;
}

int main(void) {
	int sum = 0, diff = 0;

	get_sum_diff(100, 200, &sum, &diff); // 두 개 값 반환
	printf("원소들의 합 = %d\n", sum);
	printf("원소들의 차 = %d", diff);

	return 0;
}


// 7-3
#define N_DATA 10

void array_copy(int* a, int* b, int size) {
	for (int i = 0;i < size;i++) {
		b[i] = a[i];
	}
}

void array_print(int a[], int size) {

	for (int i = 0;i < size;i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main(void) {
	int A[N_DATA] = { 1,2,3 };
	int B[N_DATA] = { 0 };

	array_print(A, N_DATA);
	array_copy(A, B, N_DATA);
	array_print(B, N_DATA);

	return 0;
}
 

 // 7-2
#define N_DATA 10

int array_equal(int a[], int b[], int size) {
	for (int i = 0;i < size;i++) {
		if (b[i] != a[i]) {
			return 0;
		}
		return 1;
	}

}

void array_print(int a[], int size) {

	for (int i = 0;i < size;i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main(void) {
	int result;
	int A[N_DATA] = { 1,2,3 };
	int B[N_DATA] = { 0 };

	array_print(A, N_DATA);
	array_print(B, N_DATA);

	result = array_equal(A, B, N_DATA);
	if (result == 1) {
		printf("배열 원소가 일치합니다.\n");
	}
	else {
		printf("배열 원소가 일치하지 않습니다.\n");
	}

	return 0;
}


// 7-1
#include <time.h>

int main(void) {
	int list[10];
	int max, min;

	srand(time(NULL));

	for (int i = 0;i < 10;i++) {
		list[i] = rand();
	}

	max = min = list[0];

	for (int j = 0;j < 10;j++) {
		if (list[j] < min) {
			min = list[j];
		}
	}

	for (int k = 0; k < 10;k++) {
		if (list[k] > max) {
			max = list[k];
		}
	}

	printf("최댓값은 %d\n", max);
	printf("최솟값은 %d\n", min);

	return 0;
}

*/

