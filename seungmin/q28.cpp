#include <iostream>
#include <vector>
using namespace std;
void binary_search(int start, int end);

vector<int> v;
int main(void)
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        v.push_back(tmp);
    }

    binary_search(0,n-1);
    cout<<-1<<endl;
}

void binary_search(int start, int end)
{
    if(start>end)
        return;

    int mid=(start+end)/2;

    if(v[mid]==mid)
    {  
        cout<<mid<<endl;
        exit(0);
    }
    
    binary_search(start,mid-1);
    binary_search(mid+1,end);
}