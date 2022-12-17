#include <bits/stdc++.h>
#define mod 998244353
#define mod1 998244353
using namespace std;
#define int long long

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }

template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }



typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;
 
double PI = acos(-1);
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FORSQ(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))
#define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
#define FOREACH(a, b) for (auto&(a) : (b))
#define REP(i, n) FOR(i, 0, n)
#define REPN(i, n) FORN(i, 1, n)
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define SQR(x) ((ll)(x) * (x))
#define RESET(a, b) memset(a, b, sizeof(a))
#define fi first
#define se second
#define pb push_back
#define All(v) v.begin(), v.end()
#define AllA(arr, sz) arr, arr + sz
#define SIZE(v) (int)v.size()
#define SORT(v) sort(All(v))
#define REVERSE(v) reverse(All(v))
#define SORTA(arr, sz) sort(AllA(arr, sz))
#define REVERSEA(arr, sz) reverse(AllA(arr, sz))
#define PERMUTE next_permutation
#define TC(t) while (t--)
 
inline string IntToString(ll a)
{
    char x[100];
    sprintf(x, "%lld", a);
    string s = x;
    return s;
}
 
inline ll StringToInt(string a)
{
    char x[100];
    ll res;
    strcpy(x, a.c_str());
    sscanf(x, "%lld", &res);
    return res;
}

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

#define PI 3.1415926535897932384626433832795l 
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;


// -------------------------<RNG>------------------------- 
// RANDOM NUMBER GENERATOR
mt19937 RNG(chrono::steady_clock::now().time_since_epoch().count());  
#define SHUF(v) shuffle(all(v), RNG); 
// Use mt19937_64 for 64 bit random numbers.

vector<int>cand;
vector<int> prime(1000005);  
vector<ll>primes;
void SieveOfEratosthenes(int n) 
{ 
    for (ll p=2; p*p<=n; p++) 
    { 
        if (prime[p] == 0 ) 
        { 
            for (int i=p*p; i<=n; i += p) 
                if(prime[i]==0)
                prime[i] = p; 
        } 
    } 
  
    
} 

long long power(long long x, long long  y )
{  
    if(y<0ll)
    return 0;
    long long res = 1ll;     
    x = x % mod; 
    if (x == 0ll) return 0; 
    while (y > 0ll)  
    {  
        if (y & 1ll)  
            res = (res*x) % mod;  
        y = y>>1ll; 
        x = (x*x) % mod;  
    }  
    return res;  
}  
long long add(long long x, long long y)
{
    x%=mod;
    y%=mod;
   
    return (x+y)%mod;
}
 
long long mul(long long x, long long y)
{
    return ((x%mod) * 1ll * (y%mod)) % mod;
}
 
long long binpow(long long x, long long y)
{
    if(y==0)
    return 1ll;
    long long z = 1ll;
    x%=mod;
    while(y)
    {
        if(y & 1) z = mul(z, x);
        x = mul(x, x);
        y >>= 1ll;
    }
    return z;
}
 
long long inv(long long x)
{
    return binpow(x, mod - 2);
}
 
long long divide(long long x, long long y)
{
    return mul(x, inv(y));
}
 
long long fact[200006];
 
void precalc()
{
    fact[0] = 1;
    for(long long i = 1; i < 200006; i++)
        fact[i] =(fact[i - 1]*i)%mod;
      //fact[i]=fact[i-1]*i;
}
 
long long C(long long n, long long k)
{
    if(n<k)
    return 0;
    if(k<0)
    return 0;
    if(n==0)
    return 1;
    return divide(fact[n], mul(fact[k], fact[n - k]));
    //return (fact[n]/(fact[n-k]))/fact[k];
}
long long sub(long long A,long long B)
{
    return (A-B+mod)%mod;
}

//direction matrix
int dx[8] = { 1, -1, 0, 0, 1, -1, 1, -1 };
int dy[8] = { 0, 0, 1, -1, 1, -1, -1, 1 };

void solve() {
    // Add your solution here 

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ll tc = 1;
    cin >> tc;
    //SieveOfEratosthenes(1000002);
    //precalc();
    for (ll t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
    return 0;
}
