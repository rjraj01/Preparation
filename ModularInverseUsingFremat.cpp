#include <bits/stdc++.h>
#define N 1000000
using namespace std;
typedef long long int lli;
typedef pair<int,int> pii;
typedef tuple<int,int,int> tii;
//modular exponentiation using recursion
int ModM(int x,int n,int M)
{
    if(n==0)
        return 1;
    else if(n%2==0)
    {
        int y=ModM(x,n/2,M);
        return (y*y)%M;
    }
    else
    {
        return ((x%M)*ModM(x,n-1,M))%M;
    }
}
//Modular inverse using fremat's little theorem
int ModI(int a,int M)
{
    return ModM(a,M-2,M);
}
int main()
{
    cout<<ModI(3,1e9+7)<<endl;
    return 0;
}
