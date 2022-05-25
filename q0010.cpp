#include <string>
using namespace std ; 

string reverseString (string str )
{
  int size = str.size();
  char temp;
  int i = 0;
  int j = size-1;
  
  for(i = 0; i < j; i++){
    temp = str[j];
    str[j] = str[i];
    str[i] = temp;
    j--;
  }
  return str;
}
