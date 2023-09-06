#include <stdio.h>
#include <math.h>

int main(void){
	printf("floor(7.5) : %.2f\n",floor(7.5));
	printf("ceil(0.0) : %.2f\n",ceil(0.0));
	printf("ceil(-6.4) : %.2f\n",ceil(-6.4));
	printf("log10(100.0) : %.2f\n",log10(100.0));
	printf("ceil(floor(-5.5)) : %.2f\n",ceil(floor(-5.5)));	
	
	return 0;
	
}
