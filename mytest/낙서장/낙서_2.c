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
		//여기서 b가 가르키는 곳의 주소가 힙영역으로 넘어간다.왜냐면 다시 주소를 재정의한것이다.
		//malloc은 무조건 배열이다.

	for (int i = 0; i < 4; i++) {
		*b = i;
		printf("%d\n", *b);
	}free(b);
	
}

void use_array() {
	int a = 30;
	int* b = &a;
	printf("%d\n", *b);

	b = (int*)malloc(sizeof(int) * 4);// <-- (int*)malloc(sizeof(int) * 4) 로 변경 int사이즈를 4개를 만드는 것
	//여기서 b가 가르키는 곳의 주소가 힙영역으로 넘어간다.왜냐면 다시 주소를 재정의한것이다.
	//malloc은 무조건 배열?이다.

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
	for (int i = 0; i < len; i++) { //포인터 문자는 배열로 이루어져 있다.
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