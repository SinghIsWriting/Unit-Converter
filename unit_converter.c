#include <stdio.h>

// Defining a function that takes a number(in kilometers) and a number(in miles)
float km_to_miles(int num)
{
    return num * 0.62137119;
}

// Defining a function that takes a number(in inches) and a number(in feet)
float inches_to_feet(int num)
{
    return num * 0.08333333;
}

// Defining a function that takes a number(in centimeters) and a number(in inches)
float cms_to_inches(int num)
{
    return num * 0.39370079;
}

// Defining a function that takes a number(in pound) and a number(in kilogram)
float pound_to_kgs(int num)
{
    return num * 0.45359237;
}

// Defining a function that takes a number(in inches) and a number(in meters)
float inches_to_meters(int num)
{
    return num * 0.0254;
}

int main()
{
    // Declaring vriables
    int opt, num;
    printf("Welcome to my Unit converter !\n");
    printf("\t1. Convert Kilometers to Miles\n");
    printf("\t2. Convert Inches to Feet\n");
    printf("\t3. Convert Centimeters to Inches\n");
    printf("\t4. Convert Pound to Kilograms\n");
    printf("\t5. Convert Inches to Meters\n");
    printf("\t6. Exit or quit\n");

    // Implenting a while loop that will take input until user chooses 6th option
    while (1)
    {
        printf("Choose an option you want to use: \n");
        scanf("%d", &opt);
        // When user chooses to convert kilometer to miles
        if (opt == 1)
        {
            printf("Enter the value in kilometers: \n");
            scanf("%d", &num);
            printf("%d kilometers = %f miles\n\n", num, km_to_miles(num));
        }
        // When user chooses to convert inches to feet
        else if (opt == 2)
        {
            printf("Enter the value in inches: \n");
            scanf("%d", &num);
            printf("%d inches = %f feet\n\n", num, inches_to_feet(num));
        }
        // When user chooses to convert centimeters to inches
        else if (opt == 3)
        {
            printf("Enter the value in centimeters: \n");
            scanf("%d", &num);
            printf("%d centimeters = %f inches\n\n", num, cms_to_inches(num));
        }
        // When user choose to convert pounds to kilograms
        else if (opt == 4)
        {
            printf("Enter the value in pounds: \n");
            scanf("%d", &num);
            printf("%d pounds = %f kilograms\n\n", num, pound_to_kgs(num));
        }
        // When user choose to convert inches to meters
        else if (opt == 5)
        {
            printf("Enter the value in inches: \n");
            scanf("%d", &num);
            printf("%d inches = %f meters\n\n", num, inches_to_meters(num));
        }
        // When user choose to quit the program
        else if (opt == 6)
        {
            printf("\nThanks for using my Unit converter!\n\n");
            break;
        }
        // When user enters invalid input
        else
        {
            printf("\nInvalid option !!!\n\n");
        }
    }
    return 0;
}





