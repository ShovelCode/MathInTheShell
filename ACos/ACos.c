#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
	printf("acos of X : %6.9f", acos(strtod(argv[1], NULL)));
	
	return 0;
}
