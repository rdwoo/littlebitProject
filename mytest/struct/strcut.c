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

	struct Person p = { "�赿��", 20,"���ϱ���絿"}; //�⺻���� ����ü �Ҵ�
	//p.address[100] = "���ϱ� ��絿"; //-> �̷��� ����� �� ����.
	//p = {"�赿��", 20,"���ϱ���絿"}; //�� �̷����ϸ� �ȵǴ°�? �����ϱ�..
	printf("%d", p.age);
	strcpy(p.address, "���ϱ� ��絿");
	printf("%s", p.address);
	p.age = 20;
	//typedef�� ������
	struct perSon pS; //
	pS = { "�赿��", "perSon", 20 };
	ty_person tp; //
	return 0;
}