// pescoço pra baixo é canela

#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define bs bitset
#define umap unordered_map
#define uset unordered_set
#define all(v) begin(v), end(v)
#define rall(v) rbegin(v), rend(v)

#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;
typedef pair<int , int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<double> vd;
typedef vector<vd> vdd;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    map<int, int> mp;
    for (int i = 0; i < 6; i++){
        int a; cin >> a; mp[a]++;
    }
    vi v;
    for (auto& [a, b]: mp){
        v.pb(b);
    }
    sort(v.begin(), v.end());
    if (v == vi({1, 1, 4}) or v == vi({1, 5})) cout << "Bear" << endl;
    else if (v == vi({6}) or v == vi({2, 4})) cout << "Elephant" << endl;
    else cout << "Alien" << endl;

    exit(0);
}
