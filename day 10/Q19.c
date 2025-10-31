#include <stdio.h>
int main()
{
  int s1,s2,s3;
  printf("Enter the sides of the triangle: ");
  scanf("%d %d %d", &s1, &s2, &s3);
  if(s1+s2>s3 & s2+s3>s1 & s3+s1>s2)
  {
    printf("triangle is valid\n");
    if(s1==s2 & s2==s3 & s3==s1)
    {
        printf("\nit is an equilateral triangle ");
    }
    else if((s1==s2 & s2!=s3) | (s2==s3 & s3!=s1) | (s3==s1 & s1!=s2))
    {
        printf("\nit is an isocelus triangle");
    }
    else if(((s1*s1)+(s2*s2)==s3*s3) | ((s1*s1)+(s3*s3)==s1*s1) | ((s1*s1)+(s3*s3)==s2*s2))
    {
        printf("\nit is a right angled triangle");
    }
    else
    {
        printf("\nit is an scalance triangle");
    }  
  }
  else
  {
    printf("it is not a triangle");
  } 
}