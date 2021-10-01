#include<bits/stdc++.h>
using namespace std;
vector<int> visited;
vector<vector<int>> adj;
vector<int> color;
bool bfs(int src)
{
	visited[src] = 1;
	queue<int> q;
	q.push(src);
	color[src] = 0;
	while(!q.empty())
	{
		int n = q.front();
		q.pop();
		for(auto i: adj[n])
		{
			if(color[i] == -1) //if(!visited[i]) can also be used
			{
				color[i] = !color[n];
				q.push(i);
				visited[i] = 1;
			}
			else
			{
				if(color[i] == color[n])return false;
			}
		}
	}
	return true;
}
int main()
{
	int v,e,x,y;
	cin>>v>>e;
	visited.resize(v,0);
	adj.resize(v);
	color.resize(v,-1);
	for(int i=0;i<e;i++)
	{
		cin>>x>>y;
		x--;
		y--;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	if(bfs(0))cout<<"Bipartite";
	else cout<<"Not Bipartite";
	//for(int i=0;i<v;i++)cout<<visited[i]<<" ";
}

//visited can be ignored
