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
        ll size;
        str word,sorted_word,ans;
        ll word_list[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        cin >> size >> word;
        REP(j,0,size - 1) {
            word_list[int(word[j]) - int('a')] = 1;
        }
        REP(k,0,25) {
            if (word_list[k] == 1) sorted_word.push_back(char(k + int('a')));
        }
        REP(l,0,size - 1) {
            ll num = find(sorted_word.begin(), sorted_word.end(), word[l]) - sorted_word.begin();
            ans.push_back(sorted_word[sorted_word.size() - num - 1]);
        }
        cout << ans << endl;
    }
}
