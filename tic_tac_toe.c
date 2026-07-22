#include <stdio.h>
int board[9]={2,1,2,1,2,1,2,2};
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
if(draw()){return 0;}
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
int main(){
    int input;
    int result=-1;
    while (result==-1)
    {
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
    }
     board_print();   
    printf("Result: %d",result);
    
     return 0;
}