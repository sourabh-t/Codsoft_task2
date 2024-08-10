#include<iostream>
using namespace std;

int main() {
    
    float num1, num2;

    cout <<"Enter 1st number "<<endl;
    cin >> num1;

    cout<<"Enter 2nd number " <<endl;
    cin >> num2;

    char op;
    cout<<"Enter the Operation you want to perform :" <<endl;
    cin >> op;

    switch( op ) {

        case '+':  cout <<"Sum of num1 and num2 is " << (num1+num2) <<endl; 
                  break;

        case '-': cout<<"Difference of num1 and num2 is " << (num1-num2) <<endl;
                  break;  

        case '*': cout<<"Multiplication of num1 and num2 is " << (num1*num2) <<endl;
                  break;

        case '/': cout<<"Division of num1 and num2 is " << (num1/num2) <<endl;
                  break;

        default: cout<<"INVALID OPERATION !! please select from (+,-,*,/)"<< endl;
    }
    return 0;
}
