#include<bits/stdc++.h>
using namespace std;

//hashing would help here
//two pointer method also useful 

bool isPresent(int arr[],int n,int x)
{
    sort(arr,arr+n);
    int i=0;
    int j=n-1;

    while(i<=j)
    {
        if(arr[i]+arr[j] == x)  {
            return true;
        }
        else if((arr[i]+arr[j] ) > x)
        {
            j--;
        }
        else{
            i++;
        }
    }
    return false;
}

bool tripletP(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(isPresent(arr,n,x-arr[i]))
            return true;
    }
    return false;
}
int main()
{
    int n,x;
    cin >> n >> x;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    if(tripletP(arr,n,x)==1)
        cout << "triplet is present\n";
    else 
        cout << "triplet is not present\n";
    return 0;
}