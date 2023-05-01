#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#define MAX_CHARACTERS 42

int main(){

    char message[MAX_CHARACTERS], message_parities[MAX_CHARACTERS+6];
    int characters, parities, parities_finder, i, j, k;

    i = 0;
    do{
        message[i++] = getchar();

        if(i>MAX_CHARACTERS){
            
            break;
        }
    }while(message[i-1]!=10);

    system("cls");
    message[i] ='\0';
    characters = i-1;

    printf("Mensaje: %s (%d)\n",message,characters);
    
    j = 0;
    i = 0;
    parities = 0;
    while(j<characters){

        if((i+1)==(1<<parities)){

            message_parities[i] = '*';
            parities++;
        }else{

            message_parities[i] = message[j];
            j++;
        }
        i++;
    }

    printf("{encoded msg} = %s {parities} = %d\n",message_parities,parities);

//! //////////////////////////////////////////////////////////////////////// !
                          //! No entendido !//

  printf("%s\nParidad = %d\n", message_parities, parities);
  for(i=0; i<parities; i++){

    k = (1<<i);
    printf("%d\n", k);

    for(parities_finder=0, j=k-1; j<(characters+parities); j++){

      if(((j-k+1)%(1<<k))<(1<<(k-1))){
        
        printf("%d\t", j);
      }
    }
    printf("\n");

    message_parities[k-1] = parities_finder;
  }  
  printf("%s\nParidad = %d\n", message_parities, parities);
  
                          //! No entendido !//
//! //////////////////////////////////////////////////////////////////////// !
    return 0;
}
