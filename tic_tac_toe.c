#include <stdio.h>
int board[9];
int draw_check(int a[]){
    int count=0;
    for (int i = 0; i < 9; i++)
    {
        if (a[i]==0)
        {
            count +=1;            
        }
        
    }
        if (count<1)
        {
            return 1;
        } 
        return 0;   
}
int win_check(int player){
if (board[0]==player&& board[3]==player&& board[6]==player){return player;}
if (board[1]==player&& board[4]==player&& board[7]==player){return player;}
if (board[2]==player&& board[5]==player&& board[8]==player){return player;}

if (board[0]==player&& board[1]==player&& board[2]==player){return player;}
if (board[3]==player&& board[4]==player&& board[5]==player){return player;}
if (board[6]==player&& board[7]==player&& board[8]==player){return player;}

if (board[0]==player&& board[4]==player&& board[8]==player){return player;}
if (board[2]==player&& board[4]==player&& board[6]==player){return player;}
return -1;
}
int main(){
    int board[9]={0},a;
    for (int i = 0; i < 5; i++)
    {
        printf("enter the location :- ");
        scanf("%d",&a);
        if (a<0 || a>9 || board[a]!=0 )
        {
            printf("this location is not allowed \n");
            i--;
            continue;
        }
        else {
            board[a]=1;
        }

    }
        

    
     return 0;
}