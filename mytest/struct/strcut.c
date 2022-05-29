#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Person{
	char name[20];
	int age;
	char address[100];
};

typedef struct perSon {
	char name[20];
	char thi_stype[20];
	int age;
}ty_person;

int main() {
	//ref : https://inging9731.tistory.com/40
	//retry : https://www.youtube.com/watch?v=PFE9p9rmAnw

	struct Person p = { "김동우", 20,"강북구삼양동"}; //기본적인 구조체 할당
	//p.address[100] = "강북구 삼양동"; //-> 이렇게 사용할 수 없다.
	//p = {"김동우", 20,"강북구삼양동"}; //왜 이렇게하면 안되는가? 질문하기..
	printf("%d", p.age);
	strcpy(p.address, "강북구 삼양동");
	printf("%s", p.address);
	p.age = 20;
	//typedef로 선언한
	struct perSon pS; //
	pS = { "김동우", "perSon", 20 };
	ty_person tp; //
	return 0;
}