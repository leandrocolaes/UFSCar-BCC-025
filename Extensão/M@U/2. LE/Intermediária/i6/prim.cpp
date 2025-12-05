// A ideia é ir selecionando as arestas que atravessam o corte da árvore
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>

vi visitados;
priority_queue<pii> pq;

void process(int v, vector<vector<pair<int, int>>> &AdjList)
{
    visitados[v] = 1;
    for (int j = 0; j < AdjList[v].size(); j++)
    {
        pii u = AdjList[v][j];
        if (!visitados[u.first])
            pq.push(pii(-u.second, -u.first));
    }
}

ll Prims(vector<vector<pair<int, int>>> &AdjList)
{
    visitados.assign(AdjList.size(), 0);
    process(0, AdjList);
    ll mst_cost = 0;
    while (!pq.empty())
    {
        pii front = pq.top();
        pq.pop();
        int u = -front.second;
        int w = -front.first;
        if (!visitados[u])
            mst_cost += w;
        process(u, AdjList);
    }
    return mst_cost;
}

void PrintAdjList(vector<vector<pair<int, int>>> &AdjList)
{
    for (int i = 0; i < AdjList.size(); i++)
    {
        cout << i << ": ";
        for (int j = 0; j < AdjList[i].size(); j++)
        {
            cout << "(" << AdjList[i][j].first << ", " << AdjList[i][j].second << "), ";
        }
        cout << endl;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> AdjList(n);
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        AdjList[u].push_back(pii(v, w));
    }

    PrintAdjList(AdjList);

    cout << Prims(AdjList) << endl;
}

/*
1. Qual o critério guloso que estamos considerando??

*/