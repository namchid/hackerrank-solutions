// 6.12.14
#include <iostream>
#include <vector>
#include <string>

using namespace std;
using std::vector;
using std::string;

int main(int argc, char* argv[]) {
    int n;
	cin >> n;

	vector<string> rocks(n);
	for(int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		rocks[i] = s;
	}

	int gems = 0;
	for(char letter = 'a'; letter <= 'z'; ++letter) {
		int tmpCount = 0;
		for(int i = 0; i < n; ++i) {
			if(rocks[i].find(letter) == -1) break;
			++tmpCount;
		}
		if(tmpCount == n) ++gems;
	}

	cout << gems << "\n";
    return 0;
}