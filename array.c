#include<stdio.h>
int main() {
	//�迭����
	int s[5] = {100, 100, 100, 100, 100};
	
	//��� ��ü ���
	for (int i = 0; i < 5; i++)
		printf("%d\n", s[i]);

	//��ü �հ�
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += s[i];
	}
	printf("��ü�հ�: %d\n", sum);

	//���
	double avg;
	avg = (double)sum / 5;
}