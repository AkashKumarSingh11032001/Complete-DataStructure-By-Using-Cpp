#include <iostream>
using namespace std;
// Refrence meaning original value will be changed

void increment(int& n){
    n++;
}

//bad practise
int& f(int n){
    int a = n
    return a;
}

int main(){
    // Pass by value (copy of value given to other)

    int i = 10;
    int j = i;
    i++;
    cout << i <<endl;
    cout << j <<endl;
    cout << "*********"<<endl;

    // Pass by reference (original value given to other both pointing to same adress)
 
    int x = 10;
    int &y = x; // declare y as refrence variable
    x++;
    cout << x <<endl;
    cout << y <<endl;
    cout << "*********"<<endl;

    // pass by refrence in function
    int a = 10;
    cout<< a <<endl;
    increment(a);
    cout<<  a <<endl;

    // reciveing reference function(bad pracctise)
    int b = 5;
    int& k = f(b);



}