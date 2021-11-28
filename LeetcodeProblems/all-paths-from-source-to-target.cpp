#include<iostream>
#include<cmath>
#include<climits>
#include<queue>
#include<stack>
#include<cstring>//<--strings
#include<algorithm>//<--sort
#include<unordered_map>
#include<map>
#include<list>
#include<cstring>

using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair


class Graph {
public:
	unordered_map<int, vector<int> >m;
	void addedge(int a, int b, bool bidir = false)
	{
		m[a].push_back(b);
		if (bidir)
			m[b].push_back(a);
	}

	void dfs_helper(int src, int des, vector<int>&v, vector< vector<int> > &ans, unordered_map<int, bool>&vis)
	{
		if (src == des)
		{
			v.push_back(src);
			ans.push_back(v);
			v.pop_back();
			return;
		}

		v.push_back(src);
		for (auto children : m[src])
		{
			if (!vis[children])
			{
				vis[children] = 1;
				dfs_helper(children, des, v, ans, vis);
				vis[children] = 0;
			}
		}
		v.pop_back();
	}

	void dfs(int src, int des)
	{
		unordered_map<int, bool>vis;
		vector<int>v;
		vector< vector<int> > ans;
		dfs_helper(src, des, v, ans, vis);
		for (int i = 0; i < ans.size(); ++i)
		{
			for (int j = 0; j < ans[i].size() ; ++j)
			{
				cout << ans[i][j] << " ";
			}
			cout << endl;
		}

	}
};


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Graph g;
	int e, v;
	cin >> e >> v;
	for (int i = 0; i < e; ++i)
	{
		int a, b;
		cin >> a >> b;
		g.addedge(a, b);
	}

	g.dfs(0, 3);


	cout << endl;
	cout << endl;

	return 0;
}