#include <iostream>
#include <string> 
#include <cstdio>
using namespace std;
typedef long long ll;
#define wfor(i,j,k) for(i=j;i<k;++i)
#define mfor(i,j,k) for(i=j;i>=k;--i)
// void read(int &x) {
// 	char ch = getchar(); x = 0;
// 	for (; ch < '0' || ch > '9'; ch = getchar());
// 	for (; ch >= '0' && ch <= '9'; ch = getchar()) x = x * 10 + ch - '0';
// }
int main()
{
    std::ios::sync_with_stdio(false);
    #ifdef test
    freopen("F:\\Desktop\\question\\in.txt","r",stdin);
    #endif
    #ifdef ubuntu
    freopen("/home/time/debug/debug/in","r",stdin);
    freopen("/home/time/debug/debug/out","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        int firs=1e9,last=-1;
        int i;
        int ans=n;
        wfor(i,0,s.length())
        {
            if(s[i]=='1')
            {
                firs=min(firs,i);
                last=max(last,i+1);
            }
        }
        if(firs!=1e9)
            ans=max(ans,(n-firs)*2);
        if(last!=-1)
            ans=max(ans,last*2);
        cout<<ans<<endl;
    }
    return 0;
}
