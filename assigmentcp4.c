#include<stdio.h>
int main(){
    //declaring variable
    int tm; int m; int h;

    //taking input
    printf("total number of minutes");
    scanf("%d",&tm);
    h=(tm/60);
    printf("hours");
    printf("%d",h);
    m=tm%60;
    printf("minutes");
    printf("%d",m);


}
