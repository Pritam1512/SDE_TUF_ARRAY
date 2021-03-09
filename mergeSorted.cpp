#include<bits/stdc++.h>
using namespace std;

// merge two sorted array without using extra space

void mergeArray(int arr1[],int arr2[],int n,int m)
{
    int i=0;
    int j=0;

    while(i<n)
    {
        if(arr1[i] < arr2[j])
        {
            i++;
        }
        else if(arr1[i] >= arr2[j])
        {
            swap(arr1[i],arr2[j]);
            sort(arr2,arr2+m);
        }
    }
    for(int i=0;i<n;i++)cout << arr1[i] << " ";
    cout << "" << endl;
    for(int i=0;i<m;i++)cout << arr2[i] << " ";

}

int main()
{
    int arr1[]={1,5,9,10,15,20};
    int arr2[]={2,3,8,13};

    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    mergeArray(arr1,arr2,n,m);
    return 0;
}