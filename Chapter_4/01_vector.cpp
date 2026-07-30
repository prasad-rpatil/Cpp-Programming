#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec1 (5,0);
    vector<char> vec2 = {'a', 'b', 'c', 'd', 'e'};

    for(int val : vec1){
        cout << val << endl;
    }

    for(char val : vec2){
        cout << val << endl;
    }
    return 0;
}