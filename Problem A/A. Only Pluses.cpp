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
        ll a = 0,b = 0,c = 0;
        cin >> a >> b >> c;
        REP(j,1,5) {
            if (a == min(a,b) && a < c) a++;
            elif (b == min(a,b) && b < c) b++;
            else c++;
        }
        cout << a * b * c << endl;
    } 
}
