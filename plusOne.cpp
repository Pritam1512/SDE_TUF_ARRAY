#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={9,9,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int carry=0;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i] == 9)
        {
            arr[i] = 0;
            carry = 1;
        }
        else if(arr[i] < 9)
        {
            arr[i] = arr[i] + 1;
            carry=0;
            break;
        }
    }
    if(carry == 1)
    cout <<1;
    for(int i=0;i<n;i++) cout << arr[i];
    return 0;
}