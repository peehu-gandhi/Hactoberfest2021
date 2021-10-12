#include <iostream>
using namespace std;
// here we have covered the usage of Arithmetic and Increment and Decrement operator by implementing them in a switch case statement
int main()
{
    int num1, num2, choice;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter a choice : \n"
         << "1.Addition \n"
         << "2.Subtraction \n"
         << "3.Division \n"
         << "4.Multiplication \n"
         << "5.Remainder \n"
         << "6. Prefix increment (only value of 1st number is manipulated) \n"
         << "7.Postfix increment (only value of 1st number is manipulated)\n"
         << "8.Prefix decrement (only value of 1st number is manipulated)\n"
         << "9.Postfix decrement (only value of 1st number is manipulated)\n";
    cout << "Enter your choice : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << num1 << "+" << num2 << "=" << num1 + num2;
        break;
    case 2:
        cout << num1 << "-" << num2 << "=" << num1 - num2;
        break;
    case 3:
        cout << num1 << "/" << num2 << "=" << num1 / num2;
        break;
    case 4:
        cout << num1 << "*" << num2 << "=" << num1 * num2;
        break;
    case 5:
        cout << num1 << "%" << num2 << "=" << num1 % num2;
        break;
    case 6:
        cout << ++num1;
        break;
    case 7:
        cout << num1++;
        break;
    case 8:
        cout << --num1;
        break;
    case 9:
        cout << num1--;
        break;
    default:
        cout << "Sorry wrong choice input, try again";
        break;
    }

    return 0;
}
