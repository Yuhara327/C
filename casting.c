#include<stdio.h>

int main (void) {
	int i1,i2,j1,j2;
	double d1,d2,e1,e2;
	j1 = 3;
	j2 = 3;
	d1 = 1.23;
	d2 = 1.23;
	i1 = d1;//代入
	i2 = (int)d2;//キャストして代入
	e1 = j1;//普通に
	e2 = (double)j2;//キャスト
	printf("intにdouble普通に:%d\n",i1);
	printf("intにdoubleキャスト:%d\n",i2);
	printf("doubleにint:%f\n",e1);
	printf("doubleにintキャスト:%f\n",e2);
}