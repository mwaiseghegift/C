//suppose you are managing the construction of billboards on 21st St. N. which runs from east to west on a straight line.
//There are N possible sites for billboard construction given array[1,...,N]
// x[j] is the x-coordinate of the j-th site
// y[j] is the y-coordinate of the j-th site
// p[1,...,N] is the price of construction of a billboard at the j-th site
// n = 4
// x = [3,4,8,9]

//prev[j] = max{i: i<j, x[i]<x[j]-3}
//next[j] = min{i: i>j, x[i]>x[j]+3}
#include <iostream>
#include <cmath>
using namespace std;

//write R(j) denote the optimal revenue obtained by the billboad at the subset of sites [1,...,j] satisfying the sandwick country restriction
// then goal is to find (R(n)).

int main()
{
    int n;
    cin>>n;
    int x[n+1],y[n+1],p[n+1];

    for(int i=1;i<=n;i++)
    {
       cin>>x[i];
    }
    
    for(int i=1;i<=n;i++)
    {
        cin>>y[i];
    }

    for(int i=1;i<=n;i++)
    {
        cin>>p[i];
    }

    int prev[n+1],next[n+1];
    prev[1]=1;

    for(int i=2;i<=n;i++)
    {
        prev[i]=i;
        for(int j=1;j<i;j++)
        {
            if(x[j]<x[i]-3)
            {
                prev[i]=j;
                break;
            }
        }
    }
    
    next[n]=n;
    for(int i=n-1;i>=1;i--)
    {
        next[i]=i;
        for(int j=n;j>i;j--)
        {
            if(x[j]>x[i]+3)
            {
                next[i]=j;
                break;
            }
        }
    }
    int R[n+1];
    R[1]=p[1];
    for(int i=2;i<=n;i++)
    {
        R[i]=R[prev[i]]+p[i];
    }
    for(int i=n-1;i>=1;i--)
    {
        R[i]=max(R[next[i]],R[i]);
    }
    cout<<R[n]<<endl;
    return 0;
}