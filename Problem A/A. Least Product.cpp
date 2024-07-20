#include <bits/stdc++.h>
using namespace std;
 
#define REP(i,a,b) for (int i = a; i <= b; i++)
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
        ll size,count = 0;
        bool zero = false;
        cin >> size;
 
        ll arr[size];
        REP(j,0,size - 1) {
            cin >> arr[j];
            if (arr[j] < 0) count++;
            elif (arr[j] == 0) zero = true;
        }
 
        if (count % 2 != 0 || zero) cout << 0 << endl;
        else {
            cout << 1 << endl;
            cout << 1 << " " << 0 << endl;
        }
    }
}
