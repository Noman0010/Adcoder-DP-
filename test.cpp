#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef set<pair<int, int>> spi;
typedef set<pair<ll, ll>> spl;
typedef vector<pair<int, int>> vpi;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<pair<ll, ll>> vpl;
typedef vector<string> vs;
typedef map<int, int>mi;
typedef map<ll, ll> ml;
typedef set<string> ss;
typedef set<char>sc;
typedef set<int> si;
typedef set<ll> sl;
#define pan cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
// define values.
#define mod 1000000007
#define phi 1.618
/* Bit-Stuff */
#define get_set_bits(a) (__builtin_popcount(a))
#define get_set_bitsll(a) ( __builtin_popcountll(a))
#define get_trail_zero(a) (__builtin_ctz(a))
#define get_lead_zero(a) (__builtin_clz(a))
#define get_parity(a) (__builtin_parity(a))
/*  Abbrevations  */
#define ff first
#define ss second
#define mp make_pair
#define line cout<<endl;
#define pb push_back
#define Endl "\n"
// loops
#define loop1(i,start,end) for(ll i=ll(start);i<=ll(end);i++)
#define loop0(num) for(ll i=0;i<ll(num);i++)
#define forin(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
// Some print
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define cc ll test;cin>>test;while(test--)
// sort
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
#define PI 3.1415926535897932384626
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);




void solve() {
    int n;
    cin >> n;
    vi h(n + 1);
    vi dp(n + 1);
    forin(h, n);

    //base case
    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);

    for (int i = 2; i < n; i++) {
        int way1 = dp[i - 1] + abs(h[i] - h[i - 1]);
        int way2 = dp[i - 2] + abs(h[i] - h[i - 2]);
        dp[i] = min(way1, way2);
    }
    cout << dp[n - 1] << Endl;
}

int32_t main() {
    fastio;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    //cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

