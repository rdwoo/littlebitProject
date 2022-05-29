#include<stdio.h>
#include<string.h>
#include<malloc.h>

//자료구조를 사용하지 않고 함수로만 사용할 수있는 방법을 고민 중..
//
int ch_ar() {
	char a[100];
	return 0;
}

void myprint(char print) {
	print = getchar();
}

void TF() {
	int a, b, c, d;
	a = 0, b = 1, c = 2; d = 3;
	//a= false b = ture b = false->true(1+1은 true + true니깐)
	if (d) {
		printf("true");
	}
	else {
		printf("false");
	}
}

struct student {
	int age;
	char name[10];
	int degree;
	struct student* std; //이렇게 되면 어떤 용도인가?
};
typedef int element;
typedef struct ListNode {
	element data;
	struct ListNode* link; //ListNode 타입의 link포인터 서언 ListNode를 선언해야 연결할 노드? 들의 타입을 동일하게 하
}ListNode;
//
//void cn_ptr() {
//	struct student st;
//	st.age;
//	int a;
//	int* ptr;
//	ptr = &a;
//	printf("ptr : %d, &a : %d, &ptr : %d\n", ptr, &a, &ptr);
//	// 정말 ptr은 주소만 저장할 수 있는 부분이구나..
//	*ptr = 10;
//	a = 30;
//	printf("a : %d, *ptr : %d\n", a, *ptr);
//	ptr = 100; //주소를 저장하는 부분 : ptr
//	printf("&ptr : %d, ptr : %d\n", &ptr, ptr);
//	a = 40;
//	printf("*ptr : %d\n", *ptr); //여기서는 a의 주소가 끊어져서 출력이 안됨
//	ptr = &a;
//	printf("*ptr : %d\n", *ptr);
//}
//
//int test() {//자료구조
//	ListNode list;
//	list.link = 10;
//	printf("%d", list.link);
//	printf("hi");
//	return 0;
//}

void test(ListNode* head) {
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
	head = p;
	printf("head:%d\n", head);
	printf("&p:%d\n", &p);
	printf("malloc : %d\n", (ListNode*)malloc(sizeof(ListNode)));
	
}

int main() {                                                                          
	int a = 10;
	ListNode* head = NULL; //캡슐같은건가?
	test(&head);
	printf("&head : %d\n", &head);
	//ListNode* head;
	//printf("Hellow");
	return 0;
}                                                                        
