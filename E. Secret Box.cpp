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
 
 
 
int solve() {
    return 0;
}
 
int main() {
    int lim;
    cin >> lim;
    REP(i,1,lim) {
        ll x,y,z,k,ans,fans = 0;
        cin >> x >> y >> z >> k;
        REP(a,1,x) {
            REP(b,1,y) {
                if (k % (a * b) == 0 && k/(a * b) <= z) {
                    ans = (x - a + 1) * (y - b + 1) * (z - (k/(a * b)) + 1);
                    fans = max(ans,fans);
                }
            }
        }
        cout << fans << endl;
    }
}
