#include <stdio.h>
int main(){
	int n, i, j, f;
	printf("type number:");
	scanf("%d", &n);
		
	if (n >= 1){
		i = 0;
		while(i < n){
			i++;
			j = 0;
			while(j <= n){		
				if (((j > 1)&&(j < n))&&((i > 1)&&(i < n))) {
					printf(" "); 
					}
				else if((j !=0 )&&(i!=0)){
					printf("*");
				}
			j++;
			}
		printf("\n");			
		}
	}
return 0;
}
