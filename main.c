#include <stdio.h>
int main(void)
{
  float score;
  printf("Input score: ") ;
  scanf("%f",&score);
  if (score >=0 && score <=100){
    switch((int)score/10){
      case 10: case 9: case 8: printf("Grade = A");break;
      case 7: if(score>=7.5){
                printf("Grade = B+");
              }else{
                printf("Grade = B");
              };break;
      case 6: if(score>=6.5){
                printf("Grade = C+");
              }else{
                printf("Grade = C");
              };break;
      case 5: if(score>=5.5){
                printf("Grade = D+");
              }else{
                printf("Grade = D");
              };break;
      default : printf("Grade = F");break;
    }
  }else{
    printf("Please enter score 0-100");
  }
}
