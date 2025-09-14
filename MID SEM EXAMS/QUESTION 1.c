#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	  float temperature;
	  int heartrate;
	  int bloodpressure;
	  
	  printf("Enter body temperature(°C): ");
	  scanf("%f",&temperature);
	  
	  printf("Enter heartrate(bpm): ");
	  scanf("%d",&heartrate);
	  
	  printf("Enter blood pressure(mmHg): ");
	  scanf("%d",&bloodpressure);
	  
	  printf("\n---Vital signs---\n");
	  printf("Body temperature:%.if °C\n", temperature);
	  printf("Heartrate:%d bpm\n",heartrate);
	  printf("Blood pressure:%d mmHg",bloodpressure);
	  
	return 0;
}
