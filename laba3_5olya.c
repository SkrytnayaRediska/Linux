#include <stdio.h>    
#include <stdlib.h> 
#include <unistd.h> 
#include <sys/timeb.h> 
#include <time.h> 
int main() {
	printf("\nDO\n");
	pid_t child;
	int status;
	char comanda[256];
	
	puts(comanda);
	int flag = 1;
	while (flag == 1){
		
		printf("\nVvedite comandu: ");
		gets(comanda);
		if (strcmp(comanda, "EXITLABA") != 0)
		{	
			flag = 1;
			child = fork();
			if (child == 0){
				execl("act", comanda); 
			}
			else
			{
				waitpid(child, &status, 0);
			}
		}
		else
		{
			flag = 0;
		}
	}	
	printf("\nPOSLE\n");
	return 0; 

}
