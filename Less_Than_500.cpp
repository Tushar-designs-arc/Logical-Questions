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


// 🟢 Problem 213: Lucky Seven
// Chef considers the number 7 lucky. The 7th letter he sees in a day is his lucky letter.
// Given a string S of length 10 (the first 10 letters Chef saw today), find the 7th character.

// Input: A string S of length 10, containing only lowercase letters (a-z)
// Output: Print the 7th character of S (1-based index: position 7)

// Logic:
// Since string length is exactly 10, access the character at index 6 (0-based indexing)
// → S[6] is the 7th character → output it directly.

// Examples:
// Input: proceeding → Output: d    (7th char = 'd')
// Input: outofsight → Output: i    (7th char = 'i')

#include <iostream>
using namespace std;
    
int main() {
    string S;
    cin >> S;

    cout << S[6];
      
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */


// 🟢 Problem 233: Clear Day
// A week has 7 days. Chef records X rainy days and Y cloudy days.
// Find the number of clear days in the week.

// Input: Two integers X and Y (0 ≤ X, Y ≤ 7 and X + Y ≤ 7)
// Output: Number of clear days = 7 - X - Y

// Logic:
// Total days = 7
// Clear days = Total days - Rainy days - Cloudy days
// → Clear days = 7 - X - Y

// Examples:
// Input: 2 3 → Output: 2    (7 - 2 - 3 = 2 clear days)
// Input: 3 4 → Output: 0    (7 - 3 - 4 = 0 clear days)

#include <iostream>
using namespace std;
    
int main() {
    int X, Y;
    cin >> X >> Y;

    cout << 7 - (X + Y); // 7 - X - Y :- In math (and programming), subtraction works left to right because it’s left-associative meaning (7 - X) - Y
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */


// 🟢 Problem 234: Double Rent
// Chef was paying X rupees as rent. When Chefina moves in, the rent doubles.
// Find the final rent Chef has to pay.

// Input: One integer X (1 ≤ X ≤ 10)
// Output: Print 2 * X (the new rent)

// Logic:
// New rent = 2 × Initial rent
// → Final rent = 2 * X

// Examples:
// Input: 2  → Output: 4   (2 × 2 = 4)
// Input: 3  → Output: 6   (2 × 3 = 6)
// Input: 10 → Output: 20  (2 × 10 = 20)

#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;
    
    cout << 2 * X;
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */