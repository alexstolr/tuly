#include <stdio.h>

int main(){
	int i;
	int array[5] = {6,34,86,33,2};
	for (i=0; i<5 ; i++){
		printf("array[%d]:\t %p \t %d\n",i,&array[i], array[i]);

	}
	printf(address of array is without ampersand: %p\n", array );
	printf(" dereferencing the array gives the first value: %d\n",*array );
	printf(" dereferencing the array gives the first value: %d\n",*(array+2) );
	return 0;
}