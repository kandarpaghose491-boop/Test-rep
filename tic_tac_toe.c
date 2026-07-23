#include <stdio.h>
#include "misc.h"
int board[9]={0};
int draw(){
    for (int i = 0; i < 9; i++)
    {
        if (board[i]==0)
        {
            return 0;          
        }
        
    } 
        return 1;   
}
int get_result(int player){
if (draw()){return 0;}
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
void board_print(){
    char obj[]={' ','X','O'};
    for(int i=1;i<10;i++){
        printf("[%c]",obj[board[i-1]]);
        if(i%3==0){
            printf("\n");
        }
    }
}
int get_empty(int *emp){
    int len=0;
for (int i=0;i<9;i++){
    if(board[i]==0){
        (*emp)=i;
        emp++;
        len++;
    }
}
return len;
}
int best_move(){
    int buffer[9];
    arrycpy(buffer,board,9);
    for (int i = 0; i < 9; i++)
    {
        // board[i]=2;
        if (board[i]==0)
        {
            board[i]=1;
        }
        if (get_result(1)==1)
        {
            arrycpy(board,buffer,9);
            return i;
        }
        
        if (board[i]==0)
        {
            board[i]=2;
        }
        if (get_result(2)==2)
        {
            arrycpy(board,buffer,9);
            return i;
        }
                
    }
    return -1;        
}
int main(){
    srand(time(NULL));
    int input;
    int result=-1;
    while (result==-1)
    {
            int empty[8];
        board_print();
        printf("enter the location :- ");
        scanf("%d",&input);
        if (input<1 || input>10 || board[input-1]!=0 )
        {
            printf("this location is not allowed \n");
            continue;
        }
        else {
            board[input-1]=1;
        }
        result=get_result(1);
        if(result!=-1){
            break;
        }
        int len=get_empty(empty);
        // printf("%d\n",len);
        int move=best_move(); 
        if (move==-1){
            move=rand_choice_int(empty,len);
        }//random move for testing
        board[move]=2;
        result=get_result(2);
    }
     board_print();   
    printf("Result: %d",result);
    
     return 0;
}