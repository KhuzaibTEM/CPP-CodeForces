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


ll checker(ll num, vector<ll>& a) {
    ll temp = 0;

    REV(i,num - 1, 0) {
        if (a[i] > 0) {
            if (i > 0 && a[i - 1] > 0) {
                ll limit = min(a[i], a[i - 1]);
                a[i] -= limit;
                a[i - 1] -= limit;
            }
            temp += a[i];
        }
    }

    return temp;
}

int main() {
    int size;
    cin >> size;

    vector<ll> v;
    REP(i,0, size - 1) {
        ll num;
        cin >> num;
        vector<ll> a(num);
        REP(j,0,num - 1) cin >> a[j];
        v.push_back(checker(num, a));
    }

    REP(i,0,size - 1) cout << v[i] << endl;
}
