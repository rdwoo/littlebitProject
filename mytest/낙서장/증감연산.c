#include<stdio.h>

int main() {
	int x = 1, y = 2, z = 3, w = 4;
	y = x++;
	z += x;
	w = (w > 3) ? w - 3 : 3 - w;
	printf("w : %d\nx : %d\ny : %d\nz : %d", w, x, y, z);
	return 0;
}