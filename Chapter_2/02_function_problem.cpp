#include <iostream>
using namespace std;

// Sum of first N natural numbers
int sum(int n){
    int s = 0;
    for(int i=0; i<=n; i++){
        s += i;
    }
    return s;
}

int main(){
    
    cout << "Som of first n num is: " << sum(50);
    return 0;
}