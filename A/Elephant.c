#include<stdio.h>
int main()
{ int step_length;
  scanf("%d",&step_length);
  if((step_length%5)==0)
    printf("%d",step_length/5);
  else
    printf("%d",(step_length/5)+1);
  return 0;
 
}
