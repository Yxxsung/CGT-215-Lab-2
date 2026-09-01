// Sophia Alexander
// CGT 215 Lab 2
// 09/01/26

#include <iostream>

//tells the complier you want to be in standard library namespace, allowing use of cout and cin
using namespace std;

int main()
{
    //variable declarations
    float A;
    float B;
    float X;

    //Initial Welcome Prompt and Purpose Statement
    cout << "Welcome! I am trying to solve Ax + B for x, but I need values to get started! Can you help? " << endl;

    //Prompts for float A
    cout << "Please enter the desired value for A: ";
    cin >> A;
    cout << "A = " << A << endl;

    //B = statement and output
    cout << "Please enter a vlaue for B: ";
    cin >> B;
    cout << "B = " << B << endl;

    //Finding X and then displaying it
    X = -(B) / A;
    cout << "The value of X is " << X;
    //Testing Values 3 and 9 should output -3
}

