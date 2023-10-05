#include<bits/stdc++.h>
using namespace std;

int Merge(int arr[], int l, int mid, int r)// l=0;mid=2;r=5
{
    int n1=mid-l+1; // n1=2-0+1 =3
    int n2=r-mid;//n2=5-2 = 3

    int a[n1];//a[3]
    int b[n2];//b[3]

    for(int i=0;i<n1;i++)
    {
        a[i]=arr[l+i];//a[0] = arr[0+0/1/2] -> 77,71,54
    }
    for (int i=0;i<n2;i++)
    {
        b[i]=arr[mid+1+i];//b[0] = arr[2+1+0/1/2] -> 84,91,49
    }

    //6 to 19 lines doing a specific tasks, initializing the
    // separated value in a new array a and b.

    // when every value is separated then the following function
    //will work. [77] [71]  [54]     [84] [91]  [49]

    int i=0,j=0,k=l;//l=0 if we don't put l in k, then when we divide and
    //concord then the system will failed cause l is vary depending on how we
    //divide the array.

    while(i<n1 && j<n2) //i=0<n1=3 ; j=0<n2=3
    {
        //merging the array after compare the value
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            i++;k++;
        }
        else
        {
            arr[k]= b[j];
            j++;k++;
        }
    }
    while (i<n1)// if the merging of j is finished before i
    {
        arr[k]=a[i];
        i++;k++;
    }
    while(j<n2)// if the merging of i is finished before j
    {
        arr[k]=b[j];
        j++;k++;
    }
}

int mergeSort(int arr[],int l,int r) // l=0;r=5;
{
    if(l<r)//0<5 -> true
    {
        int mid=(l+r)/2;// mid = 5/2 ==2
        mergeSort(arr,l,mid);//l=0 ; mid =2 || sub array calling...
        mergeSort (arr,mid+1,r);//mid+1 = 3 ; r =5
        Merge(arr,l,mid,r);// l=0;mid=2;r=5
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
    mergeSort(arr,0,n-1);//arr,l,r
    for(int i;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
