#include <stdio.h>

int main(){
	int tempChoice;
	int fareInput;
	int celsInput;
	int fareIntoCels;
	int celsIntoFare;

	printf("Hello welcome to the farenhit and celsius converter\n\n");
	printf("please choose what you want to convert\n");
	printf("1. Farenhit to Celsius\n");
	printf("2. Celsius to Farenhit\n");
	printf("Please select a number and press enter when done\n");
	fflush(stdout);

	scanf("%d",&tempChoice);

	switch(tempChoice){
		case 1: printf("Please enter the farenhit temperature\n\n");
			fflush(stdout);
			scanf("%d",&fareInput);
			fareIntoCels=(fareInput-32)*(5.0/9.0);
			printf("The conversion of farenhit to celcius is: %d",fareIntoCels);
			fflush(stdout);
			break;
		case 2: printf("Please enter the celsius temperature\n\n");
			fflush(stdout);
			scanf("%d",&fareInput);
			celsIntoFare=(celsInput*(9.0/5.0))+32;
			printf("The conversion of celsius to farenhite is: %d",celsIntoFare);
			break;
			fflush(stdout);
		default: goto fail;

	}

	goto exit;

fail:
	printf("Invalid input please try again!");
exit:
	return 0;
}

