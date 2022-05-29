#include<stdio.h>
#include<string.h>
#include<malloc.h>

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

int test() {//자료구조
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
	// 정말 ptr은 주소만 저장할 수 있는 부분이구나..
	*ptr = 10;
	a = 30;
	printf("a : %d, *ptr : %d\n", a, *ptr);
	ptr = 100; //주소를 저장하는 부분 : ptr
	//여기서 ptr은 애초에 포인터로 선언이 되어있는 것이다. 그런데 100을 넣으면 100이라는 엉뚱한 주소를 가리키는 것이다.
	//즉 여기에는 무것도 없고 아무것도 출력할 수 없다.
	printf("&ptr : %d, ptr : %d\n", &ptr, ptr);
	a = 40;
	int* pptr;
	pptr = &a;
	printf("pptr : %d\n", *pptr); // 40
	//ptr은 값이 쓰레기 그래서 다시 pprt로 prt을 연결해줄 것
	ptr = pptr; printf("ptr : %d, pptr : %d, &a : %d, *ptr : %d\n", ptr, pptr, &a, *ptr); //a를 끌어 들일 것이다..
	//ptr = a;//여기서는 a의 주소에 아무것도 없어서 출력이 안됨=>Invalid read of size 4
	//즉 포인터 변수는 포인터 변수끼리 대입이 가능
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