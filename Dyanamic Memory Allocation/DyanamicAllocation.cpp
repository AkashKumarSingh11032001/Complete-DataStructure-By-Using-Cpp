#include <iostream>
using namespace std;

// DMA:(help to create memory in 'Heap' rather than 'Stack')
    // int *p = new int;

int main(){

    int *p = new int;
    *p = 10;
    cout << *p <<endl;
}