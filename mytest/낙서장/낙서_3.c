#include<stdio.h>
#include<string.h>
#include<malloc.h>

//�ڷᱸ���� ������� �ʰ� �Լ��θ� ����� ���ִ� ����� ��� ��..
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
	//a= false b = ture b = false->true(1+1�� true + true�ϱ�)
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
	struct student* std; //�̷��� �Ǹ� � �뵵�ΰ�?
};
typedef int element;
typedef struct ListNode {
	element data;
	struct ListNode* link; //ListNode Ÿ���� link������ ���� ListNode�� �����ؾ� ������ ���? ���� Ÿ���� �����ϰ� ��
}ListNode;
//
//void cn_ptr() {
//	struct student st;
//	st.age;
//	int a;
//	int* ptr;
//	ptr = &a;
//	printf("ptr : %d, &a : %d, &ptr : %d\n", ptr, &a, &ptr);
//	// ���� ptr�� �ּҸ� ������ �� �ִ� �κ��̱���..
//	*ptr = 10;
//	a = 30;
//	printf("a : %d, *ptr : %d\n", a, *ptr);
//	ptr = 100; //�ּҸ� �����ϴ� �κ� : ptr
//	printf("&ptr : %d, ptr : %d\n", &ptr, ptr);
//	a = 40;
//	printf("*ptr : %d\n", *ptr); //���⼭�� a�� �ּҰ� �������� ����� �ȵ�
//	ptr = &a;
//	printf("*ptr : %d\n", *ptr);
//}
//
//int test() {//�ڷᱸ��
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
	ListNode* head = NULL; //ĸ�������ǰ�?
	test(&head);
	printf("&head : %d\n", &head);
	//ListNode* head;
	//printf("Hellow");
	return 0;
}                                                                        
