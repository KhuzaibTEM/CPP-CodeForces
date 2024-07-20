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
    str arr[3];
    REP(i,1,lim) {
        REP(k,0,2) {
            cin >> arr[k];
        }
        REP(j,0,2) {
            if (arr[j] == "A?B" || arr[j] == "B?A" || arr[j] == "?BA" || arr[j] == "?AB" || arr[j] == "AB?" || arr[j] == "BA?") {
                cout << 'C' << endl;
                break;
            }
            elif (arr[j] == "A?C" || arr[j] == "C?A" || arr[j] == "?CA" || arr[j] == "?AC" || arr[j] == "AC?" || arr[j] == "CA?") {
                cout << 'B' << endl;
                break;
            }
            elif (arr[j] == "B?C" || arr[j] == "C?B" || arr[j] == "?CB" || arr[j] == "?BC" || arr[j] == "BC?" || arr[j] == "CB?") {
                cout << 'A' << endl;
                break;
            }
        }
    }
}
