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

const int N = 1e6 + 5;
int arr[N] , ch_arr[N];

int main() {
    int lim;
    cin >> lim;

    REP(i,1,lim) {
        ll size;
        cin >> size;
        REP(j,1,size) {
            cin >> arr[j];
            ch_arr[arr[j]]++;
        }
        REV(k,50,1) {
            ch_arr[k] += ch_arr[k + 1];
            if(ch_arr[k] % 2 == 1) {
                cout << "YES" << endl;
                goto next;
            }
        }
        cout << "NO" << endl;
        next:;
        REP(l,1,50) ch_arr[l] = 0;
    }
}
