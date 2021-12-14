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
		// for(int f = 0;f<7;f++)
		// {
		int f = 0;
		// cout<<v[f]<<'\n';
		// cout<<v[f+1]<<'\n';
		// cout<<v[f+2]<<'\n';
		// cout<<v[f+3]<<'\n'; 
		// if(v[f]==v[f+1]==v[f+2]||v[f+1]==v[f+2])
		// {
		// 	cout<<v[f]<<' '<<v[f+1]<<' '<<v[f+2]<<'\n';
		// }
		// else if(v[f]+v[f+2]>v[f+3])
		// {
		// 	cout<<v[f]<<' '<<v[f+1]<<' '<<v[f+2]<<'\n';
		// }
		// else if(v[f]+v[f+2]<=v[f+3])
		// {
		// 	cout<<v[f]<<' '<<v[f+1]<<' '<<v[f+3]<<'\n';
		// }
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
