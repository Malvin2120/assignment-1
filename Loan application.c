#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    float income;

    printf("Enter your Age: %d", age);
    scanf("%d", &age);


    printf("Enter your annual income : %d", income);
    scanf("%d", &income);

    if(age>=21 && income>=21000){

      printf("Congaratulations! You qualify for a loan \n");


    }

    else {
        printf("Unfortunatly, we are not able to offer you a loan \n");
    }



    return 0;
}
