#include <stdio.h>
#include <string.h>
void print_phrase(float temperature, char conversion);
int main(){
    float temperature;
    char scale[20];
    char conversion[20];
    printf("What scale is your temperature? (Enter Fahrenheit, Celsius, or Kelvin): ");
    scanf("%19s", scale)
    printf("What is the temperature in that scale?: ");
    scanf("%d", temperature)
    printf("What would you like to convert that temperature to? (Enter Fahrenheit, Celsius, or Kelvin): ");
    scanf("%19s", conversion)
    print_phrase(temperature, conversion, scale)
    /*Garner user input and initialize what variables will be being used in the main function*/
    }



void print_phrase(float temperature, char conversion, char scale){
    float new_temp;
    float celsius_temp;
    if (strcmp(conversion, "Kelvin") == 0){
        if (strcmp(scale, "Celsius") == 0){
            celsius_temp = temperature;
            new_temp = temperature + 273.15;
            printf("Your Celsius temperature in Kelvin is %f\n", new_temp);
        } else if (strcmp(scale, "Fahrenheit") == 0){
            celsius_temp = (temperature -32) * (5/9);
            new_temp = celsius_temp + 273.15;
            printf("Your Fahrenheit temperature in Kelvin is %f\n", new_temp);
        }/*account for the cases where we have to convert to kelvin from celsius or fahrenheit*/
    } else if (strcmp(conversion, "Celsius") == 0){
        if (strcmp(scale, "Fahrenheit") == 0){
            celsius_temp = (temperature -32) * (5/9);
            new_temp = celsius_temp;
            printf("Your Fahrenheit temperature in Celsius is %f\n", new_temp);
            
        } else if(strcmp(scale, "Kelvin" == 0)){
            celsius_temp = temperature - 273.15;
            new_temp = celsius_temp;
            printf("Your Kelvin temperature in Celsius is %f\n", new_temp);
        }/*account for the cases where we hvae to convert to celsius from kelvin or fahrenheit*/
    }else if (strcmp(conversion, "Fahrenheit") == 0){
        if (strcmp(scale, "Celsius") == 0){
            celsius_temp = temperature;
            new_temp = (temperature * (9/5)) + 32;
            printf("Your Celsius temperature in Fahrenheit is %f\n", new_temp);
        } else if(strcmp(scale, "Kelvin") == 0){
            celsius_temp = temperature - 273.15;
            new_temp = (celsius_temp * (9/5)) + 32;
            printf("Your Kelvin temperature in Fahrenheit is %f\n", new_temp);
        }/*account for the cases where we have to convert to fahrenheit from celsius or kelvin*/

    }
    if (celsius_temp < 0){
        printf("Stay indoors, it is literally freezing");
    } else if (0 <= celsius_temp <= 10){
        printf("Kinda chilly, make sure to wear a jacket gang");
    } else if (10 < celsius_temp <= 25){
        printf("Pretty comftorable, where whatever I guess");
    } else if (celsius_temp > 25){
        printf("Quite hot, I would stay inside where there's AC");
    }/*print phrases based off the temperature utilizing the celsius variable that was found earlier*/
}