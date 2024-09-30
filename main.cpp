#include <iostream>
#include <cmath>

// Function declarations
long long decimal_to_binary(int);
int binary_to_decimal(long long);
long long decimal_to_octal(int);
int octal_to_decimal(long long);

int main()
{
    std::cout << "Welcome to the Number System Converter!" << std::endl;

    int number;
    char option;
    
    std::cout << "\nChoose an operation:\n";
    std::cout << "1 - Decimal to Binary\n";
    std::cout << "2 - Binary to Decimal\n";
    std::cout << "3 - Decimal to Octal\n";
    std::cout << "4 - Octal to Decimal\n";
    std::cout << "Enter your choice (1/2/3/4): ";
    std::cin >> option;

    std::cout << "\nEnter the number: ";
    std::cin >> number;

    switch(option) {
        case '1': {
            long long binary = decimal_to_binary(number);
            std::cout << number << " in decimal = " << binary << " in binary\n";
            break;
        }
        case '2': {
            int decimal = binary_to_decimal(number);
            std::cout << number << " in binary = " << decimal << " in decimal\n";
            break;
        }
        case '3': {
            long long octal = decimal_to_octal(number);
            std::cout << number << " in decimal = " << octal << " in octal\n";
            break;
        }
        case '4': {
            int decimal = octal_to_decimal(number);
            std::cout << number << " in octal = " << decimal << " in decimal\n";
            break;
        }
        default:
            std::cout << "Invalid option selected!" << std::endl;
    }

    return 0;
}

// Decimal to Binary conversion
long long decimal_to_binary(int decimal) {
    long long binary = 0;
    int remainder, i = 1;
    
    while (decimal != 0) {
        remainder = decimal % 2;
        decimal /= 2;
        binary += remainder * i;
        i *= 10;
    }
    return binary;
}

// Binary to Decimal conversion
int binary_to_decimal(long long binary) {
    int decimal = 0, remainder, i = 0;
    
    while (binary != 0) {
        remainder = binary % 10;
        binary /= 10;
        decimal += remainder * pow(2, i);
        ++i;
    }
    return decimal;
}

// Decimal to Octal conversion
long long decimal_to_octal(int decimal) {
    long long octal = 0;
    int remainder, i = 1;
    
    while (decimal != 0) {
        remainder = decimal % 8;
        decimal /= 8;
        octal += remainder * i;
        i *= 10;
    }
    return octal;
}

// Octal to Decimal conversion
int octal_to_decimal(long long octal) {
    int decimal = 0, remainder, i = 0;
    
    while (octal != 0) {
        remainder = octal % 10;
        octal /= 10;
        decimal += remainder * pow(8, i);
        ++i;
    }
    return decimal;
}
