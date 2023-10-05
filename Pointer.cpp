#include<bits/stdc++.h>
using namespace std;

int main ()
{

    int a= 10;

    int* b=&a;
    cout<< b <<endl;//->we will get (a)'s  address
    cout<< "a = "<< *b <<endl;//->we will get (a)'s  value

    *b = 155;
    cout<<"a = "<< a <<endl;

    // in array, array will also a specific type of pointers, point
    //just first index array, and arithmetic operation will not work

    int arr[]={10,21,32,12,22} ;
    cout<< *arr <<endl;

    int* ptr = arr;// array nijei address hold kore so &arr likher
                  // dorker nei
    for(int i=0;i<5;i++)
    {
        cout<< *ptr <<endl;
        ptr++;
    }
    // we can do one more thing
    for(int i=0;i<5;i++)
    {
        cout<< *(arr+i) <<endl;// arr is a indexing pointer, so arr+i means
                              // its point next index of the array element
        //arr++; -> illegal
    }

    int** c = &b;// pointer b er address k point korbe
    **c = 109;// * ekbar pointer korle b er value te access pabe
             // ** duibar point korle b jake point kore ache tar access pabe.
    cout<<"a = "<< a<<endl;
}

