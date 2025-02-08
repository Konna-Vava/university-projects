#include <stdio.h>
#include <stdbool.h>

bool is_pangram(const char *str_in) {
  int i=0,used[26]={0},total=0;
  
  while(str_in[i]!='\0'){
    if('a'<=str_in[i] && str_in[i]<='z'){
        total+=!used[str_in[i]-'a'];
        used[str_in[i]-'a']=1;
    }
    else if('A'<=str_in[i] && str_in[i]<='Z'){
        total+=!used[str_in[i]-'A'];
        used[str_in[i]-'A']=1;
    }
    i++;
  }
     
  if(total==26){
    return true;
  }
  else{
    return false; 
  }
}
