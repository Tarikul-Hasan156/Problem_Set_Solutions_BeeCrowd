#include <iostream>
#include <vector>
#include <algorithm>
#define li long long
#define bost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    bost;
    li x;
    cin >> x;
    while (x--)
    {
        li n;
        cin >> n;
        vector<li> arr(n);
        for (li i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<li> swt;
        for (li i = 0; i < n; i++)
        {
            auto it = lower_bound(swt.begin(), swt.end(), arr[i]);
            if (it == swt.end())
            {
                swt.push_back(arr[i]);
            }
            else
            {
                *it = arr[i];
            }
        }
        cout << swt.size() <<endl;
    }
    return 0;
}