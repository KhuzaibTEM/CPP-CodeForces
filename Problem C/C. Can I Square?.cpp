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
        ll size,temp,total = 0;
        cin >> size;
        REP(j,0,size - 1) {
            cin >> temp;
            total += temp;
        }
        if (total % ll(sqrt(total)) == 0 && (sqrt(total) * sqrt(total) == total)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
