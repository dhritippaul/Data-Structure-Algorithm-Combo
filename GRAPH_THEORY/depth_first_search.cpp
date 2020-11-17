#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector< vector< int > > adj;
vector< bool > vst;

void dfs (int currNode) {
	// If this node is already visited, return
	if (vst[currNode])
		return;
	// Else mark it as visited
	vst[currNode] = true;
	cout << currNode+1 << ' ';
	
	// Recursively DFS for its neighbours
	for (auto& neighbour: adj[currNode]) {
		dfs(neighbour);
	}
}

int main () {
	// Given a connected graph with N nodes and M edges,
	// print the nodes in the order visited by depth first search
	cin >> N >> M;
	adj.assign(N, vector< int > ());
	vst.assign(N, false);
	for (int i=0; i<M; i++) {
		int U, V;
		cin >> U >> V;
		--U, --V;
 		// decrement node index to follow 0-based indexing
 		adj[U].push_back(V);
 		adj[V].push_back(U);		
	}
	
	// Start depth first search from node 0
	dfs(0);
	
	return 0;
}
