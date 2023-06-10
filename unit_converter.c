/*

kms to miles
inches to feet
cms to inches
pound to kgs
inches to meters

*/
#include <stdio.h>

float km_to_miles(int num)
{
    return num * 0.62137119;
}
float inches_to_feet(int num)
{
    return num * 0.08333333;
}
float cms_to_inches(int num)
{
    return num * 0.39370079;
}
float pound_to_kgs(int num)
{
    return num * 0.45359237;
}
float inches_to_meters(int num)
{
    return num * 0.0254;
}

int main()
{
    int opt, num;
    printf("Welcome to my Unit converter !\n");
    printf("\t1. Convert Kilometers to Miles\n");
    printf("\t2. Convert Inches to Feet\n");
    printf("\t3. Convert Centimeters to Inches\n");
    printf("\t4. Convert Pound to Kilograms\n");
    printf("\t5. Convert Inches to Meters\n");
    printf("\t6. Exit or quit\n");
    while (1 == 1)
    {
        printf("Choose an option you want to use: \n");
        scanf("%d", &opt);
        if (opt == 1)
        {
            printf("Enter the value in kilometers: \n");
            scanf("%d", &num);
            printf("%d kilometers = %f miles\n\n", num, km_to_miles(num));
        }
        else if (opt == 2)
        {
            printf("Enter the value in inches: \n");
            scanf("%d", &num);
            printf("%d inches = %f feet\n\n", num, inches_to_feet(num));
        }
        else if (opt == 3)
        {
            printf("Enter the value in centimeters: \n");
            scanf("%d", &num);
            printf("%d centimeters = %f inches\n\n", num, cms_to_inches(num));
        }
        else if (opt == 4)
        {
            printf("Enter the value in pounds: \n");
            scanf("%d", &num);
            printf("%d pounds = %f kilograms\n\n", num, pound_to_kgs(num));
        }
        else if (opt == 5)
        {
            printf("Enter the value in inches: \n");
            scanf("%d", &num);
            printf("%d inches = %f meters\n\n", num, inches_to_meters(num));
        }
        else if (opt == 6)
        {
            printf("\nThanks for using my Unit converter!\n\n");
            break;
        }
        else
        {
            printf("\nInvalid option !!!\n\n");
        }
    }
    return 0;
}





