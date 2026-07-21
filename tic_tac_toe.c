#include <stdio.h>

int win_check(int a[9], int b){

if (a[0]==b && a[3]==b && a[6]==b){return 1;}
if (a[1]==b && a[4]==b && a[7]==b){return 1;}
if (a[2]==b && a[5]==b && a[8]==b){return 1;}

if (a[0]==b && a[1]==b && a[2]==b){return 1;}
if (a[3]==b && a[4]==b && a[5]==b){return 1;}
if (a[6]==b && a[7]==b && a[8]==b){return 1;}

if (a[0]==b && a[4]==b && a[8]==b){return 1;}
if (a[2]==b && a[4]==b && a[6]==b){return 1;}
return 0;
}
int main(){
    printf("Hello World");
    printf("Abcd");

        return 0;
}