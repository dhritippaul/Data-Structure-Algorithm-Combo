#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, M;
vector< vector< int > > adj;
vector< bool > vst;

int main () {
	// Given a connected graph with N nodes and M edges,
	// print the nodes in the order visited by Breadth First Search
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
	
	// Start breadth first search from node 0
	queue< int > q;
	q.push(0);
	while (!q.empty()) {
		int currNode = q.front();
		q.pop();
		if (!vst[currNode]) {
			cout << currNode+1 << ' ';
			vst[currNode] = true;
			for (auto& neighbour : adj[currNode]) {
				q.push(neighbour);
			}
		}
	}
	
	return 0;
}
