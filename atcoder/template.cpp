#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder; 
using mint = modint998244353;
using ll = long long;
using ull = unsigned long long;
using i128 = __int128_t;
using pii = pair<int, int>;
using pll = pair<long long, long long>;
using vi = vector<int>;
using vll = vector<long long>;
using vvi = vector<vector<int>>;
using vvll = vector<vector<long long>>;

#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep3(i, m, n) for (ll i = (ll)(m); i < (ll)(n); i++)
#define rsort(v) sort((v).begin(), (v).end(), greater<>())
#define endl '\n'

template <typename T, typename U> inline bool chmin(T& a, const U& b){return(a>b ? a=b, true:false);}
template <typename T, typename U> inline bool chmax(T& a, const U& b){return(a<b ? a=b, true:false);}

template <typename T> void read(T& x){cin>>x;}
template <typename T, typename U> void read(pair<T,U>& p){read(p.first);read(p.second);}
template <typename T> void read(vector<T>& v){for(auto& x:v) read(x);}
template <typename... Args> void read(Args&... args){(read(args), ...);}

vll dijkstra(const vector<vector<pll>>& G, int s) {
    const ll INF=LLONG_MAX/4;
    int n=G.size();
    vll dist(n, INF);
    priority_queue<pll,vector<pll>,greater<pll>> pq;
    dist[s]=0;
    pq.emplace(0,s);
    while (!pq.empty()){
        auto[d,v]=pq.top();
        pq.pop();
        if (d != dist[v]) continue;
        for(auto[to,cost]:G[v]){
            if (dist[to]>d+cost){
                dist[to]=d+cost;
                pq.emplace(dist[to],to);
            }
        }
    }
    return dist;
}

int main() {
    cin.tie(nullptr); ios::sync_with_stdio(false);
    
}
