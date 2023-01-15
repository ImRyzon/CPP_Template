#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize ("Ofast","unroll-loops","omit-frame-pointer","inline")
#pragma GCC option ("arch=native","tune=native","no-zero-upper")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2")

#define pb push_back
#define pf push_front
#define ef emplace_front
#define eb emplace_back
#define mp make_pair
#define popf pop_front
#define popb pop_back
#define lb lower_bound
#define ub upper_bound
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define ell '\n'

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template <typename T, typename V>
void __print(const pair<T,V>&x){cerr<<"{ ";__print(x.first);cerr<<", ";__print(x.second);cerr<<" }";}
template <typename T>
void __print(const T&x){int f=0;cerr<<"{ ";for(auto&i:x)cerr<<(f++?", ":""),__print(i);cerr<<" }";}
void _print() {cerr<<"]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t);if(sizeof...(v))cerr<<", ";_print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr<<"["<<#x<<"] = [";_print(x)
#else
#define debug(x...)
#endif

inline void setIO(const string &s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

inline int random(const int l, const int r) {
    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<mt19937::result_type> dist(l,r);
    return (int)dist(rng);
}

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef __int128 i128;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

template <typename T> using uset = unordered_set<T>;
template <typename T> using mset = multiset<T>;
template <typename T> using setg = set<T, greater<T>>;
template <typename T1, typename T2> using setc = set<T1, T2>;
template <typename T1, typename T2> using umap = unordered_map<T1, T2>;
template <typename T> using pq = priority_queue<T>;
template <typename T> using pqg = priority_queue<T, vector<T>, greater<T>>;
template <typename T1, typename T2, typename T3> using pqc = priority_queue<T1, T2, T3>;

template <typename T> inline T floor(T a, T b) {return (int)(a / b);}
template <typename T> inline T ceil(T a, T b) {return (a + b - 1) / b;}
template <typename T> inline T gcd(T a, T b) {return !b ? a : gcd(b, a % b);}
template <typename T> inline T lcm(T a, T b) {return a / gcd(a, b) * b;}
template <typename T> inline T lowbit(T x) {return x & (-x);}
template <typename T> inline T sqrtc(T x) {T a=x,b=(x+1)/2;while(a>b)a=b,b=(b+x/b)/2;return a;}
template <typename T> inline bool prime(T x) {if(x==1)return 0;for(T i=2;i*i<=x;++i)if(!(x%i))return 0;return 1;}
template <typename T> inline bool ispow2(T x) {return x && !(x & (x - 1));}

constexpr int INF = 0x3F3F3F3F;
constexpr long long LLINF = 0x3F3F3F3F3F3F3F3FLL;
constexpr double PI = 3.1415926535897932384626433832795;
constexpr int MOD = 1e9 + 7;
constexpr int FFT = 998244353;

void solve() {

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int TEST_CASES = 1;
//    cin >> TEST_CASES;
    while (TEST_CASES--) solve();
    return 0;
}
