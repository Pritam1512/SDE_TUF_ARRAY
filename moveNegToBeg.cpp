#include<bits/stdc++.h>
using namespace std;

//move negative to the begining of array without changing the order
//with constant extra space(whenevr constant extra space is written
//  it means we have to do it by swaps only)
//  { -1, -5, 2, 3, 4, 6, -7, 8, 9 };
//         !!
//         ij


// op = { -1 -3 -7 2 4  6  8 9 }
void negToBeg(int arr[],int n)
{
    int i=0;//for first positive element;

    while(arr[i]<0)i++;
    while(i<n)
    {
        int j=i;
        while(arr[j]>0 && j<n)j++;
        while(j>i && j<n)
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
        i++;
    }

    for(int i=0;i<n;i++) cout << arr[i] << " ";

}

int main()
{
    int arr[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(arr)/sizeof(arr[0]);

    negToBeg(arr,n);
    return 0;   
}