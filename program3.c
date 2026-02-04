#include <stdio.h>

int main(){
	char str[100];
	int x;

	printf("Give me your number and the name : ");

	// before strin we do not use &
	scanf("%d %s", &x, str);
	printf("So your number is %d :::::: %s\n", x, str);

	return 0;
}
