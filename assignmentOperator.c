#include<stdio.h>

int main (void) {
	int a,b,c,d;
	a = 2;
	b = 2;
	c = 2;
	d = 2;
	//代入演算子
	a += 1;
	b -= 1;
	c *= 2;
	d /= 2;
	printf("a+1=%d b-1=%d c*2=%d d/2=%d",a,b,c,d);
}