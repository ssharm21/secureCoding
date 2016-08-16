#include<stdio.h>
#include<stdlib.h>
int main (int argc, char* argv[]) {
	int i;
	int count = 10;
	int *ptr = NULL;
	ptr = (int *)strtol(argv[1], NULL, 10);
    for (i = 0; i < count; i++) {
        printf("%d",ptr[i]);
    }

	printf("Memory location starts at %d\n",ptr);
//	free(ptr);
	return 0;
}
