// 🟢 Problem 203: Cricket World Cup Qualifier
// The Cricket World Cup is held in Chefland. A team qualifies for the next stage
// only if it scores 12 or more points in the group stage matches.
// Given the total points X scored by a team, determine if it qualifies.

// Input: One integer X (1 ≤ X ≤ 20)
// Output: "Yes" if X ≥ 12, otherwise "No" (case-insensitive)

// Logic:
// If X >= 12 → Qualified (Yes)
// Else → Not Qualified (No)
// Examples:
// Input: 3  → Output: No   (Score < 12 → does not qualify)
// Input: 17 → Output: Yes  (Score ≥ 12 → qualifies)

#include <iostream>
using namespace std;

int main(){
    int X;
    cin >> X;

    if (X >= 12)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */