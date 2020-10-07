#include <stdio.h>
int main(void) {
int num1,num2,num3,num4,sum;
for (int i = 0; i <= 9999; i++) {
			num4 = i/1000;
			num3 = (i%1000)/100;
			num2 = (i%100)/10;
			num1 = i%10;
      sum = (num1*num1*num1*num1) + (num2*num2*num2*num2)+(num3*num3*num3*num3) + (num4*num4*num4*num4);
      if(sum == i){
        printf("number : %d \n",i);
      }
}
return 0;
}