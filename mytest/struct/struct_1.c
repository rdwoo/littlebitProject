#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};
//https://velog.io/@ek3434/C%EC%96%B8%EC%96%B4-%EC%9D%B4%EB%A1%A0-%EC%A0%95%EB%A6%AC-02
int main() {
	
	struct Person p;
	p = { "홍길동", 22, "강남구" };
	return 0;
}

