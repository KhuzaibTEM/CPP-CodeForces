#include <bits/stdc++.h>
using namespace std;
 
#define REP(i,a,b) for (ll i = a; i <= b; i++)
#define REV(i,a,b) for (ll i = a; i >= b; i--)
#define elif else if
#define lb lower_bound
#define ub upper_bound
 
//#define or ||          \\                //    ||    ||    \\    //
//#define and &&          \\      /\      //     ||    ||     \\  //
//                         \\    //\\    //      ||____||      \\//
//                          \\  //  \\  //       ||____||       //
//                           \\//    \\//        ||    ||      //
//                            \/      \/         ||    ||     //
 
typedef string str;
typedef long long ll;
typedef long double ld;
typedef vector<int> vti;
typedef vector<str> vts;


int main() {
    int lim;
    cin >> lim;
    REP(i,1,lim) {
        ll n,m,k,temp;
        cin >> n >> m >> k;

        vector<ll> v(n);
        temp = n;
        REP(j,0,n - 1) {
            v[j] = j + 1;
        }
        reverse(v.begin(), v.end());
        reverse(v.begin() + (n - m), v.end());
        REP(l,0,n - 1) cout << v[l] << " ";
        cout << "\n";
    } 
}
