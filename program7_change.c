#include <stdio.h>

int main(){
        int sek=4554, h=0, m=0, s=0;
        
        h = sek / (60*60);
	printf("Hou ::: %d\n", h);
	
	m = (sek - (60*60)) / 60;
	printf("Min ::: %d\n", m);
	
	s = sek - ((60*60) + m*60);
        printf("Sek ::: %d\n", s);

	return 0;
}
