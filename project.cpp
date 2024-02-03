#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int simulateBall() {
    int runs = rand() % 7;
    return runs;
}

int simulateOver() {
    int totalRuns = 0;
    for (int i = 0; i < 6; i++) {
        totalRuns += simulateBall();
    }
    return totalRuns;
}

int main() {
    srand(time(0));

    cout << "Team 1 Batting:" << endl;
    int team1Score = simulateOver();
    cout << "Team 1 scored " << team1Score << " runs." << endl;
	cout << "\nTeam 2 Batting:" << endl;
    int team2Score = simulateOver();
    cout << "Team 2 scored " << team2Score << " runs." << endl;
    if (team1Score > team2Score) {
        cout << "\nTeam 1 wins!" << endl;
    } else if (team1Score < team2Score) {
        cout << "\nTeam 2 wins!" << endl;
    } else {
        cout << "\nIt's a tie!" << endl;
    }

    return 0;
}
