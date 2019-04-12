#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long ll;
#define wfor(i,j,k) for(i=j;i<k;++i)
#define mfor(i,j,k) for(i=j;i>=k;--i)
// void read(int &x) {
//  char ch = getchar(); x = 0;
//  for (; ch < '0' || ch > '9'; ch = getchar());
//  for (; ch >= '0' && ch <= '9'; ch = getchar()) x = x * 10 + ch - '0';
// }
const int maxn = 1e5 + 5;
typedef pair<int, int>pa;
bool cmp(pa x, pa y)
{
    if (x.first == y.first)
    {
        return x.second < y.second;
    } else
        return x.first < y.first;
}
pa num[2 * maxn];
int main()
{
    std::ios::sync_with_stdio(false);
#ifdef test
    freopen("F:\\Desktop\\question\\in.txt", "r", stdin);
#endif
#ifdef ubuntu
    freopen("/home/time/debug/debug/in", "r", stdin);
    freopen("/home/time/debug/debug/out", "w", stdout);
#endif
    int n;
    cin >> n;
    int i;
    wfor(i, 0, 2 * n)
    {
        cin >> num[i].first;
        num[i].second = i;
    }
    sort(num, num + 2 * n, cmp);
    ll ans = 0;
    int lasta = 0, lastb = 0;
    wfor(i, 0, 2 * n)
    {
        ans += abs(num[i].second - lasta);
        lasta = num[i].second;
        i++;
        ans += abs(num[i].second - lastb);
        lastb = num[i].second;
    }
    cout << ans << endl;
    return 0;
}