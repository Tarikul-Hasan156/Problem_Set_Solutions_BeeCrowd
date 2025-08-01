#include <bits/stdc++.h>
#define limit 10e5
using namespace std;

int main() {
    int x, y, c = 1;
    cin >> x >> y;
    if (x > 1 && x < 20 && y > x && y < limit) {
        if (x > y) {
            swap(x, y); 
        }

        for (int i = 0; i < y + x - 1; i++)
         {
            for (int j = 0; j < x; j++) {
                if (c > y)
                    break;
                if (j==0)
                printf("%d ", c);
                else if (j==1)
                printf("%d ", c);
                else
                printf("%d", c);
                c++;
                
                
               
            }
            if (c > y) break;
           cout<<'\n';
        }
    } else {
        return 0;
    }

    return 0;
}
