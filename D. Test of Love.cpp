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
        ll len, init, final;
        char check;
        cin >> len >> init >> final;

        string size;
        cin >> size;

        ll index = init - 1, waste = 0, fail = 0;
        REP(j,0,size.size() - 1) {
            check = size[j];

            if (check == 'L') index = init;
            elif (check == 'W') {
                if (index <= 0) waste++;
            }
            else {
                if (index <= 0) fail++;
            }
            index--;
        }  
        if(waste > final) fail++;
        if  (fail != 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}
