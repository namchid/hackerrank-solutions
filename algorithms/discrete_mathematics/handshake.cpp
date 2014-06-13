#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;

int handshakes(int people) {
    if(people > 2) return people - 1 + handshakes(people - 1);
    if(people > 1) return 1;
    return 0;
}

int main(int argc, char* argv[]) {
    int t;
    cin >> t;
    
    for(int i = 0; i < t; ++i) {
        int people;
        cin >> people;
        
        cout << handshakes(people) << endl;
    }
    
    return 0;
}