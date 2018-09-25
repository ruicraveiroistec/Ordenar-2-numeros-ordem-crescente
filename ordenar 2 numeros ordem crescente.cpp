#include <stdio.h>	
int main()                            
{
    int val1, val2, c;                          
  
    printf( "Insira o primeiro valor:\n" );  
    scanf( " %d", &val1 );
	printf( "Insira o segundo valor:\n" );  
    scanf( " %d", &val2 );
    if (val1 < val2){
    	printf("Valores por ordem crescente:\n");
    	printf("%d\n", val1);
    	printf("%d\n", val2);
	}
	
    else {
    	c = val1;
    	val1 = val2;
    	val2 = c;
    	printf("Valores por ordem crescente:\n");
    	printf("%d\n", val1);
    	printf("%d\n", val2);
	}
  return 0;
}

