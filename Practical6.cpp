#include <iostream>  
using namespace std;  
  
  
void getnum(double &num1, double &num2) {  
    cout << "Enter the first number: ";  
    cin >> num1;  
    cout << "Enter the second number: ";  
    cin >> num2;  
}  
  
  
double divnum(double a, double b) {  
    if (b == 0) {  
        throw 0.0 ;  
    }  
    return a / b;  
}  
  
int main() {  
    double num1, num2, result ;  
  
    getnum(num1, num2);    
  
    try {  
        result = divnum(num1, num2);   
        cout << "Result of division: " << result << endl;  
    }  
    catch (double k) {  
        cout << "Exception caught:Divide by zero is Not allowed " << endl;  
    }  
  
    return 0;  
}

