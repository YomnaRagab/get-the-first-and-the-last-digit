/*Author:Yomna Ragab*/
/* get the first and the last digit */
#include <stdio.h>
void main(void)
{
  int x,first,last; // x the number which user enter
  int i=1; // to use to divide the number to get the last digit
  printf("Enter a number:\n");
  scanf("%d",&x);
  first=x%10;
  printf("the first is %d\n",first);
  while((x/i)!=0) // each time the multiple of 10 divided on the number from the user not equal 0 which means there is other digits
  {
    i=i*10; // so icrease the digits and try
  }
  last=x/(i/10); // when you get the zero which means now you have the number of total digits so divide i on 10 to get the last digit
  printf("the last is %d",last);
}
