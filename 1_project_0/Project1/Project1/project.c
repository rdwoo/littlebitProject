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
	printf("Input your Hourly Wage : ");
	//HrlyWage = malloc(sizeof(int));
	scanf("%d", &HrlyWage);
	//����ó�� ���߿�
	//if (HrlyWage != getchar("%d")) { //getchar�� ����ؼ� ���ڰ� �ƴ� �ٸ� ���ڰ� ������ Error meassge�� ����Ʈ�Ѵ�.
	//	printf("Error");
	//}
	return 0; //printf("%d", HrlyWage);
}

float Worktime(int h, float m, float* time) {
	printf("Input your Work Time\n");
	printf("\t\thour : ");
	scanf("%d", &h);
	printf("\t\tminute : ");
	scanf("%f", &m);
	m = (m / 60);
	*time = (float)h + m;
	printf("\n");
	return 0;
}

int mysum(float a, float b, float* result) {
	*result = a * b; //*result �ϳ��� ����
	printf("*DailyTotal : %0.f ��\n*WeekTotal : %0.f ��\n*MonthTotal : %0.f ��\n", *result, *result * 2, (*result * 2) * 4);
	return (a * b) * 2;
}

int main()
{
			
	hrlyWage();
			
	Worktime(h, m, &time); 
			printf("*HourlyWage : %d ��\n*Time : %.2f\n", HrlyWage, time);
			
	mysum(HrlyWage, time, &result);
			printf("\n===============================result : %.2f, time : %.2f\n", result, time);
			 //���� ������ ���� �ֳ��ϸ� ������ ���� ���� �ּҰ� �ʿ����� ��

	return 0; // printf("time : %.2f", time);
}