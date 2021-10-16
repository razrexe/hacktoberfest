/* Problem statement: Add  to each element of the array, permanently modifying it for any future queries.
   Find the absolute value of each element in the array and print the sum of the absolute values on a new line. */

#include<bits/stdc++.h>

#define s(a) scanf("%d",&a)
#define sl(a) scanf("%lld",&a)
#define ss(a) scanf("%s",a)

#define MP           make_pair
#define PB           push_back
#define REP(i, n)    for(int i = 0; i < n; i++)
#define INC(i, a, b) for(int i = a; i <= b; i++)
#define DEC(i, a, b) for(int i = a; i >= b; i--)
#define CLEAR(a)     memset(a, 0, sizeof a)

using namespace std;

typedef long long          LL;
typedef unsigned long long ULL;
typedef vector<int>        VI;
typedef pair<int, int>     II;
typedef vector<II>         VII;

LL inp[500005];
LL cum[500005];
int main()
{
      int t=1;
      //s(t);
      while(t--)
      {
            int n,Q,q;
            LL add = 0;
            s(n);
            REP(i,n)
                  sl(inp[i]);
            sort(inp,inp+n);
            cum[0] = inp[0];
            INC(i,1,n-1)
                  cum[i] = cum[i-1]+inp[i];
            s(Q);
            while(Q--)
            {
                  s(q);
                  add+=q;
                  int pos = lower_bound(inp,inp+n,-add)-inp;
                  LL ans;
                  if(pos>0)
                        ans = (cum[n-1]-cum[pos-1]+add*(n-pos))-(cum[pos-1]+add*pos);
                  else 
                        ans = (cum[n-1]+add*n);
                  printf("%lld\n",ans);
            }
      }
      return 0;
}
