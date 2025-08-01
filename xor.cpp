#include <iostream>
using namespace std;
long long computeXOR(long long k) {
    if (k % 4 == 0)
        return k;
    else if (k % 4 == 1)
        return 1;
    else if (k % 4 == 2)
        return k + 1;
    else
        return 0;
}

long long sumXOR(long long n) {
    long long sum = 0;
    for (long long i = 1; i <= n; ++i) {
        sum += computeXOR(i);
    }
    return sum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        cout << sumXOR(n) << endl;
    }

    return 0;
}
