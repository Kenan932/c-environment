#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main(){
	srand(time(NULL));
	int nombre=rand()%100;
	int devine=0;
	printf("I have in minde a number in between 1 and 100, can you find it?\n");
	while(devine!=nombre){
		scanf("%d",&devine);
		if(devine<1){
			printf("Invalid input");
			return 1;
		}
		if (devine>100){
			printf("Invalid input");
			return 1;
		}
		else if(nombre>devine){
			printf("The number to guess is higher\n");
		}
		else if(nombre<devine){
			printf("The number to guess is lower\n");
		}
		else if(devine >='a' && devine <='z'){
			printf("Invalid input");
			return 1;
		}
		else if(devine >='A' && devine <='Z'){
			printf("Invalid input");
			return 1;
		}
		else{
			printf("You just found the number, it was indeen %d", devine);
		}
	}
	return 0;
}
