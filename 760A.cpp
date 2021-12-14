#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	for(int i = 0;i<t;i++)
	{
		std::vector<int> v;
		for(int j = 0;j<7;j++)
		{
			int k;
			cin>>k;
			v.push_back(k);
		}
		int f = 0;
		if(v[f]+v[f+1]+v[f+2]==v[6])
		{
			cout<<v[f]<<' '<<v[f+1]<<' '<<v[f+2]<<'\n';
		}
		else if(v[f]+v[f+1]+v[f+3]==v[6])
		{
			cout<<v[f]<<' '<<v[f+1]<<' '<<v[f+3]<<'\n';
		}
	}
	return 0;
}
