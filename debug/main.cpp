#include <iostream>
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
    int n,u,d;
    while(cin>>n>>u>>d)
    {
        if(n==0&&u==0&&d==0)
            break;
        int now=0;
        int ans=0;
        while(now<n)
        {
            now+=u;
            ans++;
            if(now>=n)
                break;
            now-=d;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
