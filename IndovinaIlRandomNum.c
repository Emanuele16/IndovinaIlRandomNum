#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int tentativi=0, numeroIn=0, numeroRan = (rand()%100)+1;
   	printf("Hai sette tentativi di risposta\n");
    while(numeroIn!=numeroRan && tentativi<7)
    {
        printf("inserisci numero\n");
        scanf("%d",&numeroIn);
        if(numeroIn>numeroRan)
        {
            printf("\nil numero e' maggiore del numero random\n");

        }

        else if(numeroIn<numeroRan)
        {
            printf("\nil numero e' minore del numero random\n");

        }
        
        ++tentativi;
   		

    }
    
    if(tentativi<=7 && numeroIn==numeroRan){
    	printf("il numero e' esatto");
    	
	}
	
	else{
		
		printf("hai esaurito i tentativi il numero random era %d", numeroRan);
		
	}
    
}
