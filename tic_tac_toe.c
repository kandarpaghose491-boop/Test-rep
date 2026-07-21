#include <stdio.h>
int board[9];
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
    printf("Hello World");
    printf("Abcd");

        return 0;
}