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
#define umap unordered_map
#define uset unordered_set
#define lb lower_bound
#define ub upper_bound
#define vt vector
#define pq priority_queue
#define all(x) (x).begin(), (x).end()
#define ell '\n'

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef __int128 i128;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

constexpr int INF = 0x3F3F3F3F;
constexpr long long LLINF = 0x3F3F3F3F3F3F3F3FLL;
constexpr double PI = 3.1415926535897932384626433832795;
constexpr int MOD = 1e9 + 7;

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
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr<<"{ ";__print(x.first);cerr<<", ";__print(x.second);cerr<<" }";}
template<typename T>
void __print(const T &x) {int f=0;cerr<<"{ ";for(auto &i:x)cerr<<(f++?", ":""),__print(i);cerr<<" }";}
void _print() {cerr<<"]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t);if(sizeof...(v))cerr<<", ";_print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr<<"["<<#x<<"] = [";_print(x)
#else
#define debug(x...)
#endif

void setIO(const string &s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

void solve() {

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int TEST_CASES = 1;
    cin >> TEST_CASES;
    while (TEST_CASES--) solve();
}
