#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int n;
    cin>>n;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }

    int cnt = 0, mx = 0, num = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (v[j]%v[i] == 0){
                cnt++;
            }
        }
        mx = max(cnt, mx);
        if (mx == cnt){
            num = v[i];
        }
        cnt = 0;
    }

    cout<<num;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin>>t;
    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
}
