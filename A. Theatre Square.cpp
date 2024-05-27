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
typedef vector<int> vti;
typedef vector<str> vts;
 
 
 
int solve(){
    return 0;
}
 
int main(){
    long double a,b,c;
    long long ans1,ans2;
    cin >> a; cin >> b; cin >> c;
 
    ans1 = round(a/c); ans2 = round(b/c);
 
    if (round(a/c) == int(a/c) && (a/c) != int(a/c)){
        ans1 = round(a/c) + 1;
    }
 
    if (round(b/c) == int(b/c) && (b/c) != int(b/c)){
        ans2 = round(b/c) + 1;
    }
 
    long long v = ans1 * ans2;
    cout <<  v << endl;
}
