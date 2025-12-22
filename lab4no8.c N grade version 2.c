#include <stdio.h>

int main (){
	int score;
	
	while(score!=-1){
		scanf("%d",&score);
		if(score>100){
			printf("error");
		}else if(score<0){
			printf("error");
		}else if(score>67){
			if(score<71){
				printf("%d(D)\n",score);
			}else if(score>=63){
				if(score<71){
					printf("%d(D)\n",score);
				}else if(score>=71){
					if(score<79){
						printf("%d(C)\n",score);
					}else if(score>=79){
						if(score<87){
							printf("%d(B)\n",score);
						}else{
							printf("%d(A)\n",score);
						}	
					}
				}
			}else{
				printf("%d(F)\n",score);
			}
		}else{
			if(score>=56){
				printf("%d(D)\n",score);
			}else{
				printf("%d(F)\n",score);
			}
		}
	}		
}


