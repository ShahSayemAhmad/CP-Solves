#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int n, ans = 0;
    cin>>n;
    int presum[n], arr[n];

    for (int i = 0; i < n; i++){
        cin>>arr[i];

        if (i){
            presum[i] = presum[i-1]+arr[i];
        }
        else {
            presum[0] = arr[0];
        }

        if (presum[i] > -1){
            ans += presum[i];
        }
        else {
            presum[i] = arr[i];
        }
    }
    
    for (int i = 0; i < n; i++)
        cout<<presum[i]<<" ";
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for (int i = 1; i <= t; i++){
        cout<<"Case #"<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}
