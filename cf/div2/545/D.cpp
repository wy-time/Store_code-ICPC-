#include <iostream>
#include <cstdio>
using namespace std;
typedef long long ll;
#define wfor(i,j,k) for(i=j;i<k;++i)
#define mfor(i,j,k) for(i=j;i>=k;--i)
// void read(int &x) {
//  char ch = getchar(); x = 0;
//  for (; ch < '0' || ch > '9'; ch = getchar());
//  for (; ch >= '0' && ch <= '9'; ch = getchar()) x = x * 10 + ch - '0';
// }
int _next[500005];
void cal_next(string s);
int main()
{
    std::ios::sync_with_stdio(false);
#ifdef test
    freopen("F:\\Desktop\\question\\in.txt", "r", stdin);
#endif
    string s, p;
    cin >> s >> p;
    cal_next(p);
    int len2 = p.size();
    int len = s.size();
    int i;
    int _0 = 0, _1 = 0;
    for (i = 0; i < len; i++)
    {
        if (s[i] == '0')
            _0++;
        else
            _1++;
    }
    p = p.substr(0, len2 - _next[len2 - 1]);
    len2 = p.size();
    while (_0 > 0 || _1 > 0)
    {
        wfor(i, 0, len2)
        {
            if (p[i] == '0')
            {
                if (_0 > 0)
                {
                    _0--;
                    cout << 0;
                }
                else
                {
                    while (_1 > 0)
                    {
                        _1--;
                        cout << 1;
                    }
                }
            } else
            {
                if (_1 > 0)
                {
                    _1--;
                    cout << 1;
                }
                else
                {
                    while (_0 > 0)
                    {
                        _0--;
                        cout << 0;
                    }
                }
            }
        }
    }
    return 0;
}
void cal_next(string s)
{
    int len = s.size();
    int i;
    int k = -1;
    _next[0] = -1;
    wfor(i, 1, len)
    {
        while (k > -1 && s[i] != s[k + 1])
            k = _next[k];
        if (s[i] == s[k + 1])
            ++k;
        _next[i] = k;
    }
    wfor(i, 0, len)
    {
        _next[i]++;
    }
}