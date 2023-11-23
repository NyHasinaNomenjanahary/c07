#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int len(char *s){
	int i = 0;
	while(*(s+i) != '\0'){
		i++;
	}
	return i;
}

char *ft_strdup(char *src){
	char *final = malloc(len(src));
	if(final == NULL){
		return NULL;
	}
	for(int i = 0; i < len(src); i++){
		*(final+i) = *(src+i);
	}
	return final;
}

void main(){
	char a[] = "anandrano masiso!";
	char *b = ft_strdup(a);
	printf("%d\n", *b == *strdup(a));
}
