#include<stdio.h>

#include<conio.h>

int main(){
    int length , breadth , radius, celsius, principal , Rate, Time;
    float pi = 3.14;
    printf("\t\t\t\t=======*Welcome to my first own program*=======\n");

    printf("\t\t\t\t========================\n");
    printf("\t\t\t\t* Rectangle*\n");
    printf("\t\t\t\t========================\n");

    printf("\t\t\t\t========Area of Rectangle\n");
    printf("Enter the length of rectangle\n");
    scanf("%d",&length);

    printf("Enter the breadth of rectangle\n");
    scanf("%d",&breadth);

    printf("The area of rectangleis %d\n", length * breadth);

    printf("\t\t\t\t ======Perimeter of Rectangle=====\n");

    printf("Enter the length of reactangle\n");
    scanf("%d",&length);

    printf("Enter the breadth of rectangle\n");
    scanf("%d",&breadth);

    printf("The Perimeter of rectangle is %d\n", 2 * (length + breadth));

    printf("\t\t\t\t\t=================\n");
    printf("\t\t\t\t\t* Circle * \n");
    printf("\t\t\t\t\t==================\n");

    printf("\t\t\t\t\t====Area of circle===\n");
    printf("Enter the radius of circle\n");
    scanf("%d",&radius);

    printf("The area of circel is %f\n", pi * radius * radius);
    
    printf("\t\t\t\t\t=================\n");
    printf("\t\t\t\t\t* Temperature*\n");
    printf("\t\t\t\t\t=================\n");

    printf("\t\t\t\t\t====Celsius , Farenheit===\n");
    printf("Enter the Celsius\n");
    scanf("%d",&celsius);

    printf("The Faenheit is %d\n", (celsius * 9/5)+32);

    printf("\t\t\t\t====================\n");
    printf("\t\t\t\t*Calculate SI\n*");
    printf("\t\t\t\t====================\n");

    printf("Enter the principal\n");
    scanf("%d",&principal);

    printf("Enter the Rate\n");
    scanf("%d",&Rate);

    printf("Enter the Time\n");
    scanf("%d",&Time);

    printf("The Si is %d\n",(principal * Rate * Time)/100);
    printf("\t\t\t\t\t\t*====Thanks for visit*====\n");
    
    getch();
    return 0;
}