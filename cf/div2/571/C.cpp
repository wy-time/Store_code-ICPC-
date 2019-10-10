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
    string s,t;
    cin>>s>>t;
    int chag=0;
    int i;
    int diff=0;
    int ans=0;
    wfor(i,0,t.length())
    {
        if(s[i]!=t[i])
            diff++;
        if(i!=0&&s[i]!=s[i-1])
            chag++;
    }
    int flag=0;
    if(diff%2==0)
    {
        ans++;
        flag=1;
    }
    wfor(i,t.length(),s.length())
    {
        if(s[i]!=s[i-1])chag++;
        if(chag%2==0)
        {
            if(flag==1)
                ans++;
        }else
        {
            if(flag==0)
            {
                ans++;
                flag=1;
            }else
                flag=0;
        }
        if(s[i-t.length()]!=s[i-t.length()+1])
            chag--;
    }
    cout<<ans<<endl;
    return 0;
}
