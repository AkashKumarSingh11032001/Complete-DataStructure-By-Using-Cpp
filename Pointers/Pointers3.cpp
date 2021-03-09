#include<iostream>
using namespace std;

int main(){
    //'a' and 'a[0]' have same adresss
    int a[10];
    cout<< a <<endl;
    cout<< &a[0] <<endl;

    
    

   a[0] = 5;
   a[1] = 10;
   cout<< *a <<endl; //as we discused in notes that(i,*a both will return same value)

   cout<< *(a+1) <<endl; //this proved that we can get ith ement by using any of these -> a[i] == *(a+i) == i[a] (just linking array with pointer I.M.P)
   
   //difference 1
   int *p = &a[0];
   cout<< a <<endl; //a -> a[0] by default
   cout<< p <<endl; //p -> &a[0]
   cout<< &a <<endl; //a -> &a
   cout<< &p <<endl; // here p locate different that a
   
   //difference 2
   cout<< sizeof(a) <<endl;
   cout<< sizeof(p) <<endl;

   //difference 3
   p = p+1; //allowed
   a = a+1 or a++; //not allowed array cant be increment




   return 0;
}