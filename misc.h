#include <time.h>
#include <stdlib.h>
int rand_choice_int(int *arr,int len){
int element=rand()%len;
return arr[element];
}
void arrycpy(int *dest,int *src,int len){
for(int i=0;i<len;i++){
    dest[i]=src[i];
}
}