#include<bits/stdc++.h>
using namespace std;


// IDEA IS TO USE STACK 

int bestTime(int arr[],int n)
{
    stack<int> st;
    int maxP= 0;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--)
    {      
            if(arr[i] <= st.top())
            {
                int m = (st.top()-arr[i]);
                maxP = max(m,maxP);
            }
            else if(arr[i] > st.top())
            {
                st.pop();
               st.push(arr[i]);
            }
    }
    return maxP;
}

int main()
{
    int arr[] = {1, 4, 5, 2, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << bestTime(arr,n);
    return 0;
}