#include<stdio.h>
#define SIZE 5

int main(void) {
	int score[SIZE] = { 55, 85, 100, 99, 86 };
	int i, max;
	for (i = 0; i < SIZE; i++) {
		printf("%d", score[i]);
	}
	printf("\n");
	max = score[0];
	for (i = 0; i < SIZE; i++) {
		if (score[i] > max)
			max = score[i];
	}
	printf("�ִ밪�� %d�Դϴ�.\n", max);
	return 0;
}