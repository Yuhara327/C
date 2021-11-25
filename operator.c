#include <stdio.h>

int main (void) {
	int a;//変数の宣言
	int b = 3;//宣言と代入を同時に
	int add,sub; //複数の宣言
	double avg;//double型
	a = 6; //代入
	add = a + b;
	sub = a - b;
	avg = (a + b) / 2.0;
	printf("%d + %d = %d\n",a,b,add);
	printf("%d - %d = %d\n",a,b,sub);
	printf("%dと%dの平均は%f\n",a,b,avg);
}