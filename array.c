#include<stdio.h>
int main() {
	//배열선언
	int s[5] = {100, 100, 100, 100, 100};
	
	//요소 전체 출력
	for (int i = 0; i < 5; i++)
		printf("%d\n", s[i]);

	//전체 합계
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += s[i];
	}
	printf("전체합계: %d\n", sum);

	//평균
	double avg;
	avg = (double)sum / 5;
}