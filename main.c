#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mathematics;
    float science;
    float english;
    float total;
    float average;
    char grade;
    char result[10];

    printf("Enter your mathematics marks \n");
    scanf("%f",&mathematics);
    printf("Enter your science marks \n");
    scanf("%f",&science);
    printf("Enter your english marks \n");
    scanf("%f",&english);

    total= mathematics+science+english ;
    average= total/3.0;

    printf("Total :%d\n",total);
    printf("Average :%.2d\n",average);

    if (100>average>80){
     grade = 'A';
    }
     else if  (79>average>70){
      grade = 'B';
     }
     else if (69> average>60){
      grade = 'C';
     }
     else if (59>average>50){
      grade = 'D';
     }
    else {
      grade = 'F';
     }
    if (mathematics>=40&& science>=40&& english>=40){
        result = "Pass";
    }
        else{
        result= "Fail";
    }



    return 0;
}
