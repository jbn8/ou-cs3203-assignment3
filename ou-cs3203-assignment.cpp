#include <iostream>
#include <vector>
using namespace std;



void printArray(vector<int>numbers){
    int vect_size = numbers.size();

    for (int i=0; i < vect_size; i++){
        cout<< numbers[i]<< " ";
    }
}

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

int product(vector<int> numbers){

    int vect_size = numbers.size();
    int product =1;

    if (vect_size != 0){
        for (int i=0; i < vect_size; i++) {
            product = product * numbers[i];
        }
    }
    else{
        product=0;
    }
    return product;
}

void reverse(vector<int>number){
    reverse(number.begin(), number.end());

    // print the reversed vector
    printArray(number);
}

int main() {

    vector<int> numbers; // inserts value at the last position

    int val;
    cout<< " Enter your value -1 to quit: " << '\n';

    cin >> val;

    while(val != -1) {

        numbers.push_back(val);
        cout<< " Enter your value -1 to quit: " << '\n';
        cin >> val;
    }

    cout<< "The array: " ;
    printArray(numbers);
    cout<<'\n';

    cout<< "Sum: "<< sum(numbers)<<'\n';
    cout<< "Product: "<<product(numbers) << '\n';


    reverse(numbers);
    cout<<"The reversed array: "<< '\n';

    return 0;
}