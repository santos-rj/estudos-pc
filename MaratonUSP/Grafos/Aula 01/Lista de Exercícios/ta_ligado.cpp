#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define pb push_back
#define MAX 100002
#define ms(v,x) memset(v,x,sizeof(v))
#define ff first
#define ss second
#define td(v) v.begin(),v.end()
#define rep(i,a,n) for (int i=(a);i<(n);i++)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define re(v) {for(auto &_re : v) cin >> _re;}
#define pr(v) {for(auto _pr : v) cout << _pr << " "; cout << endl;}
#define prr(v) {for(auto _prr : v) cout << _prr.ff << " " << _prr.ss << endl;}
#define desync ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0)

using namespace std;

const ll M = 1e9 + 7;
const double PI = acos(-1);
const double min_dist_v = 1e-4;
const double min_dist_e = 1e-6;
const double eps = 1e-6;

void solve(){
    ll n, m, p, a, b;
    int pai[MAX];
    bool visitado[MAX];
    vector adj[MAX];

    cin >> n >> m;

    while(m--){
        cin >> p >> a >> b;

        if(p==1){
            adj[a].insert(b);
            adj[b].insert(a);
        }else{
            if(adj[a].find(b) != adj[a].end()){
                cout << 1 << endl;
            }else{
                cout << 0 << endl;
            }
        }
    }
}

int main(){
    desync;
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
