#include <stdio.h>
#define M 5
int main()
{   int a[M]={1,2,3,4,5};
    int i,j,*t;
    i=0;j=M-1;
    while(i!=3)
    {
        t=*(a+i);
        *(a+i)=*(a+j);
        *(a+j)=t;
        i++;j--;
    }
    for(i=0;i<M;i++) printf("%d",*(a+i));
    return 0;
}