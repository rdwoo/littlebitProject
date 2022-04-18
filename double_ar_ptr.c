#include<stdio.h>
#include<stdlib.h>


//https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=pumpapapumpa&logNo=220250764050
//https://twinparadox.tistory.com/439

void arry() {
	int row, col;
	//����
	printf("input row&col value : ");
	scanf_s("%d", &row); // row : �� col : ��
	scanf_s("%d", &col);

	int** ptr = NULL;
	//�����Ҵ� ����
	ptr = (int**)malloc(sizeof(int*) * row); //�ϳ��� int��� 3���� �� �����Ҵ� 12byte//�� = 1byte �����// ������ ���ذ� ����..
	for (int i = 0; i < 3; i++) {
		ptr[i] = (int*)malloc(sizeof(int) * col);
	}//for������ �� �����Ҵ�

	printf("%d x %d input row&col value : ", row, col);
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			scanf_s("%d", &ptr[i][j]);
		}
	}

	//���
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
//#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����

		int row, col;

		scanf("%d %d", &row, &col);

		int** m = malloc(sizeof(int*) * row);   // ���� �����Ϳ� (int ������ ũ�� * row)��ŭ
												 // ���� �޸� �Ҵ�. �迭�� ����

		for (int i = 0; i < row; i++)            // ���� ũ�⸸ŭ �ݺ�
		{
			m[i] = malloc(sizeof(int) * col);    // (int�� ũ�� * col)��ŭ ���� �޸� �Ҵ�. �迭�� ����
		}

		for (int i = 0; i < row; i++)    // ���� ũ�⸸ŭ �ݺ�
		{
			for (int j = 0; j < col; j++)    // ���� ũ�⸸ŭ �ݺ�
			{
				m[i][j] = i + j;             // 2���� �迭�� �� ��ҿ� i + j ���� �Ҵ�
			}
		}

		for (int i = 0; i < row; i++)    // ���� ũ�⸸ŭ �ݺ�
		{
			for (int j = 0; j < col; j++)    // ���� ũ�⸸ŭ �ݺ�
			{
				printf("%d ", m[i][j]);      // 2���� �迭�� �ε����� �ݺ����� ���� i, j�� ����
			}
			printf("\n");                // ���� ��Ҹ� ����� �� ���� �ٷ� �Ѿ
		}

		for (int i = 0; i < row; i++)    // ���� ũ�⸸ŭ �ݺ�
		{
			free(m[i]);                  // 2���� �迭�� ���� ���� �޸� ����
		}

		free(m);    // 2���� �迭�� ���� ���� �޸� ����

		return 0;

}


int** matrix1 = NULL;
int m1_row, m1_col;
int i, j, k;

void input_num() {
	printf("ù ��° ���� ���� �Է� : ");
	scanf("%d", &m1_row); 
	if (10 < m1_row) { printf("retry input row value\n\n"); input_num(); }
	printf("ù ��° ���� ���� �Է� : ");
	scanf("%d", &m1_col);printf("\n");
	if (10 < m1_col) { printf("retry input col value\n\n"); input_num(); }
}
void input_rc() { //input r&c value
	for (i = 0; i < m1_row; i++) //scnaf -> row
	{
		printf("����� �� �Է� %dth : ", i);
		for (j = 0; j < m1_col; j++) { //scnaf -> col
			scanf("%d", &matrix1[i][j]);
			if (matrix1[i][j] == 0 || 10 < matrix1[i][j]) { printf("retry! input value\n\n"); input_rc(); }
			
		}
	}
}
//�޸� ũ�� : https://sf2020.tistory.com/107
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