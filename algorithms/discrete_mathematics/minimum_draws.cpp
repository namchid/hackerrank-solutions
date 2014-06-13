#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
    int t;
    cin >> t;
    
    for(int i = 0; i < t; ++i) {
        int pairs;
        cin >> pairs;
        cout << pairs + 1 << endl;
    }
    
    return 0;
}