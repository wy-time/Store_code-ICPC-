#include <iostream>

#include <bitset> 

#include <cstdio>

using namespace std;

typedef long long ll;

#define wfor(i,j,k) for(i=j;i<k;++i)

#define mfor(i,j,k) for(i=j;i>=k;--i)

// void read(ll &x) {

// 	char ch = getchar(); x = 0;

// 	for (; ch < '0' || ch > '9'; ch = getchar());

// 	for (; ch >= '0' && ch <= '9'; ch = getchar()) x = x * 10 + ch - '0';

// }

ll val[28][28];

ll ans[28];

ll ch[14];

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

    ll n;

    cin>>n;

    ll i;

    wfor(i,0,2*n)

    {

        ll j;

        wfor(j,0,2*n)

        {

            cin>>val[i][j];

            ans[i]+=val[i][j];

        }

    }

    string temp="";

    wfor(i,0,n)

        temp+='1';

    wfor(i,0,n)

        temp+='0';

    bitset<28> ends(temp);

    ll end=ends.to_ullong();

    end++;

    ll res=0;
    bitset<28>gao;
    wfor(i,0,end)

    {

        bitset<28> now(i);

        if(now.count()==n)

        {

            ll cnt=0;

            ll j;

            ll temp=0;

            wfor(j,0,2*n)

            {

                if(now[j]==1)

                {

                    ch[cnt++]=j;

                    temp+=ans[j];

                }

            }

            wfor(j,0,cnt)

            {

                ll k;

                wfor(k,j+1,cnt)

                {

                    temp-=val[ch[j]][ch[k]]*2;

                }

            }

            if(res<temp)
            {
                res=temp;
                gao=now;
            }

        }

    }

    cout<<res<<endl;
    cout<<gao.to_string()<<endl;
    return 0;

}
