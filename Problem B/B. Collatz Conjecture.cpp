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
 
 
int main(){
    int lim;
    cin >> lim;
    REP(i,1,lim) {
        ll x,y,k;
        cin >> x >> y >> k;
        x++;
        k--;
        while (k > 0) {
            if (x + k % (y - 1) < y) break;
            elif (x % y == 0) {
                while (x % y == 0 && x >= y) x /= y;
            }
            elif (y - (x % y) <= k) {
                k -= y - (x % y);
                x += y - (x % y);
                while (x % y == 0 && x >= y) x /= y;
            }
            else break;
        }
        if (x % y == 0) {
            while (x % y == 0 && x >= y) x /= y;
        }
        cout << x + k % (y - 1) << endl;
    }
}
