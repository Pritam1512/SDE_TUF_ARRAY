#include<bits/stdc++.h>
using namespace std;

void sortDFS(int arr[],int n)
{
    int l=0;
    int m=0;
    int h=n-1;

    while(m<=h)
    {
        if(arr[m]==0)
        {
            swap(arr[l],arr[m]);
            l++;
            m++;
        }
        else if(arr[m] == 1)
        {
            m++;
        }
        else if(arr[m] == 2)
        {
            swap(arr[m],arr[h]);
            h--;
        }
    }

    for(int i=0;i<n;i++) cout << arr[i] << " ";
}

int main()
{
    int arr[] = {0,1,0,0,0,2,0,1,1,1,0,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    sortDFS(arr,n);
    return 0;
}