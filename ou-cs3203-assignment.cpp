#include <iostream>
#include <vector>
using namespace std;


int sum(vector<int> numbers){
    int sum=0;
    int vect_size = numbers.size();

    if (vect_size != 0){
        for (int i=0; i < vect_size; i++) {
            sum = sum + numbers[i];
        }
    }
    return sum;
}

