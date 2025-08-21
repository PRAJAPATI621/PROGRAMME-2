#include <stdio.h>
int main()
{
 float a;
 printf("Enter whether's temperature in celcius\n");
 scanf("%f",&a);
 if(a/7)
 {
  printf("%f is divisible by 7",a);
 }
 else if(!a/7)
 {
  printf("%f is not divisible by 7",a);
 }
 return 0;
}
