//
//  converter.c
//  Converter
//
//  Created by Ben Tilden on 2018-10-08.
//  Copyright © 2018 Ben Tilden. All rights reserved.
//

#include <stdio.h>

void kilometer_mile(void);
void meter_feet(void);
void centimeter_inch(void);
void celsius_fahrenheit(void);

int main()
{
    int inputValue = 0;
    printf("\nType 1 to convert from Kilometers to Miles\n"
           "Type 2 to convert from Meters to Feet\n"
           "Type 3 to convert from Centimetre to Inch\n"
           "Type 4 to convert from Celsius to Fahrenheit\n"
           "Type 5 to quit the program\n\n");
    scanf(" %d", &inputValue);
    switch (inputValue) {
        case 1:
            kilometer_mile();
            break;
        case 2:
            meter_feet();
            break;
        case 3:
            centimeter_inch();
            break;
        case 4:
            celsius_fahrenheit();
            break;
        case 5:
            return 0;
        default:
            printf("Invalid entry.");
            main();
    }
}

void kilometer_mile()
{
    char inputChar;
    double kilometers = 0;
    double miles = 0;
    printf("\nTo convert from Kilometers to Miles enter 'K'\n"
           "To convert from Miles to Kilometers enter 'M'\n\n");
    scanf(" %c", &inputChar);
    if(inputChar == 'K'){
        printf("\nEnter kilometers: \n");
        scanf(" %lf", &kilometers);
        miles = kilometers/1.609;
        printf("\n%lf kilometers is equal to %lf miles \n", kilometers, miles);
        main();
    }
    else if(inputChar == 'M'){
        printf("\nEnter miles: \n");
        scanf(" %lf", &miles);
        kilometers = miles * 1.609;
        printf("\n%lf miles is equal to %lf kilometers \n", miles, kilometers);
        main();
    }
    else{
        printf("You have entered an invalid character. \n");
        kilometer_mile();
    }
}

void meter_feet()
{
    char inputChar;
    double meters = 0;
    double feet = 0;
    printf("\nTo convert from Meters to Feet enter 'M'\n"
           "To convert from Feet to Meters enter 'F'\n\n");
    scanf(" %c", &inputChar);
    if(inputChar == 'M'){
        printf("\nEnter meters: \n");
        scanf(" %lf", &meters);
        feet = meters * 3.281;
        printf("\n%lf meters is equal to %lf feet \n", meters, feet);
        main();
    }
    else if(inputChar == 'F'){
        printf("\nEnter feet: \n");
        scanf(" %lf", &feet);
        meters = feet/3.281;
        printf("\n%lf feet is equal to %lf meters \n", feet, meters);
        main();
    }
    else{
        printf("You have entered an invalid character. \n");
        meter_feet();
    }
}

void centimeter_inch()
{
    char inputChar;
    double centimeters = 0;
    double inches = 0;
    printf("\nTo convert from Centimeters to Inches enter 'C'\n"
           "To convert from Inches to Centimeters enter 'I'\n\n");
    scanf(" %c", &inputChar);
    if(inputChar == 'C'){
        printf("\nEnter centimeters: \n");
        scanf(" %lf", &centimeters);
        inches = centimeters/2.54;
        printf("\n%lf centimeters is equal to %lf inches \n", centimeters, inches);
        main();
    }
    else if(inputChar == 'I'){
        printf("\nEnter inches: \n");
        scanf(" %lf", &inches);
        centimeters = inches*2.54;
        printf("\n%lf inches is equal to %lf centimeters \n", inches, centimeters);
        main();
    }
    else{
        printf("You have entered an invalid character. \n");
        centimeter_inch();
    }
}

void celsius_fahrenheit()
{
    char inputChar;
    double celsius = 0;
    double fahrenheit = 0;
    printf("\nTo convert from Celsius to Fahrenheit enter 'C'\n"
           "To convert from Fehrenheit to Celsius enter 'F'\n\n");
    scanf(" %c", &inputChar);
    if(inputChar == 'C'){
        printf("\nEnter temperature in degrees Celsius: \n");
        scanf(" %lf", &celsius);
        fahrenheit = (celsius*1.8)+32;
        printf("\n%lf degrees Celsius is equal to %lf degrees Fahrenheit \n", celsius, fahrenheit);
        main();
    }
    else if(inputChar == 'F'){
        printf("\nEnter temperature in degrees Fahrenheit: \n");
        scanf(" %lf", &fahrenheit);
        celsius = (fahrenheit-32)/1.8;
        printf("\n%lf degrees Fahrenheit is equal to %lf degrees Celsius \n", fahrenheit, celsius);
        main();
    }
    else{
        printf("You have entered an invalid character. \n");
        celsius_fahrenheit();
    }
}








