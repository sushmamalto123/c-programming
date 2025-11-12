#include <stdio.h>
int main(){

  int angle1, angle2,angle3,sum;

  printf("enter three angles of triangle:");
  scanf("%d %d %d",& angle1, &angle2, &angle3);

  sum= angle1+ angle2+ angle3 ;

  if( sum== 180 && angle1>0 && angle2>0 &&angle3>0){
    printf("the triangle is vaild.\n");
    } else{ printf("the triangle is not vaild.\n");
    }


}
