/*This program has the purpose of accommodating n numbers that the user provides:
 * 1. As you inserted them.
 * 2. Contrary to how he inserted them.
 *
 *
 *  Name: Marco Leonardo Valencia Martinez
 *  ID: A01412017
 *  Date: October 15th of 2018
 */
#include <stdio.h>

int main() {
     //Here we declare all the variables we are going to use, we need
     //one "n" variable to determine when we will stop receiving numbers
     int n;
     int contador=0;

    printf("HellO, I am going to print you the n number of numbers you want !\nHow many numbers you want me to print?\n");
    printf("Could you please tell me how many numnbers you want?\n");
    scanf("%i",&n);

    //Now we define were we are going to save the numbers the user give us
    int num[n];

    printf("Please start giving me %i numbers\n",n);
    //Now we will do the for loop to start asking for the number we want
    for(contador=0; contador<n; contador++){
        scanf("%i",&num[contador]);
    }
    printf("\n");

    //Now we will print the numbers
    printf("The numbers you gave me were:");
    for (contador=0; contador<n; contador++){
        printf("\t%i", num[contador]);
        printf(",");
    }
    printf("\n");
    printf("\n");

    //Now we will print the values in reverse
    printf("The numbers you gave in reverse were:");
    for (contador =n; contador>0; contador--){
        printf("\t%i", num[contador-1]);
        printf(",");}
    return 0;
}