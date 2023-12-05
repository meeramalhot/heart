#include <stdio.h>

int main(void){
  int size_of_heart = 0;

  printf("Enter Year of Anniversary (or any whole number LOL): ");

  printf("Enter Size: ");
  scanf("%d", &size_of_heart);
  printf("\n");
  
  //print out triangle portion of the heart

  for (int i = size_of_heart; i >=1; i--) {
    //will print out no spaces for first line of the heart, and more spaces for every row after
    for (int j = i; j < size_of_heart; j++){
      printf(" ");
    }
    //i decreases in each outerloop
    for (int j = 0; j <=((i*2)-1); j++) {
      printf("*");
    }
    //newline for each layer
    printf("\n");
  }


  return 0;
}