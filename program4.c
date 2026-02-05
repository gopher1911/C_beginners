#include <stdio.h>

int main(){
	float avr=0, sum=0;
	char tab[] = {4, 2, 3};

	sum = tab[0] + tab[1] + tab[2];
	avr = sum/3;
	printf("Average : %.2f\n", avr);

	return 0;
}
