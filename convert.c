#include <stdio.h>
#include <stdlib.h>

void print_ternary(int*);
void dec2ter(int, int*);

int main(void){
  int i = 0;

  for(; i < 81; i++){
    int ternary[4] = {0,0,0,0};
    dec2ter(i, ternary);
  }
  return 0;
}

void print_ternary(int* arr){
  for(int z = 0; z<4; z++){
    printf("%d", arr[z]);
  }
  printf("\n");
}

void dec2ter(int i, int* ternary){
  if(i < 3){
    ternary[3] = i;
    print_ternary(ternary);
  }else if(i < 9){
    ternary[3] = i%3;
    ternary[2] = (i/3)%3;
    print_ternary(ternary);
  }else if(i < 27){
    ternary[3] = i%3;
    ternary[2] = (i/3)%3;
    ternary[1] = ((i/3)/3)%3;
    print_ternary(ternary);
  }else{
    ternary[3] = i%3;
    ternary[2] = (i/3)%3;
    ternary[1] = ((i/3)/3)%3;
    ternary[0] = (((i/3)/3)/3)%3;
    print_ternary(ternary);
  }
}
