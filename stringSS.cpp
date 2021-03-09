#include<bits/stdc++.h>
using namespace std;
vector<string> vec;
void printSS(string str,int i,int n,string res)
{
    if(i==n)
    {
        vec.push_back(res);
        return;
    }
    printSS(str,i+1,n,res+str[i]);
    printSS(str,i+1,n,res);
}

int main()
{
   string str="abc";
   int n = str.length();
    string res="";
    printSS(str,0,n,res);
    sort(vec.begin(),vec.end());
    for(auto x : vec)
    {
        cout << x << endl;
    }
    return 0;
}