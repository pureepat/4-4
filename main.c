#include <stdio.h>

int main(void) {
  int per;
  float L1, L2, area, sum, H;
  printf("Enter L1 : ");
  scanf("%f",&L1);
  printf("Enter L2 : ");
  scanf("%f",&L2);
  printf("Enter Height : ");
  scanf("%f",&H);
  per = (L2/L1)*100;
  printf("L2 = %d %  \n",per);
  sum = L1+L2;
  if(per>=40) {
    area = 0.5*H*sum;
    printf("Area = %0.3f", area);
  }
  return 0;
}