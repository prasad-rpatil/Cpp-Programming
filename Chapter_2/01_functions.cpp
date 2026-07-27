#include <iostream>
using namespace std;

// Call by value function type, copy of the arguments is passed to the function
int sum(int a, int b){
    int s = a + b;
    return s;
}

int minOfTwoNum(int a, int b){
    if(a < b){
        return a;
    }else{
        return b;
    }
}

int main(){
    int x = 5, y = 4;
    cout << "Sum is: " << sum(x,y) << endl;

    cout << "Min is: " << minOfTwoNum(1,5);
    return 0;
}