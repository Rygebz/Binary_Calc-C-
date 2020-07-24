#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

long long decimal_binary(int);
int binary_decimal(long long);
long long decimal_octal(int);
int octal_decimal(long long);

int main()
{
    cout << "Hello into Binary_calculator!" << endl;
    int x, binary_number, number_binary, number_octal, octal_number, number_hex;
    char op;
    std::cout << "\n Enter an operation:";
    std::cout << "\n 1 - Decimal to Binary, \n 2 - Binary to Decimal, \n 3 - Decimal to Octal, \n 4 - Octal to Decimal: ";
    std::cin >> op;
    std::cout << "\n Enter number: ";
    std::cin >> x;
    while(op == '1')
    {
        number_binary = decimal_binary(x);
        cout << x << " in decimal = " << number_binary << " in binary" << endl;
    break;
    }
    while(op == '2')
    {
        binary_number = binary_decimal(x);
        cout << x << " in binary = " << binary_number << " in decimal" << endl;
    break;
    }
    while(op == '3')
    {
        number_octal = decimal_octal(x);
        cout << x << " in decimal = " << number_octal << " in octal" << endl;
    break;
    }
    while(op == '4')
    {
        octal_number = octal_decimal(x);
        cout << x << " in octal = " << octal_number << " in decimal" << endl;
    break;
    }
    return 0;
}

// Decimal to Binary
long long decimal_binary(int x)
{
    long long number_binary = 0;
    int creator, i = 10;
    while(x != 0)
    {
        creator = x%2;
        x /= 2;
        number_binary += creator * i;
        i *= 10;
    }
    return number_binary;
}

// Binary to Decimal
int binary_decimal(long long x)
{
    int decimal_number = 0, i = 0, creator;
    while(x != 0)
    {
        creator = x%10;
        x /= 10;
        decimal_number += creator*pow(2, i);
        ++i;
    }
    return decimal_number;
}

// Decimal to Octal
long long decimal_octal(int x)
{
    long long number_octal = 0;
    int creator, i = 1;
    while(x != 0)
    {
        creator = x%8;
        x /= 8;
        number_octal += creator * i;
        i *= 10;
    }
    return number_octal;
}

// Octal to Decimal
int octal_decimal(long long x)
{
    int decimal_number = 0, i = 0, creator;
    while(x != 0)
    {
        creator = x%10;
        x /= 10;
        decimal_number += creator*pow(8, i);
        ++i;
    }
    return decimal_number;
}
