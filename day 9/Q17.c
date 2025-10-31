#include <stdio.h>
#include <math.h>
int main()
{ 
    int a,b,c;
    float discriminant,root1,root2;
    printf("Enter the cofficients of equation a,b and c ");
    scanf("%d %d %d",&a,&b,&c);
    discriminant= b * b - 4 * a * c;
     if (discriminant > 0) 
     {
        root1 = (-b+sqrt(discriminant)) / (2 * a);
        root2 = (-b-sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %.2f, %.2f\n", root1, root2);
    } 
    else if (discriminant == 0) 
    {
        root1 = -b / (2 * a);
        printf("Roots are real and same: %.2f\n", root1);
    } 
    else 
    {
       
        printf("Roots are complex");
    }
}