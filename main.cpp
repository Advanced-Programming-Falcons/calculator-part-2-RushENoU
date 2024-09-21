#include <iostream>
#include <cmath>
using namespace std;


double input1, input2;
char inputOperator;
    
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double times(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

double power(double a, double b) {
    return pow(a, b);
}

void userInput(){
    cout << "Enter your calculation (Example: 3+4, h = history, q = quit): " << endl;
    cin >> input1 >> inputOperator >> input2;
}




int main()
{
    bool done = false;
    double result;
    
    while (!done) {
        userInput();
        if (inputOperator == 'q'){
            done = true;
            break;
        }
        
        switch(inputOperator){
            case '+':
                result = add(input1, input2);
                break;
            case '-':
                result = subtract(input1, input2);
                break;
            case '*':
                result = times(input1, input2);
                break;
            case '/':
                result = divide(input1, input2);
                break;
            case '^':
                result = power(input1, input2);
                break;
            default:
            cout << "Bad Input" << endl;
            break;
        }
        
        cout << "Result: " << result << endl;
        
    }
    return 0;
}
