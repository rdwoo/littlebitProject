#include<stdio.h>
#include<conio.h>

int row, col;

void Matrix_program() {

	printf("Type the number of rows : "); scanf("%d", &row);
	printf("Type the number of colums : "); scanf("%d", &col);
	printf("Type the 3 elements : "); //scanf()������ �ޱ�
}

void start() {
	int n;
	printf("Select one of following items:\n  1.Matrix program\n  2.Exit\nWhich do you want to select a number?(1-2) : ");
	//scanf("%d", &n);
	n = getche();
	printf("\n");

	if (n == '1') {//Matrix ���α׷��� ����
		printf("\n");
		printf("Matrix program\n\n");
		Matrix_program();
	}
	else if (n == '2') {//���α׷� ����
		exit(0);
	}
	else { printf("\n\n");  start(); } //�̿��� ���� ���� �� ��� ����Լ� ���

}

void main() {

	start();
}