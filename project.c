#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

int HrlyWage, h;
float m, time, result;
//float* result;

//�����Ҵ籸���� ���� �ؾ��ϳ�?��� ����ǥ��.. �ֳĸ� �⺻������ 4����Ʈ �Ҵ�
//8����Ʈ�� �Ҵ��� �Ǵϱ� 1����Ʈ�� 8��Ʈ 2^(3 * 4)�̸� 16777216�� �ִ�

int hrlyWage() {
	//HrlyWage = malloc(sizeof(int));
	scanf("%d", &HrlyWage);
	//����ó�� ���߿�
	//if (HrlyWage != getchar("%d")) { //getchar�� ����ؼ� ���ڰ� �ƴ� �ٸ� ���ڰ� ������ Error meassge�� ����Ʈ�Ѵ�.
	//	printf("Error");
	//}
	return 0; //printf("%d", HrlyWage);
}

float Worktime(int h, float m, float* time) {
	printf("hour : ");
	scanf("%d", &h);
	printf("minute : ");
	scanf("%f", &m);
	m = (m / 60);
	*time = (float)h + m;
	printf("\n");
	return 0;
}

int mysum(float a, float b, float* result) {
	*result = a * b; //*result �ϳ��� ����
	printf("*Sum : %0.f\n*WeekTotal : %0.f\n*MonthTotal : %0.f", *result, *result * 2, (*result * 2) * 4);
	return (a * b) * 2;
}

int main()
{
	printf("Input your Hourly Wage : ");
	hrlyWage();
	printf("Input your Work Time\n");
	Worktime(h, m, &time);
	printf("*HourlyWage : %d\n*Time : %f\n", HrlyWage, time);
	mysum(HrlyWage, time, &result);
	printf("\nresult : %d, time : %d", result, time); //���� ������ ���� �ֳ��ϸ� ������ ���� ���� �ּҰ� �ʿ����� ��

	return 0; // printf("time : %.2f", time);
}