// array experiment; input array size and array from users;
//and linear search
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c;
    cout<< "enter the array size: "<<endl;
    cin >> c;
    int n[c];
    for(int i=0;i<c;i++)
    {
       cout<< "enter the "<< i <<" value of the array"<<endl;
       cin>>n[i];
    }
    //setw -> set width == create gap that are given;
    //numbers of characters; here 13 gap between
    cout<< "elements" <<setw(13)<<"value"<< endl;

    for(int i=0;i<c;i++)
    {
        cout<< setw(7)<<i <<setw (13) << n[i]<<endl;
    }

    cout<<"enter the searching value: " <<endl;
    int s;cin>>s;


    //linear search
    for (int i=0;i<c;i++)
    {
        if(n[i]==s)
        {
            cout<<"Target match, value found"<<endl;
        }
        else if(i==c-1 && n[i]!=s )
            //if we reached our last value and still not-
            //find the desire value, value should not exist-
            //in the array
        {
            cout<<"Target missed, value not found"<<endl;
        }

    }
    return 0;
}
