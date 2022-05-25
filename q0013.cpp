#include <stddef.h>

void remove_every_other (size_t *length, int array[*length])
{
  int j = 0;
  
  for(int i = 0; i < *length; i++){
    if(i % 2 == 0){
      array[j] = array[i];
      j++;
    }
  }
  
	*length = j;
}
