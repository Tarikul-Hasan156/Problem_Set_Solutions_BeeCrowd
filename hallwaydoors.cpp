#include <iostream>
#include <climits>
using namespace std;
typedef long long ll;

ll minimal_time(ll b, ll c, ll target) {
    ll left = 0, right = 2e18;
    while (left < right) {
        ll mid = left + (right - left) / 2;
        ll specials = (mid + c) / (c + 1);
        ll total_damage = b * mid + b * specials;
        if (total_damage >= target) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return left;
}

int main() {
    ll h1, b1, c1, h2, b2, c2;
    cin >> h1 >> b1 >> c1 >> h2 >> b2 >> c2;
    ll t1 = minimal_time(b2, c2, h1);
    ll t2 = minimal_time(b1, c1, h2);
    if (t1 < t2) {
        cout << "JAKE PAUL" << endl;
    } else if (t2 < t1) {
        cout << "MIKE TYSON" << endl;
    } else {
        cout << "DRAW" << endl;
    }

    return 0;
}