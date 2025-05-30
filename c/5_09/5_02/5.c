#include<stdio.h>
int main(void){
    int score;
    //変数scoreに整数を入力
    //scoreが80以上なら「合格」
    scanf("%d",&score);
    if(score>=80){
       printf("合格\n");
     }else{
        printf("不合格\n");
     }
    return 0;
}
