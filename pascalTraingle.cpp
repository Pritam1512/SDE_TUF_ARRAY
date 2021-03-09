#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> pascal(int n)
{
    vector<vector<int>> res;
    res.push_back({1});
    if(n==1)
        return res;
    
    res.push_back({1,1});
    if(n==2)
        return res;
    int i=2;
    while(i<n)
    {
        vector<int> temp;

        temp.push_back(1);
        for(int j=1;j<i;j++)
        {
            temp.push_back(res[i-1][j-1]+res[i-1][j]);
        }
        temp.push_back(1);
        res.push_back(temp);
        i++;
    }

    return res; 

}


int main()
{
    vector<vector<int>> res;
    res = pascal(5);
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout << res[i][j] << " ";
        }
        cout << "" << endl;
    }
    return 0;
}