#include <time.h>
#include <stdlib.h>
int rand_choice_int(int *arr,int len){
int element=rand()%len;
return arr[element];
}