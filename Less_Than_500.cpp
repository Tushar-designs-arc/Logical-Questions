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


// 🟢 Problem 252: Saving Taxes
// In Chefland, if you earn strictly more than Y rupees, you pay tax.
// You can invest any amount to reduce your taxable income.
// Given X (earned) and Y (tax threshold), with X > Y,
// find the minimum amount to invest so taxable income ≤ Y.

// Input:
// First line: T (1 ≤ T ≤ 100) — test cases
// Next, T lines: Two integers X and Y (1 ≤ Y < X ≤ 100)
// Output: For each test case, print the minimum amount to invest.

// Logic:
// Taxable income after investment = X - investment
// We need: X - investment ≤ Y
// → investment ≥ X - Y
// Since investment must be an integer, minimum is X - Y.

// Examples:
// Input: 4 2 → Output: 2   (4 - 2 = 2 ≤ 2 → no tax)
// Input: 8 7 → Output: 1   (8 - 1 = 7 ≤ 7 → no tax)
// Input: 5 1 → Output: 4   (5 - 4 = 1 ≤ 1 → no tax)
// Input: 2 1 → Output: 1   (2 - 1 = 1 ≤ 1 → no tax)

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while(T--) { // we can add if(X > Y) cout << X - Y;
        int X, Y;
        cin >> X >> Y;

        cout << X - Y << endl;
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */


// 🟢 Problem 255: Masterchef Finals
// Only the top 10 contestants qualify for the finals.
// Given Chef's rank X, determine if he made it to the top 10 or not.

// Input:
// First line: T (1 ≤ T ≤ 100) — test cases
// Next, T lines: One integer X (1 ≤ X ≤ 100) — Chef's current rank
// Output: For each test case, print "YES" if X ≤ 10, otherwise "NO" (case-insensitive)

// Logic:
// Chef qualifies if rank X ≤ 10
// → If X <= 10 → "YES"
// → Else → "NO"

// Examples:
// Input: 15 → Output: NO   (15 > 10 → does not qualify)
// Input: 10 → Output: YES  (10 ≤ 10 → qualifies)
// Input: 1  → Output: YES  (1 ≤ 10 → qualifies)
// Input: 50 → Output: NO   (50 > 10 → does not qualify)

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while (T--) {
        int X;
        cin >> X;

        if(X <= 10)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */


// 🟢 Problem 257: Biryani Classes
// Chef attends X weeks of MasterChef's biryani classes, each costing Y coins.
// Find the total amount Chef has to pay.

// Input:
// First line: T (1 ≤ T ≤ 10^4)
// Next T lines: Two integers X and Y (1 ≤ X, Y ≤ 100)
// Output: For each test case, print X * Y (total cost)

// Logic:
// Total cost = Number of weeks × Cost per week
// → Total = X * Y

// Examples:
// Input: 1 10 → Output: 10   (1 × 10 = 10)
// Input: 1 15 → Output: 15   (1 × 15 = 15)
// Input: 2 10 → Output: 20   (2 × 10 = 20)
// Input: 2 15 → Output: 30   (2 × 15 = 30)

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while(T--) {
        int X, Y;
        cin >> X >> Y;

        cout << X * Y << endl;
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */


// 🟢 Problem 260: Chef Plays Ludo
// In Ludo, Chef can enter a new token only if he rolls a 6 on the die.
// Given X (the number rolled), check if Chef can enter a new token.

// Input:
// First line: T (1 ≤ T ≤ 6) — test cases
// Next, T lines: One integer X (1 ≤ X ≤ 6)
// Output: For each test case, print "YES" if X == 6, otherwise "NO" (case-insensitive)

// Logic:
// If X == 6 → Can enter token → "YES"
// Else → Cannot enter → "NO"

// Examples:
// Input: 1 → Output: NO   (1 ≠ 6 → cannot enter)
// Input: 6 → Output: YES  (6 == 6 → can enter)
// Input: 3 → Output: NO   (3 ≠ 6 → cannot enter)

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while(T--) {
        int X;
        cin >> X;

        if (X == 6)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */


// 🟢 Problem 264: How Many Unattempted Problems
// CodeChef's Beginner section has X total problems.
// Chef has attempted Y of them.
// Find how many problems are still unattempted.

// Input: Two integers X and Y (1 ≤ Y ≤ X ≤ 1000)
// Output: Print X - Y (number of unattempted problems)

// Logic:
// Unattempted = Total problems - Attempted problems
// → Unattempted = X - Y

// Examples:
// Input: 10 4   → Output: 6    (10 - 4 = 6 unattempted)
// Input: 10 10  → Output: 0    (10 - 10 = 0 unattempted)
// Input: 1000 990 → Output: 10 (1000 - 990 = 10 unattempted)
// Input: 500 1  → Output: 499 (500 - 1 = 499 unattempted)

#include <iostream>
using namespace std;
    
int main() {
    int X, Y;
    cin >> X >> Y;

    cout << X - Y << endl;
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */


// 🟢 Problem 267: Determine the Score
// A problem is worth X points and has exactly 10 test cases.
// Each test case is worth the same number of points.
// Chef passes N test cases. Find Chef's score.

// Input:
// First line: T (1 ≤ T ≤ 100)
// Next T lines: Two integers X and N (10 ≤ X ≤ 200, 0 ≤ N ≤ 10, X is multiple of 10)
// Output: For each test case, print Chef's score.

// Logic:
// Points per test case = X / 10
// Chef's score = (X / 10) * N

// Examples:
// Input: 10 3   → Output: 3    (10/10 * 3 = 1 * 3 = 3)
// Input: 100 10 → Output: 100  (100/10 * 10 = 10 * 10 = 100)
// Input: 130 4  → Output: 52   (130/10 * 4 = 13 * 4 = 52)
// Input: 70 0   → Output: 0    (70/10 * 0 = 7 * 0 = 0)

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while(T--) {
        int X, N;
        cin >> X >> N;

        cout << (X / 10) * N << endl;
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */


// 🟢 Problem 267: 404 Not Found
// Chef's website returns:
//   - "NOT FOUND" if HTTP status code X == 404
//   - "FOUND" otherwise
// Given X, output the correct response.

// Input: One integer X (100 ≤ X ≤ 999)
// Output: "NOT FOUND" if X == 404, else "FOUND" (case-insensitive)

// Logic:
// If X == 404 → Print "NOT FOUND"
// Else → Print "FOUND"

// Examples:
// Input: 200 → Output: FOUND      (200 ≠ 404)
// Input: 404 → Output: NOT FOUND  (404 == 404)
// Input: 301 → Output: FOUND      (301 ≠ 404)

#include <iostream>
using namespace std;
    
int main() {
    int X;
    cin >> X;

    if(X == 404)
        cout << "Not Found";
    else
        cout << "Found";

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */


// 🟢 Problem 271: Off By One
// The calculator computes A + B correctly, but appends a '1' at the end of the result.
// Given A and B, predict the calculator's output.

// Input: Two integers A and B (1 ≤ A, B ≤ 50)
// Output: Print (A + B) * 10 + 1

// Logic:
// Actual sum = A + B
// Calculator output = (A + B) followed by 1
// → Mathematically: (A + B) * 10 + 1

// Examples:
// Input: 3 5  → Output: 81   ((3+5)*10 + 1 = 8*10 + 1 = 81)
// Input: 4 12 → Output: 161  ((4+12)*10 + 1 = 16*10 + 1 = 161)

#include <iostream>
using namespace std;
    
int main() {
    int A, B;
    cin >> A >> B;

    cout << A + B << "1"; // Can also use 1.
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */