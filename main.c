#include<stdio.h>

int main(){
	float temp, LastTemp;
	char unit;
	printf("Please enter the temperature with its unit(F for Fahrenheit - C for Celsius): ");
	scanf("%f %s", &temp, &unit);
	if(unit=='f' || unit=='F'){
		LastTemp=(temp - 32)*5/9;
		printf("\n%.1f F is equal to %.1f C", temp, LastTemp);
	}
	if(unit=='c' || unit=='C'){
		LastTemp=temp*9/5 +32;
		printf("\n%.1f C is equal to %.1f F", temp, LastTemp);
	}
	return 0;
}
