#include <stdio.h>

int main (){
	int score;
	int A=0,B=0,C=0,D=0,F=0;
	
	while(score!=-1){
		scanf("%d",&score);
		
		if(score>100){
			printf("error");
		}else if(score<0){
			printf("A(%d)\nB(%d)\nC(%d)\nD(%d)\nF(%d)\n",A,B,C,D,F);
		}else if(score>67){
			if(score<68){
				printf("%d(D)\n",score);
				D+=1;
			}else if(score>=68){
				if(score<75){
					printf("%d(C)\n",score);
					C+=1;
				}else if(score>=75){
					if(score<=85){
						printf("%d(B)\n",score);
						B+=1;
					}else{
						printf("%d(A)\n",score);
						A+=1;
					}
				}
				
			}else{
				printf("%d(D)\n",score);
				D+=1;
			}
	   	}else{
	   		if(score>=55){
	   			printf("%d(D)\n",score);
	   			D+=1;
			}else{
				printf("%d(F)\n",score);
				F+=1;	
			   }
		}
				
		
	}
	

}
		
	



