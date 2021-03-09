#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,3,4,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    //method 1
    //sort the array 
    // tc - o(nlogn)+o(n)

    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i] == arr[i-1])
        cout << arr[i] << endl;
    }

    //method 2
    //without modifying the array

    for(int i=0;i<n;i++)
    {
        int x = abs(arr[i]);
        if(arr[x] > 0) arr[x] *= -1;
        else 
        {
            cout << x << endl;
            break; 
        }
    }

    return 0;
}