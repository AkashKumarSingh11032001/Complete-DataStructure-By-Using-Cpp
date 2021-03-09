#include <iostream>
using namespace std;

void print(int *p)
{ //passing pointer into function( pass by value[copy])
    cout << *p << endl;
}

void incrementpointer(int *p)
{
    p = p + 1;
}

void incrementptr(int *p)
{
    (*p)++;
}

int sum(int *a, int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans += 1;
    }
    return ans;
}


int main()
{
    // *************1**************
    int i = 10;
    int *p = &i;

    print(p);

    //pass by value
    cout << p << endl;
    incrementpointer(p);
    cout << p << endl;

    // in this case we are changing the value of which 'p' point
    cout << *p << endl;
    incrementptr(p);
    cout << *p << endl;

    //*****************2**************
    //passing array as a pointer i.m.p
    int a[10];
    cout << sizeof(a) << endl;
    cout << sum(a, 10) << endl;
    //sending part of array
    cout << sum(a + 3, 10) << endl;
}