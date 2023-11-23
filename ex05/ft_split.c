#include <stdio.h>
#include <stdlib.h>

int len(char *s){
	int i = 0;
	while(*(s+i) != '\0'){
		i++;
	}
	return i;
}

int cmp(char *s1, char *s2){
	int i = 0;
	while(*(s1+i) != '\0' && *(s2+i) != '\0'){
		if(*(s1+i) != *(s2+i)){
			return 0;
		}
		i++;
	}
	return 1;
}

char **ft_split(char *str, char *charset){
	int i = 0, j = 0;
	int size = 0;
	while(i < len(str)-len(charset)-1){
		if(cmp((str+i), charset)){
			size++;
		}
		i++;
	}
	if(!size){
		return NULL;
	}
	char **split = malloc(size*sizeof(int)+1);
	*(split+size) = 0;
	i = 0;
	while(i < len(str)-len(charset)-1){
                if(cmp((str+i), charset)){
                        *(split+j) = (str+i);
			j++;
                }
                i++;
        }
	return split;
}

void main(){
	char a[] = "0123  .azer  .0123 123 123";
	char sep[] = "  ";
	char **tab = ft_split(a, sep);
	for(int i = 0; tab[i] != 0; i++){
		printf("%s, ", tab[i]);
	}
}
