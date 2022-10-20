#include<bits/stdc++.h>
using namespace std;

long long powmod(int p)
{
    long long m=1e9+7;
    long long int b=2;
    long long ans=1;
    while(p>0)
    {
        if(p%2==1)
        {
            ans*=b;
            ans%=m;
        }
        b*=b;
        b%=m;
        p/=2;
// my name is abdullah 
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
 long long res= powmod(n);
 cout<<res<<endl;

}
