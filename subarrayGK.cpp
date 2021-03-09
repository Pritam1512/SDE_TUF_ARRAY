#include<bits/stdc++.h>
using namespace std;

int smallestS(int arr[],int n,int k)
{
    int i=0,j=0;
    int sum = 0;
    while(sum <= k)
    {
        sum += arr[j];
        j++;
        
    }
    cout << j << " " << sum << endl;
    return 0;
}
int main()
{
    int n,k;
    cin >> n >> k;

    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];

    cout << smallestS(arr,n,k);
    return 0;
}