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
        ll size;
        cin >> size;

        ll min_val = size, arr[size], temp = -1;
        REP(j,0,size - 1) {
            cin >> arr[j];
            if (j > 0) {
                if (arr[0]  != arr[j]) {
                    min_val = min(min_val,j - temp - 1);
                }
            }
        }
        min_val = min(min_val, size - temp - 1);
        if (min_val == size) cout << -1 << endl;
        else cout << min_val << endl;
    }
}
