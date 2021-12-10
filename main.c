#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[]){
	if(argc==1){
		srand(time(NULL));
		int devine = rand() % 100+ 1;
		int guess = 0;
		printf("I have in mind a number in between 1 and 100, can you find it?\n");
		while (guess != devine){
			scanf("%d", &guess);
			if(guess >= 1 && guess <= 100){
				if(guess > devine){
					printf("The number to guess is lower\n");
				}
				else if (devine > guess){
				       printf("The number to guess is higher\n");
				}
			}
			else{
				printf("Invalid intput\n");
				return 1;

			}
		}
		printf("You found the number, it was indeed %d\n",guess);
		return 0;
	}

		else if ( atoi(argv[1]) != 0){
			srand(time(NULL));
			int devine = rand() % atoi(argv[1]) + 1;
			int guess =0;
			printf("I have in mind a number in between 1 and %d, can you find it?\n",atoi(argv[1]));
			while (guess != devine){
				scanf("%d", &guess);
				if(guess >= 1 && guess <= atoi(argv[1])){
                                if(guess > devine){
                                        printf("The number to guess is lower\n");
                                }
                                else if (devine > guess){
                                       printf("The number to guess is higher\n");
                                }
				else if(guess<0){
					printf("Invalid Input\n");
				}
                        }
                        else{
                                printf("Invalid intput\n");
                                return 1;

                        
			}
			}
                
                printf("You found the number, it was indeed %d\n",guess);
                return 0;
		}
			else{
				printf("Invalid input\n");
				return 1;
			
			}
}





