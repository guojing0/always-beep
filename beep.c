#include <stdio.h>

int main(void){
	while (1){
		printf("\a");
	}
	return 0; /* It would never stop unless you press ctrl-c */
}