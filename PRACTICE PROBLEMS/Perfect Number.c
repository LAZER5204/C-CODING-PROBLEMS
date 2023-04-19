// Sum of digits = number
// 1+2+3 = 6

#include <stdio.h>

int main() {
  int num;
  printf("Enter n: ");
  scanf("%d",&num);
  int i;
  int sum=0;
  for (i=1;i<num;i++) {
    if (num%i==0) {
      sum += i;
    }
  }
  if (sum==num){
    printf("%d is a perfect number",n);
  }
  else{ 
    printf("%d is not a perfect number",n);
  }
}
