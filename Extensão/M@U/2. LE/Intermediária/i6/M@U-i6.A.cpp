
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>

class UnionFind
{
private:
    vi p, rank;

public:
    UnionFind(int N)
    {
        rank.assign(N, 0);
        p.assign(N, 0);
        for (int i = 0; i < N; i++)
        {
            p[i] = i;
        }
    }

    int findSet(int i)
    {
        return (p[i] == i) ? i : findSet(p[i]);
    }

    bool isSameSet(int i, int j)
    {
        return findSet(i) == findSet(j);
    }

    void unionSet(int i, int j)
    {
        if (!isSameSet(i, j))
        {
            int x = findSet(i);
            int y = findSet(j);
            if (rank[x] > rank[y])
                p[y] = x;
            else
            {
                p[x] = y;
                if (rank[x] == rank[y])
                    rank[y]++;
            }
        }
    }
};

ll Kruskals(int n, vector<pair<int, pii>> &EdgeList)
{
    sort(EdgeList.begin(), EdgeList.end());

    ll mst_cost = 0;
    UnionFind UF(n);
    for (int i = 0; i < EdgeList.size(); i++)
    {
        pair<int, pii> front = EdgeList[i];
        if (!UF.isSameSet(front.second.first, front.second.second))
        {
            mst_cost += front.first;
            UF.unionSet(front.second.first, front.second.second);
        }
    }
    return mst_cost;
}

int main()
{
    int n, m, k, M;
    cin >> n; 
	m = n -1;
    vector<pair<int, pii>> EdgeList(n); // (w, (u, v))
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        EdgeList.push_back(pair<int, pii>(w, pii(u, v)));
    }
	cout << Kruskals(n, EdgeList) << endl;
	cin >> k;
	for (int i = 0; i < k; i++){
		int u, v, w;
		cin >> u >> v >> w;
		EdgeList.push_back(pair<int, pii>(w, pii(u, v)));
	}
	cin >> M;
	for (int i = 0; i < M; i++){
		int u, v, w;
		cin >> u >> v >> w;
		EdgeList.push_back(pair<int, pii>(w, pii(u, v)));
	}

	cout << Kruskals(n, EdgeList) << endl;
}

/*
1.  O código acima só para quando a lista é processada pro completo.
    Isso é de fato necessário?
    Implemente essa melhoria

2.  Complexidade?
        O(ordenação + add cada edge * union-find operations) = O(ElogE + E*1) = P(ElogV²) = O(2ElogV) = O(ElogV)

3. Qual o critério guloso que estamos considerando??
*/
