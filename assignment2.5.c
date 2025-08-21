#include <stdio.h>
int main()
{
 int a;
 printf("Enter gross sales");
 scanf("%d",&a);
 if(a>20000)
 {
  printf("%d - %d*0.1");
 }
 else if(a>10000)
 {
  printf("%d - %d*0.15");
 }
 else
 {
  printf("%d - %d*0.05");
 }
 return 0;
}

