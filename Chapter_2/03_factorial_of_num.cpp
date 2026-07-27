#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    if(n == 0){
        return 1;
    }
        if(n < 0){
        return -1;
    }
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n;
    cout << "Enter a number to get its factorial: ";
    cin >> n;

    if(factorial(n) == -1){
        cout << "Factorial is not defined for negative numbers.";
    }else{
        cout << "Factorial of number " << n << " is: " << factorial(n);
    }
    return 0;
}