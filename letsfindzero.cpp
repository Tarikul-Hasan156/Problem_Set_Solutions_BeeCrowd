#include <iostream>
#include <string>
using namespace std;

int countZerosWithoutDoubleZero(const string &numStr) {
    int zeroCount = 0;
    bool hasDoubleZero = false;

    for (size_t i = 0; i < numStr.length(); ++i) {
        // Check if we have a '0'
        if (numStr[i] == '0') {
            // Check for double zero
            if (i < numStr.length() - 1 && numStr[i + 1] == '0') {
                hasDoubleZero = true;
                break;
            }
            zeroCount++;
        }
    }

    return hasDoubleZero ? 0 : zeroCount;
}

int main() {
    string number;
    cout << "Enter a number: ";
    cin >> number;
    

    int result = countZerosWithoutDoubleZero(number);
    cout << "Number of zeros: " << result << endl;

    return 0;
}
