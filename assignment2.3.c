#include <stdio.h>
{
 int a;
 float b,c;
 printf("Enter 3 nomber\n");
 scanf("%d",&a);
 scanf("%f %f",&b,&c);
 if(a>10000)
 {
  printf("%d + %f*0.1 - %f*0.07",a,b,c);
 }
 else if(a>5000)
 {
  printf("%d + %f*0.07 - %f*0.1",a,b,c);
 }
return 0;
}
