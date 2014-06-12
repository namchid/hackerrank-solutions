#include <iostream>
#include <vector>

using namespace std;

template<typename T>
void prettyPrint(vector<T> &vec) {
    for(int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << "\n";
    }
}

void displayPathtoPrincess(int n, vector <string> grid) {
    
    int mX = -1, mY = -1, pX = -1, pY = -1;
    
    int i = 0;
    while((mX < 0 || pX < 0) && i < grid.size()) {
        if(mX < 0) {
            mY = i;
            mX = static_cast<int>(grid[i].find('m')) % n;
        }
        if(pX < 0) {
            pY = i;
            pX = static_cast<int>(grid[i].find('p')) % n;
        }
        ++i;
    }
    
    vector<string> moves;
    if(mX < pX) {
        for(int i = mX; i < pX; ++i)
            moves.push_back("RIGHT");
    } else {
        for(int i = pX; i < mX; ++i)
            moves.push_back("LEFT");
    }
    if(mY < pY) {
        for(int i = mY; i < pY; ++i)
            moves.push_back("DOWN");
    } else {
        for(int i = pY; i < mY; ++i)
            moves.push_back("UP");
    }
    
    prettyPrint(moves);
}

int main(void) {
    
    int m;
    vector <string> grid;
    
    cin >> m;
    
    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }
    
    displayPathtoPrincess(m,grid);
    
    return 0;
}
