#include <iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *a;
    int i;
    a=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
