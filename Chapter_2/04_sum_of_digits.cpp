#include <iostream>
using namespace std;

int digitSum(int num){
    int sum = 0;

    while(num > 0){
        int lastDigit = num % 10;
        num /= 10;
        sum += lastDigit;
    }
    return sum;
}

int main(){
    int num = 1456;

    cout << "Sum of digits is: " << digitSum(num);
    return 0;
}