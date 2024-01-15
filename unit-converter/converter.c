#include <stdio.h>
#include <stdbool.h>

int main(){
	int tempChoice;
	int fareInput;
	int celsInput;
	int fareIntoCels;
	int celsIntoFare;
	int ounce;
	int pound;
	int gram;
	int usd;
	int euro;
	int cad;
	float ounceToPound;
	float poundToOunce;
	float gramToPound;
	float poundToGram;
	float usdToEuro;
	float euroToUsd;
	float usdToCad;
	float cadToUsd;


while(true){
	printf("--------------------------------------------------------\n");
	printf("----------Hello welcome to the unit converter-----------\n\n");
	printf("      please choose what you want to convert\n");
	printf("            1. Farenhit to Celsius\n");
	printf("            2. Celsius to Farenhit\n");
	printf("            3. Ounces to pound\n");
	printf("            4. Pounds to ounces\n");
	printf("            5. Gram to pound\n");
	printf("            6. Pound to gram\n");
	printf("            7. USD to EURO\n");
	printf("            8. EURO to USD\n");
	printf("            9. USD to CAD\n");
	printf("           10. CAD to USD\n");
	printf("           11. Exit Program\n");
	printf("    Please select a number and press enter when done\n");
	printf("---------------------------------------------------------\n\n");
	fflush(stdout);

	scanf("%d",&tempChoice);


	switch(tempChoice){
		case 1: printf("Please enter the farenhit temperature\n\n");
			fflush(stdout);
			scanf("%d",&fareInput);
			fareIntoCels=(fareInput-32)*(5.0/9.0);
			printf("The conversion of farenhit to celcius is: %d",fareIntoCels);
			printf("\n\n");
			fflush(stdout);
			break;
		case 2: printf("Please enter the celsius temperature\n\n");
			fflush(stdout);
			scanf("%d",&fareInput);
			celsIntoFare=(celsInput*(9.0/5.0))+32;
			printf("The conversion of celsius to farenhite is: %d",celsIntoFare);
			printf("\n\n");
			break;
			fflush(stdout);
		case 3: printf("Please enter the ounces\n\n");
			fflush(stdout);
			scanf("%d",&ounce);
			ounceToPound = (ounce/16);
			printf("The conversion of ounces to pounds is : %f",ounceToPound);
			printf("\n\n");
			break;
		case 4: printf("Please enter the pound\n\n");
			fflush(stdout);
			scanf("%d",&pound);
			poundToOunce = (pound*16);
			printf("The conversion of pounds to ounces is: %f",poundToOunce);
			printf("\n\n");
			break;
		case 5: printf("Please enter the gram\n\n");
			fflush(stdout);
			scanf("%d",&gram);
			gramToPound = (gram/435.6);
			printf("The conversion of grams to pounds is: %f",gramToPound);
			printf("\n\n");
			break;
		case 6: printf("Please enter the pound\n\n");
			fflush(stdout);
			scanf("%d",&pound);
			poundToGram = (pound*435.6);
			printf("The conversion of pounds to grams is %f",poundToGram);
			printf("\n\n");
			break;
		case 7: printf("Please enter the amount in USD: %d",usd);
			fflush(stdout);
			scanf("%d",&usd);
			usdToEuro = (usd*0.912694);	
			printf("The conversion of USD to EURO is: %f",usdToEuro);
			printf("\n\n");
			break;
		case 8: printf("Please enter the amount in EURO: %d");
			fflush(stdout);
			scanf("%d",&euro);
			euroToUsd = (euro/0.912694);
			printf("The conversion of EURO to USD is: %f",euroToUsd);
			printf("\n\n");
			break;
		case 9: printf("Please enter the amount in USD: %d");
                        fflush(stdout);
			scanf("%d",&usd);
                        euroToUsd = (usd*1.34);
                        printf("The conversion of USD to CAD is: %f",usdToCad);
                        printf("\n\n");
			break;
		case 10:printf("Please enter the amount in CAD: %d");
                        fflush(stdout);
			scanf("%d",&cad);
                        euroToUsd = (cad/1.34);
                        printf("The conversion of EURO to USD is: %f",cadToUsd);
                        printf("\n\n");
			break;
		case 11: goto exit;
		default: goto fail;
	}
}
	goto exit;

fail:
	printf("Invalid input please try again!");
exit:
	return 0;
	}

