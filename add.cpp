#include <iostream>
using namespace std;
//main fuction
int main()
{
    int first_Number, second_Number, sumOfTwo_Numbers;
    
    cout << "Enter two integers: ";
    cin >> first_Number >> second_Number;

    // sum of two numbers in stored in variable sumOfTwoNumbers
    sumOfTwo_Numbers = first_Number + second_Number;

    // Prints sum of two Numbers 
    cout << first_Number << " + " <<  second_Number << " = " << sumOfTwo_Numbers;     

    return 0;
}
