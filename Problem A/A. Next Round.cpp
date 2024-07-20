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
    ll size,k,total = 0;
    cin >> size >> k;
    ll arr[size];
    REP(i,0,size - 1) {
        cin >> arr[i];
    }
    REP(j,0,size - 1) {
        if (arr[j] >= arr[k - 1] && arr[j] > 0) total++;
    }
    cout << total << endl;
}
