#include <iostream>
using namespace std;

bool isPrime(int num){

    if(num <= 1){
        return false;
    }

    for(int i = 2; i < num; i++){
        if(num % i == 0){
            return false;
        }
    }

    return true;
}

void printPrime(int n){

    for(int i = 2; i <= n; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
}

int main(){

    int n = 20;

    cout << "Prime numbers up to " << n << " are: ";
    printPrime(n);

    return 0;
}