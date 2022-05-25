#include <stdio.h>
#include <iostream>


void between(int a, int b, int* integers){
    
    for(int i = 0; i < b-a+1; i++){
        integers[i] = a;
        a++;
    }
    
}

int main(){
    
    int a = -2;
    int b = 2;
    int array[5] = {-2,-1,0,1,2};
    
    between(a,b,array);
    
    for(int i = 0; i < 5; i++){
        std::cout << array[i] << std::endl;
    }
 
    return 0;
}
