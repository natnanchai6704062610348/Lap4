#include <stdio.h>

int main ()
{
	int i,l,c,j;
	char k;
	scanf(" %c %d %d", &k,&c,&l);
	
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			printf("%c", k);
		}printf("\n");
	}

}
