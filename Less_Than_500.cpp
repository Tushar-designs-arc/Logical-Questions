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


// 🟢 Problem 272: Donation Drive
// A blood drive needs N donations in total.
// X donations have been collected so far.
// Find how many more donations are needed to reach N.

// Input:
// First line: T (1 ≤ T ≤ 200)
// Next T lines: Two integers N and X (1 ≤ X ≤ N ≤ 20)
// Output: For each test case, print N - X

// Logic:
// Remaining donations = Total needed - Already collected
// → Remaining = N - X

// Examples:
// Input: 5 2 → Output: 3   (5 - 2 = 3 more needed)
// Input: 3 3 → Output: 0   (3 - 3 = 0 more needed)
// Input: 5 4 → Output: 1   (5 - 4 = 1 more needed)
// Input: 7 5 → Output: 2   (7 - 5 = 2 more needed)

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, N;
        cin >> N >> X;

        cout << N - X << endl;
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */


// 🟢 Problem 273: Kitchen Timings
// Chef's kitchen works from X pm to Y pm (1 ≤ X < Y ≤ 12).
// Find how many hours Chef works.

// Input:
// First line: T (1 ≤ T ≤ 100)
// Next, T lines: Two integers X and Y (1 ≤ X < Y ≤ 12)
// Output: For each test case, print Y - X

// Logic:
// Working hours = End time - Start time
// → Hours = Y - X

// Examples:
// Input: 1 2  → Output: 1   (2 - 1 = 1 hour)
// Input: 3 7  → Output: 4   (7 - 3 = 4 hours)
// Input: 9 11 → Output: 2   (11 - 9 = 2 hours)
// Input: 2 10 → Output: 8   (10 - 2 = 8 hours)

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        cout << Y - X << endl;
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */


// 🟢 Problem 273: IPL Ticket Rush
// N students want to attend an IPL match, but only M tickets are available.
// Find how many students won't get a ticket.

// Input:
// First line: T (1 ≤ T ≤ 1000)
// Next T lines: Two integers N and M (1 ≤ N, M ≤ 10^5)
// Output: For each test case, print max(0, N - M)

// Logic:
// Students without ticket = N - M, but never negative
// → Answer = max(0, N - M)

// Examples:
// Input: 5 3 → Output: 2   (5 > 3 → 2 can't get ticket)
// Input: 5 7 → Output: 0   (5 ≤ 7 → all get ticket)
// Input: 4 1 → Output: 3   (4 > 1 → 3 can't get ticket)
// Input: 8 8 → Output: 0   (8 == 8 → all get ticket)

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        if(N > M) cout << N - M << endl;
        else cout << 0 << endl;

        // // OR
        // cout << max(0, N - M) << endl;
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */


// 🟢 Problem 279: Audible Range
// Binary (Chef's dog) hears frequencies from 67 Hz to 45000 Hz (both inclusive).
// Given frequency X, determine if binary can hear it or not.

// Input:
// First line: T (1 ≤ T ≤ 10^4)
// Next T lines: One integer X (1 ≤ X ≤ 10^6)
// Output: For each test case, print "YES" if 67 ≤ X ≤ 45000, else "NO" (case-insensitive)

// Logic:
// If 67 <= X <= 45000 → "YES"
// Else → "NO"

// Examples:
// Input: 42     → Output: NO   (42 < 67)
// Input: 67     → Output: YES  (67 ≥ 67)
// Input: 402    → Output: YES  (67 ≤ 402 ≤ 45000)
// Input: 45000  → Output: YES  (45000 ≤ 45000)
// Input: 45005  → Output: NO   (45005 > 45000)

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while (T--) {
        int X;
        cin >> X;

        if (67 <= X && X <= 45000)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */


// 🟢 Problem 279: Reach on Time
// Chef takes 30 minutes to reach office.
// He leaves X minutes before he is supposed to reach.
// Determine if he will reach on time or not.

// Input:
// First line: T (1 ≤ T ≤ 60)
// Next T lines: One integer X (1 ≤ X ≤ 60)
// Output: For each test case, print "YES" if X ≥ 30, else "NO" (case-insensitive)

// Logic:
// Chef reaches on time if he leaves at least 30 minutes early.
// → If X >= 30 → "YES"
// → Else → "NO"

// Examples:
// Input: 30 → Output: YES  (30 >= 30 → on time)
// Input: 60 → Output: YES  (60 >= 30 → early)
// Input: 14 → Output: NO   (14 < 30 → late)
// Input: 29 → Output: NO   (29 < 30 → late)
// Input: 31 → Output: YES  (31 >= 30 → on time)
// Input: 42 → Output: YES  (42 >= 30 → early)

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while (T--) {
        int X;
        cin >> X;

        if(X >= 30)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */


// 🟢 Problem 279: Puzzle Hunt
// The puzzle hunt allows teams of 6 to 8 people (inclusive).
// But, team cannot have more than 8 people.
// Chef's team has N people. Check if they are eligible.

// Input: One integer N (1 ≤ N ≤ 10)
// Output: Print "Yes" if 6 ≤ N ≤ 8, otherwise "No" (case-insensitive)

// Logic:
// If N >= 6 AND N <= 8 → "Yes"
// Else → "No"

// Examples:
// Input: 4 → Output: No   (4 < 6 → too small)
// Input: 7 → Output: Yes  (6 ≤ 7 ≤ 8 → eligible)
// Input: 8 → Output: Yes  (6 ≤ 8 ≤ 8 → eligible)

#include <iostream>
using namespace std;
    
int main() {
    int N;
    cin >> N;

    if(N >= 6 && N <= 8)
        cout << "Yes";
    else
        cout << "No";
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */



// 🟢 Problem 280: Bone Appetit
// Suri Bhai visits two sectors on Halloween:
// - "Bones": N people, each gives X treats
// - "Blood": M people, each gives Y treats
// Find total treats Suri Bhai gets.

// Input:
// Line 1: Two integers N and M (0 ≤ N, M ≤ 100)
// Line 2: Two integers X and Y (0 ≤ X, Y ≤ 1000)
// Output: Print total treats = (N * X) + (M * Y)

// Logic:
// Total treats = (people in Bones × treats per person) + (people in Blood × treats per person)
// → Total = N * X + M * Y

// Examples:
// Input:
// 4 2
// 5 6
// → Output: 32   (4*5 + 2*6 = 20 + 12 = 32)

// Input:
// 5 0
// 0 2
// → Output: 0    (5*0 + 0*2 = 0 + 0 = 0)

#include <iostream>
using namespace std;
    
int main() {
    int N, M, X, Y;
    cin >> N >> M >> X >> Y;
    
    cout << (N * X) + (M * Y);

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */



// 🟢 Problem 281: Who is taller!
// Alice's height = X cm, Bob's height = Y cm (X ≠ Y)
// Determine who is taller.

// Input:
// First line: T (1 ≤ T ≤ 1000)
// Next T lines: Two integers X and Y (100 ≤ X, Y ≤ 200, X ≠ Y)
// Output: For each test case, print "A" if Alice taller, "B" if Bob taller (case-insensitive)

// Logic:
// If X > Y → Alice is taller → "A"
// Else (Y > X) → Bob is taller → "B"

// Examples:
// Input: 150 160 → Output: B   (150 < 160 → Bob taller)
// Input: 160 150 → Output: A   (160 > 150 → Alice taller)

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        if(X > Y)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */


// 🟢 Problem 281: Reach the Target
// Team B is chasing a target of X runs.
// They have currently scored Y runs.
// Find how many more runs they need to win.

// Input:
// First line: T (1 ≤ T ≤ 10)
// Next T lines: Two integers X and Y (50 ≤ Y < X ≤ 200)
// Output: For each test case, print X - Y

// Logic:
// Runs needed to win = Target - Current score
// → Answer = X - Y

// Examples:
// Input: 200 50 → Output: 150  (200 - 50 = 150)
// Input: 100 99 → Output: 1    (100 - 99 = 1)
// Input: 130 97 → Output: 33   (130 - 97 = 33)
// Input: 53 51  → Output: 2    (53 - 51 = 2)

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        cout << X - Y << endl;
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */


// 🟢 Problem 284: Best of Two
// Chef takes an exam twice: scores X in first attempt, Y in second.
// Final score = maximum of X and Y.

// Input:
// First line: T (1 ≤ T ≤ 1000)
// Next T lines: Two integers X and Y (0 ≤ X, Y ≤ 100)
// Output: For each test case, print max(X, Y)

// Logic:
// Final score = the higher score between X and Y
// → Answer = max(X, Y)

// Examples:
// Input: 40 60 → Output: 60   (max(40,60) = 60)
// Input: 67 55 → Output: 67   (max(67,55) = 67)
// Input: 50 50 → Output: 50   (max(50,50) = 50)
// Input: 1 100 → Output: 100  (max(1,100) = 100)

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        if (X >= Y)
            cout << X << endl;
        else
            cout << Y << endl;
        
        // // OR
        // cout << max(X, Y) << endl;
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */


// 🟢 Problem 284: 2000
// Chef has N notes of ₹2000.
// He wants to pay the same amount using ₹500 notes only.
// Find how many ₹500 notes he needs.

// Input: One integer N (1 ≤ N ≤ 100)
// Output: Print number of ₹500 notes = N * 4

// Logic:
// Total amount = N * 2000
// Each ₹500 note = 500 rupees
// Number of ₹500 notes = (N * 2000) / 500 = N * 4

// Examples:
// Input: 4 → Output: 16   (4 × 2000 = 8000 → 8000 / 500 = 16)

#include <iostream>
using namespace std;
    
int main() {
    int N;
    cin >> N;

    cout << N * 4;
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */


// 🟢 Problem 285: Roller Coaster
// Chef's son has height X inches.
// Minimum height required for ride: H inches.
// Determine if he can go on the ride.

// Input:
// First line: T (1 ≤ T ≤ 1000)
// Next T lines: Two integers X and H (1 ≤ X, H ≤ 100)
// Output: For each test case, print "YES" if X ≥ H, else "NO" (case-insensitive)

// Logic:
// If X >= H → Can go → "YES"
// Else → Cannot go → "NO"

// Examples:
// Input: 15 20 → Output: NO   (15 < 20 → too short)
// Input: 50 48 → Output: YES  (50 ≥ 48 → tall enough)
// Input: 32 32 → Output: YES  (32 ≥ 32 → exactly tall enough)
// Input: 38 39 → Output: NO   (38 < 39 → too short)

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        if (X >= Y)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;        
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */