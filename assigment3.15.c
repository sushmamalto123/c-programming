#include <stdio.h>
int main(){
    int maths,physics, chemistry;

    printf("enter the value of maths");
    scanf("%d",&maths);

    printf("enter the value of physics");
    scanf("%d",&physics);

    printf("enter the value of chemistry");
    scanf("%d",&chemistry);

    if(maths>=65){
        printf("eligible %d");}
        else if (physics>=55){
        printf("eligible %d");}
    else if (chemistry>=50){
    printf("eligible %d");}

    else{
    printf("not eligible %d");}




}
