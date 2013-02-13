#include<stdio.h>
#include<stdlib.h>

int main(void){
	char test[10] = {'a','b','c','d','\0'};
	char *p;
	p = malloc(sizeof(char));
	int count = 0;
	p = &test[0];
	while(*p != '\0'){
		count++;
		p++;
	}
	printf("below is the length\n");
	printf("%d\n", count);
	p = NULL;
	free(p);
	return 0;
}
