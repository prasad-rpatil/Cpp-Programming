#include <iostream>
#include <climits>
using namespace std;

int main(){
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i=0; i<size; i++){ //min, max
        if(nums[i] < smallest){
            smallest = nums[i]; //Using min function "smallest = min(nums[i], smallest")
        }
    }

     for(int i=0; i<size; i++){ //min, max
        if(nums[i] > largest){
            largest = nums[i]; //Using min function "largest = max(nums[i], largest")
        }
    }
    cout << "Smallest number is: " << smallest << endl;
    cout << "Largest number is: " << largest << endl;
    return 0;
}