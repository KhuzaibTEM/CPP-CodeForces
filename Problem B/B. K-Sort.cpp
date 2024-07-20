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
        ll size,temp,total = 0,max_num = 0;
        cin >> size;
        ll arr[size];
        REP(j,0,size - 1) cin >> arr[j];
        REP(k,1,size - 1) {
            if (arr[k - 1] > arr[k]) {
                total += arr[k - 1] - arr[k];
                max_num = max(max_num, arr[k - 1] - arr[k]);
                arr[k] = arr[k - 1];
            }
        }
        total += max_num;
        cout << total << endl;
    }
}
