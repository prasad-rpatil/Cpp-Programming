#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

    cout << "Size =" << vec.size() << endl;
    cout << "Character is at = " << vec.at(2) << endl;

    for(char val : vec){
        cout << val << " ";
    }
    return 0;
}