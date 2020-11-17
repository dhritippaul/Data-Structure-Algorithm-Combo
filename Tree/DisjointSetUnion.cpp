#include <iostream>
#include <vector>

using namespace std;

class DSU {
	int n;
	vector< int > parent;
	vector< int > size;
	public:
	int nCC;
	DSU (int len) {
		n = len;
		init();
		nCC = n;
	}
	void init () {
		size.assign(n, 1);
		parent.resize(n);
		for (int i=0; i<n; i++) {
			parent[i] = i;
		}
	}
	int find_set (int v) {
		if (v == parent[v]) return v;
		return parent[v] = find_set(parent[v]);
	}
	void union_sets (int a, int b) {
		a = find_set(a);
		b = find_set(b);
		if (a != b) {
			if (size[a] < size[b]) swap(a,b);
			parent[b] = a;
			size[a] += size[b];
			--nCC;
		}
	}
};

int main() {
	// Given a graph with N nodes and M edges,
	// 1. check if two nodes belong to the same connected component.
	// 2. return total number of connected components.
	//
	// Input format:
	//
	// N M
	// U_1 V_1
	// U_2 V_2
	// ...
	// U_M V_M
	// X Y
	//
	// Where,
	// U_i V_i
	// indicates a undirected edge between U_i and V_i
	int N, M;
	cin >> N >> M;
	DSU d1(N);
	for (int i=0; i<M; i++) {
		int U, V;
		cin >> U >> V;
		--U, --V;
		// decrement node index to follow 0-based indexing
		d1.union_sets(U, V);
	}
	int X, Y;
	cin >> X >> Y;
	if (d1.find_set(X-1) == d1.find_set(Y-1)) {
		cout << X << " and " << Y << " belong to the same component." << endl;
	} else {
		cout << X << " and " << Y << " belong to different components." << endl;
	}
	cout << "Total no. of connected components: " << d1.nCC << endl;
}
