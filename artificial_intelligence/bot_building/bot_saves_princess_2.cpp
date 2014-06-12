#include <iostream>
#include <vector>

using namespace std;

void nextMove(int n, int r, int c, vector <string> grid){
    string nextMove = "";
    
    int pX = -1, pY = -1;
    int i = 0;
    while(pX < 0) {
        pY = static_cast<int>(grid[i].find('p')) % n;
        if(pY > -1) pX = i;
        ++i;
    }

    if(pX < r) {
        cout << "UP\n";
        return;
    }
    if(pX > r) {
        cout << "DOWN\n";
        return;
    }
    if(pY < c) {
        cout << "LEFT\n";
        return;
    }
    cout << "RIGHT\n";
    return;
}

int main(void) {
    
    int n, r, c;
    vector <string> grid;
    
    cin >> n;
    cin >> r;
    cin >> c;
    
    for(int i=0; i<n; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }
    
    nextMove(n, r, c, grid);
    return 0;
}