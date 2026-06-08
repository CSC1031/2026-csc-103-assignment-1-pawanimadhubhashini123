#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mathematics;
    float science;
    float english;
    float total;
    float average;


    printf("Enter your mathematics marks \n");
    scanf("%f",&mathematics);
    printf("Enter your science marks \n");
    scanf("%f",&science);
    printf("Enter your english marks \n");
    scanf("%f",&english);

    total= mathematics+science+english ;
    average= total/3.0;

    printf("Total :%0.f\n",total);
    printf("Average :%.2f\n",average);

    if (100>average>80){
     printf("Grade: A\n");
    }
     else if  (79>average>70){
     printf("Grade: B\n");
     }
     else if (69> average>60){
      printf("Grade: C\n");
     }
     else if (59>average>50){
      printf("Grade: D\n");
     }
    else {
      printf("Grade: F");
     }
    if (mathematics>=40&& science>=40&& english>=40){
        printf("Result: Pass\n");
    }
        else{
        printf("Result: Fail\n");
    }



    return 0;
}
