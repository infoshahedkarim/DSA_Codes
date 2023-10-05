#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int a,int bs[],int key)
{
    int s = 0;
    int e = a;
    int mid = (s+e)/2;
    while(s<=e)
    {
        if(key==bs[mid])
        {
            cout<<"The desire value found"<<endl;
            return 0;
        }
        else if(key>bs[mid])
        {
            s = mid;

        }
        else
        {
            e =mid;

        }
        mid = (s+e)/2;
    }
    cout<<"The desire value found"<<endl;
    return 0;

}

int main ()
{
    int a;
    cin>>a;
    int bs[a];
    for(int i=0;i<a;i++)
    {
        cin>>bs[i];
    }
    int key;
    cin>> key;
    BinarySearch(a,bs,key);
}


