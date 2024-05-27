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
    int n,k,ncount,kcount,lim,ans;
    ncount = 0; kcount = 0; ans = 0;
    cin >> lim;
    REP(i,1,lim){
        cin >> n; cin >> k;
        ncount += n;
        kcount += k;
    }
    if (lim - kcount >= kcount) {
        ans += kcount;
    } elif (lim - kcount < kcount) {
        ans += lim - kcount;
    } 
    if (lim - ncount >= ncount) {
        ans += ncount;
    } elif (lim - ncount < ncount) {
        ans += lim - ncount;
    }
    cout << ans << endl;
}
