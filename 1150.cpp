#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    
    // Ensure y is greater than x, as per original logic.
    while (y <= x) {
        cin >> y;
    }

    int sum = 0, count = 0;
    
    // Efficiently count numbers until sum exceeds y
    for (int i = x; sum <= y; i++) {
        sum += i;
        count++;
    }
    
    cout << count << endl;

    return 0;
}
