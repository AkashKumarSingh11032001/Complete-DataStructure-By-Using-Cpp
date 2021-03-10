#include <iostream>
using namespace std;

int increment1(int **p){ //call by value (chnage will not reflect)
    p = p+1;
}
int increment2(int **p){ //it will change the pointer p adress definetly
    *p = *p+1;
}
int increment3(int **p){ //it will change the value of i defietily
    **p = **p+1;
}
int main()
{
    int i= 10;
    int *p=&i;

    int **p2 = &p;
    
    //adress of p using p and p2
    cout<< &p << endl;
    cout<< p2 <<endl;

    //adress of i using p, p2
    cout<< p <<endl;
    cout<< *p2 <<endl;
    cout<< &i <<endl;
    
    //print the value
    cout<< i <<endl;
    cout<< *p <<endl;
    cout<< **p2 <<endl;

    //function calling
    cout << p2 <<endl;
    cout << increment1(p2) <<endl;
    cout << increment2(p2) <<endl;
    cout << increment3(p2) <<endl;

}