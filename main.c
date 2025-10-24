#include <stdio.h>
#include <stdbool.h>

int main() {
    // This is a comment, written at 2025-10-22
    printf("hello world!\n");
    printf("Learning C is awesome!\n");

    // integer (digit)
    int age = 30;
    int year = 2025;
    int quantity = 1;

    printf("You are %d years old.\n", age);
    printf("The year is: %d\n", year);
    printf("The quantity is: %d\n", quantity);

    // float (float point number)
    // convert years to months
    // 30 year x 12 months/years = 360 months
    // add the additional 10 months
    // 360 + 10 = 370 months

    float age_in_months = 370;
    float price = 29.90;
    float temperature = 21;

    printf("My age in months are %.0f\n", age_in_months);
    printf("The price is $%.1f\n", price);
    printf("The temperature is %.0f°C\n", temperature);

    // double is for decimal numbers with high precision
    double pi = 3.14159265358979;
    double e = 2.7182818284590;

    printf("The value of pi is: %.15lf\n", pi);
    printf("The value of e is: %.15lf\n", e);

    // char (character)
    char grade = 'A';
    char symbol = '&';
    char currency = '$';

    printf("Your grade is: %c\n", grade);
    printf("My favorite symbol is: %c\n", symbol);
    printf("The currency is: %c\n", currency);

    // char[] is kind of a string in C
    char sentence[] = "Hey! This is a string in C";
    char food[] = "cake";
    char email[] = "example@email.com";

    printf("Silas says: %s\n", sentence);
    printf("Cipor says: My favorite food is %s\n", food);
    printf("Send an email at: %s\n", email);

    // Boolean (true or false)
    bool isOnline = true;

    if (isOnline) {
        printf("You are ONLINE!");
    } else {
        printf("You are OFFLINE!");
    }

    return 0;
}
