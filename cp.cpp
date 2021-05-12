
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool sortFunc(pair<int,pair<int,int>> a,pair<int,pair<int,int>> b)
{
	if(a.first == b.first)
	{
		if(a.second.first == b.second.first)
		{
			return a.second.second < b.second.second;
		}
		else
		{
			return a.second.first > b.second.first;
		}
	}
	return
		a.first < b.first;

}

int main(void){
	ios::sync_with_stdio(0); cin.tie(0);

// write code here
	vector<int> phys={4 ,1 ,10 ,4 ,4 ,4 ,1 ,10 ,1 ,10};
	vector<int> chem={5 ,2 ,9 ,6 ,3 ,10 ,2 ,9 ,14 ,10};
	vector<int> math={12 ,3 ,6 ,5 ,2 ,10 ,16 ,32 ,10 ,4};

	int n = phys.size();

	vector<pair<int,pair<int,int>>> vp;
					
	for(int i=0;i<n;i++)
	{
		vp.push_back({phys[i],{chem[i],math[i]}});
	}

	sort(vp.begin() ,vp.end() ,sortFunc);
	
	for(auto x: vp)
	{
		cout << x.first << " " << x.second.first << " " << x.second.second << endl;  
	}
return 0;
}