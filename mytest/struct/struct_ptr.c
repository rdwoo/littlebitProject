#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct data {
	int num1;
	int num2;
};
//https://www.youtube.com/watch?v=tY06OknYvW8
Bs_ptr() {
	struct data d[3] = { {10, 20}, {30, 40}, {50, 60} };
	struct data* ptr;

	ptr = d; //배열이기 떄문에 &를 사용하지 않아도 된다.

	printf("%d %d\n", (ptr + 1)->num1, (ptr + 1)->num2);//30, 40
	printf("%d %d\n", (ptr + 2)->num1, (ptr + 2)->num2);//50, 60
}

int main() {
	void* ptr = malloc(sizeof(struct data) * 3);
	struct data d[3];

	((struct data*)ptr)->num1 = 10; //형변환
	((struct data*)ptr)->num2 = 20; //형변환

	((struct data*)ptr + 1)->num1 = 30; //형변환
	((struct data*)ptr + 1)->num2 = 40; //형변환

	((struct data*)ptr + 2)->num1 = 50; //형변환
	((struct data*)ptr + 2)->num2 = 60; //형변환

	memcpy(d, ptr, sizeof(struct data) * 3);//메모리 복사

	printf("%d %d\n", d[1].num1, d[1].num2);//30,40
	printf("%d %d\n", ((struct data*)ptr + 1)->num1, ((struct data*)ptr + 1)->num2);//30,40
	free(ptr);
	return 0;
}