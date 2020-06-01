#include <stdio.h>    
#include <stdlib.h> 
#include <unistd.h> 
#include <sys/timeb.h> 
#include <time.h> 
#include <string.h> 
int main(int argc, char *argv[]) {
	printf("\nDO2\n");
	size_t needed_mem = snprintf(NULL, 0, "%s", argv[0]) + sizeof('\0'); 
  	char *str = malloc(needed_mem);
  	snprintf(str, needed_mem, "%s", argv[0]);
  	system(str);
	/*char comanda[256] = argv[0];
	char vtoraya_comanda[] = argv[1];  
	strcat(comanda, vtoraya_comanda);
	system(comanda);*/
	printf("\nPOSLE2\n");
	return 0; 

}
