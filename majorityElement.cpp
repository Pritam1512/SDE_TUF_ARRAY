#include<bits/stdc++.h>
using namespace std;

int majorityEl(int arr[],int n)
{
    sort(arr,arr+n);
    int cnt=0,res;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i] == arr[i+1])
        {
            cnt++;
            if(cnt > n/2)
            {
                res = arr[i];
                break;
            }
        }
    }
    return res;
}
int main()
{
    int n = 7;
    int arr[] = {2,2,1,1,1,2,2};
    cout << majorityEl(arr,n);
}