#include<bits/stdc++.h>
using namespace std;
//n n get wa
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t; while (t--) {
     
     
    int a, b, n; cin >> a >> b >> n;
    int p = a + b;
    int div = n / p;
    div = 0;
    n = n % p;
    int aw = 0;
    if (a <= n) {
        ///
        n -= a;
        //now bob turn;
          if (b <= n) cout << "Bob\n";
            else {
                ////
                if (div) cout << "Bob\n";
                else cout << "Alice\n";
            }


    }
    else {
        cout << "Bob\n";
    }

        }
    return 0;
    }