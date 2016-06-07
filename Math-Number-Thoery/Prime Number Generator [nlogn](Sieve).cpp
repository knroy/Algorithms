#include <bits/stdc++.h>
bool status[1000005];

using namespace std;

void siv()
{
    int i,j;
    int N=1000000;
    int sq=sqrt(N);
    for(i=4; i<=N; i+=2) status[i]=1;
    for(i=3; i<=sq; i+=2)
    {
        if(status[i]==0)
        {
            for(j=i*i; j<=N; j+=i) status[j]=1;
        }
    }
    status[1]=1;
}

int main()
{
    int n;
    siv();
    while(scanf("%d",&n)==1)
        if(status[n]==0)
        {
            printf("%d is a prime\n",n);
        }
        else
            printf("%d is not a prime\n",n);

}
