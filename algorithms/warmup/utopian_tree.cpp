// 6.11.14

#include <iostream>

using namespace::std;

int helper(int currHeight, int currCycle, int targetCycle) {
    if(targetCycle == currCycle || targetCycle == 0) return currHeight;
    return (currCycle % 2 == 1) ? helper(currHeight + 1, currCycle + 1, targetCycle) : helper(currHeight * 2, currCycle + 1, targetCycle);
}

int height(int n) {
    return helper(1, 0, n);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}