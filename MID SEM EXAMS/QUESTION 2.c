#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float temperature;
	
	printf("Enter your body temperature in celsius: ");
	scanf("%f", &temperature);
	
	if (temperature<35.0){
		printf("Temperature category:LOW\n");
		printf("Your body temperature is %.if°C, which is considered low.\n",temperature);
		}else if(temperature<=37.5){
			printf("Temperature category:NORMAL\n");
			printf("Your body temperature is %.if°C, which is within the normla range.\n", temperature);
		}else{
		 printf("Temperature category:HIGH\n");
		 printf("Your body temperature is %.if°C, which is considered high.\n", temperature);
		}
		
		  
	return 0;
}
