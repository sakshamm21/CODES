#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,p,q;
        cin>>x>>p>>q;
        cout<<abs(p-q)*x<<endl;
    }
return 0;
}