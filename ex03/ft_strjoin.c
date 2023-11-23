#include <stdio.h>
#include <stdlib.h>

int len(char *s){
	int i = 0;
	while(*(s+i) != '\0'){
		i++;
	}
	return i;
}

char *ft_strjoin(int size, char **strs, char *sep){
	int l = 0;
	for(int i = 0; i < size; i++){
		l = l + len(strs[i]);
	}

	char *final = malloc( (l+len(sep))+((size-1)*len(sep)) );
	if(final == NULL){
		return NULL;
	}
	int k = 0;
	for(int i = 0; i < size; i++){
		for(int j = 0; j < len(strs[i]); j++){
			*(final+k) = strs[i][j];
			k++;
		}

		if(i < size-1){
			for(int j = 0; j < len(sep); j++){
				*(final+k) = *(sep+j);
				k++;
			}
		}
	}
	return final;
}

void main(){
	char a[] = "mamy";
	char b[] = "ny anandrano";
	char sep[] = "  ";
	char *strs[2] = {a, b};
	char *final = ft_strjoin(2, strs, sep);
	printf(":%s:\n", final);
}
