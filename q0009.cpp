#include <stdio.h>

void high_and_low (const char *strnum, char *result)
{
    int i = 0;
    int numArray[100];
    int j = 0;
    
    for(i = 0; i < strlen(strnum); i++){
        if(strnum[i] == ' ' || i == 0){
            sscanf(strnum+i, "%d", &numArray[j++]);

        }
    
    }
    i = 0;
    
    int min = numArray[i];
    int max = numArray[i];
    
    for(i = 0; i < j; i++){


      if(numArray[i] < min){
        min = numArray[i];
      }

      if(numArray[i] > max){
        max = numArray[i];
      }
    }

   sprintf(result, "%d %d", max, min);
}
