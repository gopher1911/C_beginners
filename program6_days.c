#include <stdio.h>

int main(){
	int days=892, weeks=0, months=0, years=0;

	years = days / (30*12);
	printf("Years : %d\n", years);
	weeks = days / 7;
	printf("Weeks : %d\n", weeks);
	months = days / 30;
	printf("Months : %d\n", months);

	return 0;
}
