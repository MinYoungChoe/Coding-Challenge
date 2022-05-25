int min(int* array, int arrayLength)
{
  int i = 0;
  int min = array[i];
  
  for(i = 0; i < arrayLength; i++){
    if(array[i] < min){
      min = array[i];
    }
  }
  return min;
}

int max(int* array, int arrayLength){
  
  int i = 0;
  int max = array[i];
  
  for(i = 0; i < arrayLength; i++){
    if(array[i] > max){
      max = array[i];
    }
  }
  return max;
}
