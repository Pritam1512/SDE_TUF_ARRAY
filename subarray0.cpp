#include<bits/stdc++.h>
using namespace std;

bool subArrayExists(int arr[], int n)
{
    //Your code here
    set<int> s;
    int psum[n];
    psum[0] = arr[0];
     s.insert(psum[0]);
    for(int i=1;i<n;i++)
    {
        psum[i] = psum[i-1] + arr[i];
        if(psum[i] == 0)
        {
            return true;
        }
        s.insert(psum[i]);
        
    }
    if(s.size() == n)
    return false;
    else
    return true;

}

int main()
{
    int arr[] = {0,9,7,-12,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(subArrayExists(arr,n))
    cout << "YES" << endl;
    else
    cout << "NO" << endl;
    return 0;
}