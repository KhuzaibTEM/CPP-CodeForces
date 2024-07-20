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
    int lim;
    cin >> lim;
    REP(i,1,lim) {
        str substr, subseq;
        cin >> substr >> subseq;
 
		ll total = substr.size() + subseq.size(), total_const = substr.size() + subseq.size(), cons;
 
		REP(j,0,subseq.size()) {
			cons = j;
			REP(k,0,substr.size()) {
          if (cons < subseq.size() && substr[k] == subseq[cons]) cons++;
      }
			total = min(total, total_const - cons + j);
		}
 
		cout << total << '\n';
    }
}
