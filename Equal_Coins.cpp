#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--){
        long long int x, y;
        cin>>x>>y;

        if (x == 0 && y % 2 == 0 ) {
            cout<<"YES"<<endl;
        }
        else if (x == 0 && y % 2 != 0) {
                cout<<"No"<<endl;
            }
        if ((x+2*y) % 2 == 0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}