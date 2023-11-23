#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max){
	if(min > max){
		return NULL;
	}

	int *final = malloc((max-min)*sizeof(int));
	if(final == NULL){
		return NULL;
	}

	for(int i = min; i < max; i++){
		*(final+i-min) = i;
	}
	return final;
}

void main(){
	int min = 5, max = 15;
	int *n = ft_range(min, max);
	int size = max-min;
	printf("size : %d\n", size);
	for(int i = 0; i < size; i++){
		printf("%d, ", *(n+i));
	}
}
