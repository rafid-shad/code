#include<bits/stdc++.h>
///#include <ext/pb_ds/assoc_container.hpp>
///#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
///using namespace __gnu_pbds;
///template<class T> using oset=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


///--------------------------------------data type--------------------------------------------------//
typedef long long int lli;
typedef unsigned long long int ulli;

///---------------------------------------dequeue-----------------------------------------------------//
typedef deque<int> DI;
typedef deque<char>DC;

///---------------------------------------set------------------------------------------------------//
typedef set<int> SI;
typedef set<string> SS;
typedef set<char>SC;
typedef multiset<int>MSI;

///----------------------------------------map------------------------------------------------------//
typedef map<int, int> mp;
typedef map<int, string> mps;
typedef map<int, char>mpc;
typedef map<string, int>mpsi;
typedef map<char, int>mpci;

///----------------------------------------pair------------------------------------------------------//
typedef pair<int, int> pii;
typedef pair<string, string> pss;
typedef pair<char, char> pcc;
typedef pair<int, string> pis;
typedef pair<int, char> pic;

///----------------------------------------vector------------------------------------------------------//
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<double> VD;
typedef vector<lli> VLLI;
typedef vector<VI> VVI;
typedef vector<pii> VPI;

///----------------------------------------constant------------------------------------------//

#define MAX                 1E9
#define MIN                 -1E9
#define INF                 1E18
#define MOD                 10000007
#define py                  acos(-1.0)  /// 3.1415926535897932

///-------------------------------------------------------------------------------//
#define pp1(A)              printf("%d\n",A)
#define ppl(A)              printf("%lld\n",A)
#define pp2(A,B)            printf("%d %d\n",A,B)
#define pp3(A,B,C)          printf("%d %d %d\n",A,B,C)

#define ss1(A)              scanf("%d", &A)
#define ssl(A)              scanf("%lld", &A)
#define ss2(A,B)            scanf("%d %d",&A,&B)
#define ss3(A,B,C)          scanf("%d %d %d",&A,&B,&C)

///---------------------------------------------------------------------------//
#define fastIO              ios::sync_with_stdio(false), cin.tie(0)
#define pf                  push_front
#define pb                  push_back
#define popb                pop_back()
#define popf                pop_front()
#define ub                  upper_bound
#define lb                  lower_bound
#define itr                 iterator
#define ritr                reverse_iterator
#define mk                  make_pair
#define ff                  first
#define ss                  second

///---------------------------------------------------------------------------//
#define END                 return 0
#define line                printf("\n")
#define yes                 printf("YES\n")
#define no                  printf("NO\n")
#define Before              printf("Before  \n")
#define After               printf("After  \n")
#define enter1              printf("Entered 1\n")
#define enter2              printf("Entered 2\n")
#define enter3              printf("Entered 3\n")
#define Case(k,n)           printf("Case %d: %d\n",k,n)
#define Casell(k,n)         printf("Case %lld: %lld\n",k,n)

///-----------------------------------------------------------------------------//
#define sq(a)               (a)*(a)
#define SZ(a)               (int)a.size()
#define all(a)              (a).begin(), (a).end()
#define allr(a)             (a).rbegin(), (a).rend()
#define mem(a,v)            memset(a,v,sizeof(a))
#define unq(v)              v.erase(unique(all(v)), v.end())
#define rev(v)              reverse(all(v))
#define sortV(v)            sort(all(v))
#define sortA(a,n)          sort(a,a+n)
#define to_upper(s)         transform(s.begin(), s.end(), s.begin(), ::toupper)
#define to_lower(s)         transform(s.begin(), s.end(), s.begin(), ::tolower)
#define to_int(s)           stoi(s)

///--------------------------------------------------------------------------------//
#define Erase(V,I)          (V).erase((V).begin()+I)
#define Insert(V,I,M)       (V).insert((V).begin()+I,M)
#define max3(a,b,c)         max(max(a,b),c)
#define max4(a,b,c,d)       max(max3(a,b,c),d)
#define min3(a,b,c)         min(min(a,b),c)
#define min4(a,b,c,d)       min(min3(a,b,c),d)
#define read()              freopen("input.txt", "r", stdin)
#define write()             freopen("output.txt", "w", stdout)

///-------------------------------------------------------------------------------------------------------------------------------//
#define loop(i,n)           for(int i=0;i<n;i++)
#define loops(i,x,n)        for(int i=x;i<n;i++)
#define loopr(i,n)          for(int i=n-1;i>=0;i--)
#define loopt(i,n)          for(int i=1;i<=n;i++)
#define autoo(s)            for(auto it=s.begin();it!=s.end();it++)
#define vin(V, N)           for(int i=0; i<N; i++){ int X; ss1(X); V.pb(X); }
#define vinll(V, N)         for(int i=0; i<N; i++){ lli X; ssl(X); V.pb(X); }
#define scanA(A, N)         for(int i=0; i<N; i++){ ss1(A[i]); }
#define scanAll(A, N)       for(int i=0; i<N; i++){ ssl(A[i]); }
#define printA(A, N)        for(int i=0; i<N; i++){ cout<<A[i]; if (i<N-1)cout<<" ";else cout<<endl; }
#define vout(v)             for(int i = 0; i < v.size(); i++) {cout << v[i]; if(i < v.size() - 1) cout <<" "; else cout << endl;}

///-----------------------------------------------------------------------------------------------------------//

lli gcd(lli a, lli b)
{
    return b == 0 ? a : gcd(b, a % b);
}
lli lcm(lli a, lli b)
{
    return a * (b / gcd(a, b));
}

///----------------------graph moves----------------*/
int dr[]= {+1,-1,+0,+0};
int dc[]= {+0,+0,+1,-1};

///----------------------kings move-----------------*/
int X[]= {+0,+0,+1,-1,-1,+1,-1,+1};
int Y[]= {-1,+1,+0,+0,+1,+1,-1,-1};

///----------------------knights move----------------*/
int KX[]= {-2, -2, -1, -1,  1,  1,  2,  2};
int KY[]= {-1,  1, -2,  2, -2,  2, -1,  1};

///-----------------------------------template------------------------------------------------//

int main()
{
    upper
    fastIO;
    int n;
    cin>>n;
    VI alive;
    loopt(i,n)
    {
        int x;
        cin>>x;

        int l=i-x;

        while(alive.size() and alive.back()>=l)alive.pop_back();

        alive.pb(i);
    }
    cout<<alive.size()<<"\n";

}

