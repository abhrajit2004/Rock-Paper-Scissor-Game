#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int rockPaperScissor(char you, char comp){
    // returns 0 if draw,1 if you win and -1 if you lose
    //Condition for draw
    //rr
    //pp
    //ss
    if(you==comp){
        return 0;
    }
    //Non-draw conditions
    // rp
    // ps
    // sr
    // pr
    // sp
    // rs
    if(you=='r'&& comp=='p'){
        return -1;
    }else if(you=='p' && comp=='s'){
        return -1;
    }else if(you=='s' && comp=='r'){
        return -1;
    }else if(you=='p' && comp=='r'){
        return 1;
    }else if(you=='s' && comp=='p'){
        return 1;
    }else if(you=='r' && comp=='s'){
        return 1;
    }
}
int main(){
    char you,comp,number;
    srand(time(0));
    number=rand()%100 + 1;
    if(number<33){
        comp='r';
    }else if(number>33 && number<66){
        comp='p';
    }else{
      comp='s';
    }
    printf("Enter 'r' for rock, 'p' for paper and 's' for scissor:\n");
    scanf("%c",&you);
    int result=rockPaperScissor(you,comp);
    if(result==0){
       printf("Draw!\n");
    }else if(result==1){
        printf("You Win!\n");
    }else{
        printf("You Lose!\n");
    }
    printf("You chose %c and computer chose %c.",you,comp);
    return 0;
}
