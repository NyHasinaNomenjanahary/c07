#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max){
	if(min >= max){
		*range = NULL;
		return 0;
	}
	int len = max-min;
	int *n = malloc(len*sizeof(int));
	if(n == NULL){
		return -1;
	}

	for(int i = min; i < max; i++){
		*(n+i-min) = i;
	}
	*range = n;
	for(int i = 0; i < len; i++){
                printf("%d, ", *(n+i));
        }
	return len;
}

void main(){
	int *range;
	int min = 5, max = 15;
	ft_ultimate_range(&range, min, max);
	int size = max-min;
	for(int i = 0; i < size; i++){
                printf("%d, ", *(range+i));
        }
}
