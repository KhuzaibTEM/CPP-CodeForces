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
    ll n,m,lim,lim2,index1,index2;
    index1 = 0;
    index2 = 0;
 
    cin >> lim;
    int Vlist[lim], Plist[lim];
 
    for (int i = 0, j = lim - 1; i < lim, j >= 0; i++, j--) {
        cin >> m;
        Vlist[m] = i;
        Plist[m] = j;
    }
 
    cin >> lim2;
 
    REP(j,0,lim2 - 1) {
        cin >> n;
        index1 += Vlist[n] + 1;
        index2 += Plist[n] + 1;
    }
    cout << index1 << " " << index2 << endl; 
}
