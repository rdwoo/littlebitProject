#include<stdio.h>
#include<string.h>
#include<malloc.h>

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

int test() {//�ڷᱸ��
	ListNode list;
	list.link = 10;
	printf("%d", list.link);
	printf("hi");
	return 0;
}

int main() {
	struct student st;
	st.age;
	int a;
	int* ptr;
	ptr = &a;
	printf("ptr : %d, &a : %d, &ptr : %d\n", ptr, &a, &ptr);
	// ���� ptr�� �ּҸ� ������ �� �ִ� �κ��̱���..
	*ptr = 10;
	a = 30;
	printf("a : %d, *ptr : %d\n", a, *ptr);
	ptr = 100; //�ּҸ� �����ϴ� �κ� : ptr
	//���⼭ ptr�� ���ʿ� �����ͷ� ������ �Ǿ��ִ� ���̴�. �׷��� 100�� ������ 100�̶�� ������ �ּҸ� ����Ű�� ���̴�.
	//�� ���⿡�� ���͵� ���� �ƹ��͵� ����� �� ����.
	printf("&ptr : %d, ptr : %d\n", &ptr, ptr);
	a = 40;
	int* pptr;
	pptr = &a;
	printf("pptr : %d\n", *pptr); // 40
	//ptr�� ���� ������ �׷��� �ٽ� pprt�� prt�� �������� ��
	ptr = pptr; printf("ptr : %d, pptr : %d, &a : %d, *ptr : %d\n", ptr, pptr, &a, *ptr); //a�� ���� ���� ���̴�..
	//ptr = a;//���⼭�� a�� �ּҿ� �ƹ��͵� ��� ����� �ȵ�=>Invalid read of size 4
	//�� ������ ������ ������ �������� ������ ����
	printf("*ptr : %d\n", *ptr); 
	ptr = &a;
	printf("*ptr : %d\n", *ptr);

	int f[10];
	for (int b = 0; b < 10; b++) {
		f[b] = b;
		printf("%d", f[b]);
	}
	return 0;
}