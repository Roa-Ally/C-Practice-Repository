
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *arvg[]){
	float var1;
	float var2;
	char operator;
	float answ;

	printf("Please enter a number followed by an operator followed by another number: \n\n");
	fflush(stdout);
	scanf("%f %c %f", &var1, &operator, &var2);

	switch(operator){
		case '+': answ = var1 + var2;
			  break;
		case '-': answ = var1 - var2;
			  break;
		case '*': answ = var1 * var2;
			  break;
		case '/': answ = var1 / var2;
			  break;
		default: goto fail;
	}
	printf("%.9g%c%.9g =  %.6g\n\n", var1, operator, var2, answ);
	goto exit;

fail:
	printf("invalid input please try again in the proper format number followed by operator followed by a number");
exit:
	return 0;
}
