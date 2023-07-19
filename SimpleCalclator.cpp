
#include <iostream>
using namespace std;
int main()
{
    char op;
    float num1, num2;
    cout<<"enter the operator";
    // i.e. +, -, *, /
    cin >> op;
    
    cout<<"enter the numbers";
    // taking number from the user
    cin >> num1 >> num2;
 
    // performing operation as per the case 
    switch (op)
    {       
        // If user enter +
        case '+':
            cout << num1 + num2;
            break;
         
        // If user enter -
        case '-':
            cout << num1 - num2;
            break;
         
        // If user enter *
        case '*':
            cout << num1 * num2;
            break;
         
        // If user enter /
        case '/':
            cout << num1 / num2;
            break;
         
        // If the operator is other than +, -, * or /
        default:
            cout << "Error! operator is not correct";
            
    }
 
    return 0;
}
