#include <iostream>

using namespace std;

int main() {
	int TC;
	cin >> TC;
	for(int i = 1; i <= TC; ++i){
		int highJumps = 0, lowJumps = 0;
		int walls, wall, currentWall;
		cin >> walls; cin >> currentWall; --walls;
		while(walls--) {
			cin >> wall;
			if(currentWall > wall) ++lowJumps;
			if(currentWall < wall) ++highJumps;
			currentWall = wall;
		}
		cout << "Case " << i << ": " << highJumps << " " << lowJumps << endl;
	}
	return 0;
}

