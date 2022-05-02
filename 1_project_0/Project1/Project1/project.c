#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

int HrlyWage, h;
float m, time, result;
//float* result;

//동적할당구현을 굳이 해야하나?라는 물음표가.. 왜냐면 기본적으로 4바이트 할당
//8바이트로 할당이 되니깐 1바이트에 8비트 2^(3 * 4)이면 16777216이 최대

int hrlyWage() {
	printf("Input your Hourly Wage : ");
	//HrlyWage = malloc(sizeof(int));
	scanf("%d", &HrlyWage);
	//예외처리 나중에
	//if (HrlyWage != getchar("%d")) { //getchar를 사용해서 숫자가 아닌 다른 문자가 찍히면 Error meassge를 프린트한다.
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
	*result = a * b; //*result 하나의 형식
	printf("*DailyTotal : %0.f 원\n*WeekTotal : %0.f 원\n*MonthTotal : %0.f 원\n", *result, *result * 2, (*result * 2) * 4);
	return (a * b) * 2;
}

int main()
{
			
	hrlyWage();
			
	Worktime(h, m, &time); 
			printf("*HourlyWage : %d 원\n*Time : %.2f\n", HrlyWage, time);
			
	mysum(HrlyWage, time, &result);
			printf("\n===============================result : %.2f, time : %.2f\n", result, time);
			 //값이 나오지 않음 왜냐하면 포인터 값을 담을 주소가 필요했을 뿐

	return 0; // printf("time : %.2f", time);
}