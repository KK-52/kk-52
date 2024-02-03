#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to simulate a single ball
int simulateBall() {
    // Generate a random number between 0 and 6 for runs scored
    int runs = rand() % 7;
    return runs;
}

// Function to simulate a single over
int simulateOver() {
    int totalRuns = 0;
    // Simulate 6 balls in an over
    for (int i = 0; i < 6; i++) {
        totalRuns += simulateBall();
    }
    return totalRuns;
}

int main() {
    // Seed the random number generator
    srand(time(0));

    // Simulate Team 1's inning
    cout << "Team 1 Batting:" << endl;
    int team1Score = simulateOver();
    cout << "Team 1 scored " << team1Score << " runs." << endl;

    // Simulate Team 2's inning
    cout << "\nTeam 2 Batting:" << endl;
    int team2Score = simulateOver();
    cout << "Team 2 scored " << team2Score << " runs." << endl;

    // Determine the winner
    if (team1Score > team2Score) {
        cout << "\nTeam 1 wins!" << endl;
    } else if (team1Score < team2Score) {
        cout << "\nTeam 2 wins!" << endl;
    } else {
        cout << "\nIt's a tie!" << endl;
    }

    return 0;
}
