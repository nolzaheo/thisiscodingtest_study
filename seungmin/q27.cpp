#include <iostream>
#include <vector>
using namespace std;
void binary_search(int start, int end);

int cnt=0;
int x;
vector<int> v;

int main(void)
{
    int n;
    cin>>n>>x;

    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        v.push_back(tmp);
    }

    binary_search(0,n-1);

    if(cnt==0)
        cnt=-1;
    cout<<cnt<<endl;
}

void binary_search(int start, int end)
{
    if(start>end)
        return ;

    int mid=(start+end)/2;

    if(v[mid]==x)
        cnt++;
    
    if(v[mid-1]>=x)
        binary_search(start,mid-1);
    if(v[mid+1]<=x)
        binary_search(mid+1,end);
}