#include<stdio.h>

int main() {
	int i = 10;
	while (i > 0) { //영원한 True는 무한 반복을 낳는다.
		printf("%d", i);
		i++;
	}
	return 0;
}