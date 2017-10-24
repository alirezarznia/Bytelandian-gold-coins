#include 	<cstdio>
#include	<iostream>
#include	<cmath>
#include 	<cstring>
#include 	<cstdlib>
#include 	<vector>
#include 	<string>
#include 	<algorithm>
#include 	<queue>
#include 	<deque>
#include 	<set>
#include 	<stack>
#include 	<map>
#include 	<sstream>
#include 	<ctime>
#include	<iomanip>
#include 	<functional>

#define 	Time 		printf("\nTime : %.3lf s.\n", clock()*1.0/CLOCKS_PER_SEC);
#define 	For(J,R,K) 	for(ll J=R;J<K;++J)
#define 	Rep(I,N) 	For(I,0,N)
#define 	MP 			make_pair
#define 	ALL(X) 		(X).begin(),(X).end()
#define 	SF 			scanf
#define 	PF 			printf
#define 	pii 		pair<long long,long long>
#define 	pdd 		pair<double , double>
#define 	Sort(v) 	sort(ALL(v))
#define 	Test 		freopen("a.in","r",stdin);
#define 	Testout 	freopen("a.out","w",stdout);
#define 	pb 			push_back
#define 	Set(a,n) 	memset(a,n,sizeof(a))
#define 	MAXN 		100000+99
#define 	EPS 		1e-15
#define 	inf 		1ll<<62

typedef long long ll;


using namespace std;

map < ll, ll > t;
ll DP(ll n )
{
    if(n==0)
        return 0;
    if(t[n]== 0)
        t[n] = DP(n/2)+DP(n/3)+DP(n/4);
    if(t[n]>n)
        return t[n];
    return n;

}
ll n ;
int main()
{
    while(cin>>n)
        cout<<DP(n)<<endl;
}
