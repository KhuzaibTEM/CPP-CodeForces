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
        ll n,a,b;
        ld k = 0, total = 0;
        cin >> n >> a >> b;
        if (b > a) {
            if (b - a <= min(n,b)) k = b - a;
            else k = min(n,b);
        }
        total = (k/2) * (2 * (b) + (k - 1) * (-1));
        cout << ll(total + (n - k) * a) << endl;
    }
}
