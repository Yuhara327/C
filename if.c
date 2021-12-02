#include <stdio.h>

int main(void) {
	int dice;
	printf("1から6の数値を入力してください。:");
	scanf("%d", &dice);
	if (1 <= dice && dice <= 6){//&&:かつ
		if(dice == 2 || dice == 4 || dice == 6) {//||:OR
			printf("丁\n");
		} else {
			printf("半\n");
		}
	} else {
		printf("範囲外の数値");
	}
}