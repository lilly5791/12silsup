#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	
	char src[] = "I am Suyoung";
	char dst[100];
	int i;
	
	strcpy(dst, src);
	printf("copied string: %s\n", dst);
	
	
	return 0;
}
