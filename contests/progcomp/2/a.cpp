// pescoço pra baixo é canela

#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define mp make_pair

#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;
typedef pair<int , int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int q; cin >> q;
    while (q--){
        int l1,r1,l2,r2; cin >> l1>> r1 >> l2 >> r2;
        if (r1==r2){
            cout << l1 << " " << r2 << endl;
        } else {
            cout << r1 << " " << r2 << endl;
        }
    }
    exit(0);
}
