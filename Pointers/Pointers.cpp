#include<iostream>
using namespace std;

int main(){

    /* (1) 'i' , '*ptr1' -> point to same value (10)

    int i = 10;
    cout<< i <<endl;

    int *ptr1 = &i;      
    cout<< *ptr1 <<endl;

    */ 

    /*(2) checking whether i and *ptr are exact copy to each other 

    int i = 10;
    i++;
    int *ptr1 = &i;

    cout<< i <<endl;
    cout<< *ptr1 <<endl;

    */

   /*(3) never ever leave ptr variable undeclared, 
   always inislized with '0'(null pointer) inorder to get save from futher problem.

   int *ptr; -> int *ptr = 0;
   cout<< *ptr <<endl;

   */
    
    /*(4) increament the value by using ptr

    int i = 10;
    int *ptr1 = &i;  
    (*ptr1)++;    
    cout<< *ptr1 <<endl;

    */



   





    return 0;
}