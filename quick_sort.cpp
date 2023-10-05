#include<bits/stdc++.h>
using namespace std;

int partitions(int arr[],int l, int r)
{
    int pivot = arr[r];
    int i = l-1;

    for(int j=l;j<r;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[r]);
    return i+1;
}

int quickSort(int arr[],int l, int r)
{
    if(l<r)
    {
        int pi = partitions(arr,l,r);
        quickSort(arr,l,pi-1);
        quickSort(arr,pi,r);

    }
}

int main()
{
    int n;cin>>n;//6
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // ^ arr[]={77,71,54,84,91,49} -> l=0 to r=5
    quickSort(arr,0,n-1);//arr,l,r
    for(int i;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
