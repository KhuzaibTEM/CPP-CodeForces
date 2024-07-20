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
    int lim,max,ent_p,ext_p,curr_p;
    cin >> lim;
    max = 0;
    curr_p = 0;
    REP(i,1,lim){
        cin >> ext_p; cin >> ent_p;
        curr_p +=  (ent_p - ext_p);
        if (curr_p > max) max = curr_p;
    }
    cout << max << endl;
    
}
