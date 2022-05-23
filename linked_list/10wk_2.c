#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>

typedef struct {
	char name[100];
}element;
typedef struct ListNode {
	element data;
	struct ListNode* link; //ListNode Ÿ���� link������ ���� ListNode�� �����ؾ� ������ ���? ���� Ÿ���� �����ϰ� ��
}ListNode;

//���� ó�� �Լ�
void error(char* message) {
	printf(stderr, "%s\n", message); //stderr : standard error
	exit(1);
}

ListNode* insert_first(ListNode* head, element value) {
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
	p->data = value;
	p->link = head;
	head = p;
	return head;
}
//
////��� pre �ڿ� ���ο� ��� ����
//ListNode* insert(ListNode* head, ListNode* pre, element value) {
//	ListNode* p = (ListNode*)malloc(sizeof(ListNode)); //�ϳ� �Ҵ�
//	p->data = value;
//	p->link = pre->link;
//	pre->link = p;
//	return head;
//}
//
//ListNode* delete_first(ListNode* head) {
//	ListNode* removed;
//	if (head == NULL) return NULL;
//	removed = head;
//	head = removed->link;
//	free(removed);
//	return head;
//}
//
//ListNode* delete(ListNode* head, ListNode* pre) {
//	ListNode* removed;
//	removed = pre->link;
//	pre->link = removed->link;
//
//}

void print_list(ListNode* head) {
	for (ListNode* p = head; p != NULL; p = p->link)
	{
		printf("%s->", p->data.name);
	}
	printf("NULL\n");
}

int main(void) { //���� for������ ������ ������ �ֳ�?
	ListNode* head = NULL;
	element data;
	strcpy(data.name, "APPLE");
	head = insert_first(head, data);
	print_list(head);

	strcpy(data.name, "KIWI");
	head = insert_first(head, data);
	print_list(head);

	strcpy(data.name, "BANANA");
	head = insert_first(head, data);
	print_list(head);

	return 0;
}