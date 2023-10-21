#include <bits/stdc++.h>
#define nl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
#define pb push_back
#define ll long long
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a,b)) * b)
#define pii pair<int,int>
#define pll pair<long long,long long>
#define sz(v) (int)v.size()
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {
    ll n;
    cin>>n;
    vector<int> arr;
    for (int i=0;i<n;i++) {
        int num;
        cin>>num;
        arr.pb(num);
    }
    ll ser=0,dim=0;
    int l=0,r=n-1;
    int z=0;
    while(l<=r)
    {
        if (z%2==0)
        {
            if(arr[l]>=arr[r])
             {
                ser+=arr[l];
                l++;
            }
            else
            {
                ser+=arr[r];
                r--;
            }
        }
        else
        {
            if (arr[l]>=arr[r])
            {
                dim+=arr[l];
                l++;
            }
            else
            {
                dim+=arr[r];
                r--;
            }
        }
        z++;
    }
    cout << ser << " " <<dim<<nl;
}

int main() {
    FIO;
    solve();
    return 0;
}
// Alhamdulillah for everything ... solved by Nahidul Arafat
