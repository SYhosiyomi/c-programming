#include<stdio.h>
float chohokei(float tate,float yoko);

int main(void){
    float menseki=chohokei(10.0,10.0);
    printf("%f\n",menseki);
    return 0;
}
float chohokei(float tate,float yoko){
   float menseki;
   menseki=tate*yoko;
    return menseki;
}