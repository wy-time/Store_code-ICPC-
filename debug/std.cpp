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
    string s,t;
    cin>>s>>t;
    int i,j;
    ll ans=0;
    wfor(i,0,s.length()-t.length()+1)
    {
        int temp=0;
        wfor(j,0,t.length())
        {
            if(s[i+j]!=t[j])
                temp++;
        }
        if(temp%2==0)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
