#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numerator, denominator;
	
	printf("enter numerator:");
	scanf("%d", &numerator);
	
	printf("enter denominator:");
	scanf("%d", &denominator);
	
	printf("The result is %f\n", (float)denominator/numerator);
	
	return 0;
}
