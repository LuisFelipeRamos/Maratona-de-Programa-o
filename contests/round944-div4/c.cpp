// pescoço pra baixo é canela

#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define sz(v) (int)v.size()
#define f first
#define s second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define bs bitset
#define umap unordered_map
#define uset unordered_set
#define all(v) begin(v), end(v)
#define rall(v) rbegin(v), rend(v)

#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;
typedef pair<int , int> ii;
typedef tuple<int, int, int> iii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<double> vd;
typedef vector<vd> vvd;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int t; cin>> t;
    while (t--){
        vi a(2);
        vi b(2);
        cin >> a[0] >> a[1] >> b[0] >> b[1];
        sort(all(a));
        sort(all(b));
        if (a[0]< b[0] and b[0] < a[1] and b[1] > a[1]) cout << "YES" << endl;
        else if (b[0]< a[0] and a[0] < b[1] and a[1] > b[1]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }    
    exit(0);
}
