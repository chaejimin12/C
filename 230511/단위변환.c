#include <stdlib.h>
#include <stdio.h>

int main (){
	double n, inch, yd, mile ;

	printf("단위 변환할 cm를 입력 하시오: ", n);
	scanf("%lf", &n);

	inch = n * 0.393701;
	yd = n * 0.010936;
	mile = n * 0.000006;

	printf("%lfcm는 %lfinch, %lfyd, %lfmile입니다.", n, inch, yd, mile);

	return 0;
}