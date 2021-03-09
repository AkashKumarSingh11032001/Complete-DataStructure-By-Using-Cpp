#include <iostream>
using namespace std;

int main()
{

    int a[] = {1, 2, 3};
    char b[] = "abc";

    cout << a << endl; //adress of a (or a[0])
    cout << b << endl; //printed content

    char *c = &b[0];
    cout << c << endl;

    char c1 = 'a';
    char *pc = &c1;

    cout << c1 << endl;
    cout << pc << endl; //print a then garbage until it met withnull charater

    char str[] = "abcde"; //first create temp memory then permant adress
    char *pstr = "abcde"; //wrong point to temp adress

    return 0;
}