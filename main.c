#include <stdio.h>
int main(void)
{
  int score;
  float grade;
  printf("Input score: ") ;
  scanf("%d",&score);
  grade = score/10.0;
  if (score >=0 && score <=100){
    switch(score/10){
      case 10: case 9: case 8: printf("A");break;
      case 7: if(grade>=7.5){
                printf("B+");
              }else{
                printf("B");
              };break;
      case 6: if(grade>=6.5){
                printf("C+");
              }else{
                printf("C");
              };break;
      case 5: if(grade>=5.5){
                printf("D+");
              }else{
                printf("D");
              };break;
      default : printf("F");break;
    }
  }else{
    printf("Please enter score 0-100");
  }
}
