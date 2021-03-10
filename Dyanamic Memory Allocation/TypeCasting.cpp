#include <iostream>
using namespace std;

int main(){

    int i = 65;
    char c = i;
    cout<< c<<endl; // out: A

    int *p = &i;
    //char *pc = p; //implecit typecasing
    char *pc = (char*)p; //expict typecasting
    cout<< *p<<endl; // out: 65
    cout<< *pc<<endl; // out: A
    cout<< *(pc+1)<<endl; // out: null
    cout<< *(pc+2)<<endl; // out: null
    cout<< *(pc+3)<<endl; // out: null

    cout<< p <<endl;  // out: adress of i
    cout<< pc <<endl; // go to particular position and read value until encounter with '\0'

}