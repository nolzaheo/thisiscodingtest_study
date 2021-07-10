#include <iostream>
using namespace std;
int main(void)
{
    int d[1001]={0,};
    int N;
    cin>>N;

    d[1]=1; d[2]=3;

    for(int i=3;i<=N;i++)
        d[i]=d[i-1]+d[i-2]*2;
    
    cout<<d[N]%796796<<endl;
}