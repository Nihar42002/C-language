#include<stdio.h>
#include<math.h>

float pi =3.14;
float r;
void Area();

int main()
{
    printf("Enter the Radius=");
    scanf("%f",&r);
    printf("Area of cirle=%.2f\n",pi*pow(r,2));

    Area();
    return 0;
}

void Area()
{
    float lenght;
    printf("\n Enter the Lenght=");
    scanf("%f",&lenght);
    printf("Total surface Area Of cone=%.2f\n",pi*r*(r+lenght));
    
}