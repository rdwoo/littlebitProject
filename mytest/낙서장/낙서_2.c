#include<stdio.h>
#include<string.h>
void basicptr() {

	int a = 30;
	int* b = &a;
	printf("%d\n", *b);

}

void not_arry() {

	int* b;
	b = (int*)malloc(4);
		//���⼭ b�� ����Ű�� ���� �ּҰ� ���������� �Ѿ��.�ֳĸ� �ٽ� �ּҸ� �������Ѱ��̴�.
		//malloc�� ������ �迭�̴�.

	for (int i = 0; i < 4; i++) {
		*b = i;
		printf("%d\n", *b);
	}free(b);
	
}

void use_array() {
	int a = 30;
	int* b = &a;
	printf("%d\n", *b);

	b = (int*)malloc(sizeof(int) * 4);// <-- (int*)malloc(sizeof(int) * 4) �� ���� int����� 4���� ����� ��
	//���⼭ b�� ����Ű�� ���� �ּҰ� ���������� �Ѿ��.�ֳĸ� �ٽ� �ּҸ� �������Ѱ��̴�.
	//malloc�� ������ �迭?�̴�.

	for (int i = 0; i < 4; i++) {
		b[i] = i;
		printf("%d\n", b[i]);
	}

	free(b);
}

void use_char() {
	char* s = "ace";
	int len = strlen(s);
	printf("%c\n", *s);
	for (int i = 0; i < len; i++) { //������ ���ڴ� �迭�� �̷���� �ִ�.
		printf("%c\n", s[i]);
	}
}

int main() {
	char* s;
	s = "apple";
	s = (char*)malloc(strlen("ace") + 1);
	strcpy(s, "ace");
	printf("%s", s);
	free(s);
}