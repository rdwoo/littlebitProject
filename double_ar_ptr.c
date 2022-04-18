#include<stdio.h>
#include<stdlib.h>


//https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=pumpapapumpa&logNo=220250764050
//https://twinparadox.tistory.com/439

void arry() {
	int row, col;
	//행방식
	printf("input row&col value : ");
	scanf_s("%d", &row); // row : 행 col : 열
	scanf_s("%d", &col);

	int** ptr = NULL;
	//동적할당 선언
	ptr = (int**)malloc(sizeof(int*) * row); //하나의 int행당 3개의 행 동적할당 12byte//□ = 1byte ■□□□// 말록의 이해가 부족..
	for (int i = 0; i < 3; i++) {
		ptr[i] = (int*)malloc(sizeof(int) * col);
	}//for문으로 열 동적할당

	printf("%d x %d input row&col value : ", row, col);
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			scanf_s("%d", &ptr[i][j]);
		}
	}

	//출력
	for (int i = 0; i < row; i++) {

		for (int j = 0; j < col; j++) {
			printf("%d", ptr[i][j]);
		}
	}


	for (int i = 0; i < 5; i++)
		free(ptr[i]);
	free(ptr);
	//return 0;
}

void chapter5() {

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

		int row, col;

		scanf("%d %d", &row, &col);

		int** m = malloc(sizeof(int*) * row);   // 이중 포인터에 (int 포인터 크기 * row)만큼
												 // 동적 메모리 할당. 배열의 세로

		for (int i = 0; i < row; i++)            // 세로 크기만큼 반복
		{
			m[i] = malloc(sizeof(int) * col);    // (int의 크기 * col)만큼 동적 메모리 할당. 배열의 가로
		}

		for (int i = 0; i < row; i++)    // 세로 크기만큼 반복
		{
			for (int j = 0; j < col; j++)    // 가로 크기만큼 반복
			{
				m[i][j] = i + j;             // 2차원 배열의 각 요소에 i + j 값을 할당
			}
		}

		for (int i = 0; i < row; i++)    // 세로 크기만큼 반복
		{
			for (int j = 0; j < col; j++)    // 가로 크기만큼 반복
			{
				printf("%d ", m[i][j]);      // 2차원 배열의 인덱스에 반복문의 변수 i, j를 지정
			}
			printf("\n");                // 가로 요소를 출력한 뒤 다음 줄로 넘어감
		}

		for (int i = 0; i < row; i++)    // 세로 크기만큼 반복
		{
			free(m[i]);                  // 2차원 배열의 가로 공간 메모리 해제
		}

		free(m);    // 2차원 배열의 세로 공간 메모리 해제

		return 0;

}


int** matrix1 = NULL;
int m1_row, m1_col;
int i, j, k;

void input_num() {
	printf("첫 번째 행의 개수 입력 : ");
	scanf("%d", &m1_row); 
	if (10 < m1_row) { printf("retry input row value\n\n"); input_num(); }
	printf("첫 번째 렬의 개수 입력 : ");
	scanf("%d", &m1_col);printf("\n");
	if (10 < m1_col) { printf("retry input col value\n\n"); input_num(); }
}
void input_rc() { //input r&c value
	for (i = 0; i < m1_row; i++) //scnaf -> row
	{
		printf("행렬의 값 입력 %dth : ", i);
		for (j = 0; j < m1_col; j++) { //scnaf -> col
			scanf("%d", &matrix1[i][j]);
			if (matrix1[i][j] == 0 || 10 < matrix1[i][j]) { printf("retry! input value\n\n"); input_rc(); }
			
		}
	}
}
//메모리 크기 : https://sf2020.tistory.com/107
void main()
{
	input_num();
	matrix1 = (int**)malloc(sizeof(int*) * m1_row);
	for (i = 0; i < m1_row; i++) {
		matrix1[i] = (int*)malloc(sizeof(int) * m1_col);
	}
	printf("---------------------- array number %d x %d\n", m1_row, m1_col);
	
	
	input_rc();

	for (i = 0; i < m1_row; i++) {
		
		for (j = 0; j < m1_col; j++) {
			printf("%2d", matrix1[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < m1_row; i++) {
		free(matrix1[i]);
	}
	free(matrix1);
	return 0;	
}