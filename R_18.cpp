#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;

        int c = max(a, b);
        int d = a+b;

        cout<<c<<" "<<d<<endl;
    }
    
    return 0;
}