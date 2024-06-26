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
 
 
 
int solve(){
    return 0;
}
 
int main(){
    int lim;
    cin >> lim;
    REP(i,1,lim) {
        ll a,b,c,min_num = 1000000000;
        cin >> a >> b >> c;
        REP (j,1,10) {
            min_num = min(min_num,(abs(a - j) + abs(b - j) + abs(c - j)));
        }
        cout << min_num << endl;
    }
}
