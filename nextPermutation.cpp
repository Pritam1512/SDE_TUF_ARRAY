#include<bits/stdc++.h>
using namespace std;

void next_per(int arr[],int n)
{
    int j=n-1;
    while(arr[j] <arr[j-1])//from back find the element such tha arr[j] > arr[j-1]
    {
        j--;
    }
    int t = j-1;
    j=n-1;

    while(arr[j]<arr[t])//from back find out first number which are greater than arr[t]
    {
        j--;
    }
    swap(arr[j],arr[t]);

    reverse(arr+t+1,arr+n);

    for(int i=0;i<n;i++)
    {
        cout<< arr[i] << " ";
    }


}

int main()
{
    int arr[]={1,3,5,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);

     next_per(arr,n);
    // for(int i=0;i<n;i++) cout << arr[i] << " ";
    return 0;
}