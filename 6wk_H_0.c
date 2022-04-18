#include<stdio.h>
#include<conio.h>

int row, col;

void Matrix_program() {

	printf("Type the number of rows : "); scanf("%d", &row);
	printf("Type the number of colums : "); scanf("%d", &col);
	printf("Type the 3 elements : "); //scanf()여러개 받기
}

void start() {
	int n;
	printf("Select one of following items:\n  1.Matrix program\n  2.Exit\nWhich do you want to select a number?(1-2) : ");
	//scanf("%d", &n);
	n = getche();
	printf("\n");

	if (n == '1') {//Matrix 프로그램이 실행
		printf("\n");
		printf("Matrix program\n\n");
		Matrix_program();
	}
	else if (n == '2') {//프로그램 종료
		exit(0);
	}
	else { printf("\n\n");  start(); } //이외의 값이 전달 될 경우 재귀함수 사용

}

void main() {

	start();
}