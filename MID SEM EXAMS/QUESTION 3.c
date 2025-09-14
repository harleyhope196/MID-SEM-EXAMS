#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float temperature;                      
	
	printf("Enter body temperature in celsius: ");
	scanf("%f", &temperature);
	
	if (temperature<35.0){
		printf("Temperature category:Low\n");
		printf("Your body temperature(%if°C) is below normal.\n",temperature);
	}
	else if(temperature<=37.5){
		printf("Temperature category:Normal\n");
		printf("Your body temperature(%if°C) is within the normal range.\n", temperature);
	}
	else{
		printf("Temperature category:High\n");
		printf("Your body temperature(%if°C) is above noraml.\n, temperature");
	}
	
	
	return 0;
}
