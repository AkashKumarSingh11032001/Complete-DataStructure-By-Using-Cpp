#include <iostream>
#include<math.h>
using namespace std;

// DMA:(help to create memory in 'Heap' rather than 'Stack')
    // int *p = new int;

int main(){

    int *p = new int;
    *p = 10;
    cout << *p <<endl;


    // Array allocation
    int *pa = new int[50];

    //eg.
    int n;
    cout << "Enter the number of elemt want :";
    cin >> n;
    int *pa2 = new int[n];
    for(int i =0; i<n;i++){
        cin>>pa2[i];
    }
    
    int max = -1;
    for(int i =0;i<n;i++){
        if(max < pa2[i]){
            max = pa2[i];
        }
    }
    cout << max <<endl;

    delete pa2; //releaseing interger pointed by pa2(remember we are not deleting pa2 just deleting where its points.)
    delete pa;
    delete p;
}