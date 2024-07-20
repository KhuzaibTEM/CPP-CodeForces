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
        ll size, prepos, maxpos, value = -1;
        cin >> size >> prepos >> maxpos;
        vector<ll> result(size + 1, -1);
        fill(result.begin() + maxpos, result.begin() + prepos + 1, 1);

        REV(j,maxpos - 1, 1) {
            result[j] = value;
            value = -value;
        }
        value = -1;
        REP(k,prepos + 1, size) {
            result[k] = value;
            value = -value;
        }
        
        REP(l,1,size) cout << result[l] << " ";
        cout << "\n";
    }
}
