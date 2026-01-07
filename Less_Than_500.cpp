// 🟢 Problem 203: Cricket World Cup Qualifier
// The Cricket World Cup is held in Chefland. A team qualifies for the next stage
// only if it scores 12 or more points in the group stage matches.
// Given the total points X scored by a team, determine if it qualifies.

// Input:
// One integer X (1 ≤ X ≤ 20)

// Output:
// "Yes" if X ≥ 12, otherwise "No" (case-insensitive)

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
    
    
    // // Or,
    // cout << (X >= 12 ? "Yes" : "No") << '\n';

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 213: Lucky Seven
// Chef considers the number 7 lucky. The 7th letter he sees in a day is his lucky letter.
// Given a string S of length 10 (the first 10 letters Chef saw today), find the 7th character.

// Input:
// A string S of length 10, containing only lowercase letters (a-z)

// Output:
// Print the 7th character of S (1-based index: position 7)

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

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 233: Clear Day
// A week has 7 days. Chef records X rainy days and Y cloudy days.
// Find the number of clear days in the week.

// Input:
// Two integers X and Y (0 ≤ X, Y ≤ 7 and X + Y ≤ 7)

// Output:
// Number of clear days = 7 - X - Y

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

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 234: Double Rent
// Chef was paying X rupees as rent. When Chefina moves in, the rent doubles.
// Find the final rent Chef has to pay.

// Input:
// One integer X (1 ≤ X ≤ 10)

// Output:
// Print 2 * X (the new rent)

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

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 252: Saving Taxes
// In Chefland, if you earn strictly more than Y rupees, you pay tax.
// You can invest any amount to reduce your taxable income.
// Given X (earned) and Y (tax threshold), with X > Y,
// find the minimum amount to invest so taxable income ≤ Y.

// Input:
// First line: T (1 ≤ T ≤ 100) — test cases
// Next, T lines: Two integers X and Y (1 ≤ Y < X ≤ 100)

// Output:
// For each test case, print the minimum amount to invest.

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

        cout << X - Y << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 255: Masterchef Finals
// Only the top 10 contestants qualify for the finals.
// Given Chef's rank X, determine if he made it to the top 10 or not.

// Input:
// First line: T (1 ≤ T ≤ 100) — test cases
// Next, T lines: One integer X (1 ≤ X ≤ 100) — Chef's current rank

// Output:
// For each test case, print "YES" if X ≤ 10, otherwise "NO" (case-insensitive)

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
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 257: Biryani Classes
// Chef attends X weeks of MasterChef's biryani classes, each costing Y coins.
// Find the total amount Chef has to pay.

// Input:
// First line: T (1 ≤ T ≤ 10^4)
// Next, T lines: Two integers X and Y (1 ≤ X, Y ≤ 100)

// Output:
// For each test case, print X * Y (total cost)

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

        cout << X * Y << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 260: Chef Plays Ludo
// In Ludo, Chef can enter a new token only if he rolls a 6 on the die.
// Given X (the number rolled), check if Chef can enter a new token.

// Input:
// First line: T (1 ≤ T ≤ 6) — test cases
// Next, T lines: One integer X (1 ≤ X ≤ 6)

// Output:
// For each test case, print "YES" if X == 6, otherwise "NO" (case-insensitive)

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
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 264: How Many Unattempted Problems
// CodeChef's Beginner section has X total problems.
// Chef has attempted Y of them.
// Find how many problems are still unattempted.

// Input:
// Two integers X and Y (1 ≤ Y ≤ X ≤ 1000)

// Output:
// Print X - Y (number of unattempted problems)

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

    cout << X - Y << '\n';
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 267: Determine the Score
// A problem is worth X points and has exactly 10 test cases.
// Each test case is worth the same number of points.
// Chef passes N test cases. Find Chef's score.

// Input:
// First line: T (1 ≤ T ≤ 100)
// Next, T lines: Two integers X and N (10 ≤ X ≤ 200, 0 ≤ N ≤ 10, X is multiple of 10)

// Output:
// For each test case, print Chef's score.

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

        cout << (X / 10) * N << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 267: 404 Not Found
// Chef's website returns:
//   - "NOT FOUND" if HTTP status code X == 404
//   - "FOUND" otherwise
// Given X, output the correct response.

// Input:
// One integer X (100 ≤ X ≤ 999)

// Output:
// "NOT FOUND" if X == 404, else "FOUND" (case-insensitive)

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

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 271: Off By One
// The calculator computes A + B correctly, but appends a '1' at the end of the result.
// Given A and B, predict the calculator's output.

// Input:
// Two integers A and B (1 ≤ A, B ≤ 50)

// Output:
// Print (A + B) * 10 + 1

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

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 272: Donation Drive
// A blood drive needs N donations in total.
// X donations have been collected so far.
// Find how many more donations are needed to reach N.

// Input:
// First line: T (1 ≤ T ≤ 200)
// Next, T lines: Two integers N and X (1 ≤ X ≤ N ≤ 20)

// Output:
// For each test case, print N - X

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

        cout << N - X << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 273: Kitchen Timings
// Chef's kitchen works from X pm to Y pm (1 ≤ X < Y ≤ 12).
// Find how many hours Chef works.

// Input:
// First line: T (1 ≤ T ≤ 100)
// Next, T lines: Two integers X and Y (1 ≤ X < Y ≤ 12)

// Output:
// For each test case, print Y - X

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

        cout << Y - X << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 273: IPL Ticket Rush
// N students want to attend an IPL match, but only M tickets are available.
// Find how many students won't get a ticket.

// Input:
// First line: T (1 ≤ T ≤ 1000)
// Next, T lines: Two integers N and M (1 ≤ N, M ≤ 10^5)

// Output:
// For each test case, print max(0, N - M)

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

        if(N > M) cout << N - M << '\n';
        else cout << 0 << '\n';

        // // OR
        // cout << max(0, N - M) << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 279: Audible Range
// Binary (Chef's dog) hears frequencies from 67 Hz to 45000 Hz (both inclusive).
// Given frequency X, determine if binary can hear it or not.

// Input:
// First line: T (1 ≤ T ≤ 10^4)
// Next, T lines: One integer X (1 ≤ X ≤ 10^6)

// Output:
// For each test case, print "YES" if 67 ≤ X ≤ 45000, else "NO" (case-insensitive)

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
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 279: Reach on Time
// Chef takes 30 minutes to reach office.
// He leaves X minutes before he is supposed to reach.
// Determine if he will reach on time or not.

// Input:
// First line: T (1 ≤ T ≤ 60)
// Next, T lines: One integer X (1 ≤ X ≤ 60)

// Output:
// For each test case, print "YES" if X ≥ 30, else "NO" (case-insensitive)

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
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 279: Puzzle Hunt
// The puzzle hunt allows teams of 6 to 8 people (inclusive).
// But, team cannot have more than 8 people.
// Chef's team has N people. Check if they are eligible.

// Input:
// One integer N (1 ≤ N ≤ 10)

// Output:
// Print "Yes" if 6 ≤ N ≤ 8, otherwise "No" (case-insensitive)

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

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 280: Bone Appetit
// Suri Bhai visits two sectors on Halloween:
// - "Bones": N people, each gives X treats
// - "Blood": M people, each gives Y treats
// Find total treats Suri Bhai gets.

// Input:
// Line 1: Two integers N and M (0 ≤ N, M ≤ 100)
// Line 2: Two integers X and Y (0 ≤ X, Y ≤ 1000)

// Output:
// Print total treats = (N * X) + (M * Y)

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

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 281: Who is taller!
// Alice's height = X cm, Bob's height = Y cm (X ≠ Y)
// Determine who is taller.

// Input:
// First line: T (1 ≤ T ≤ 1000)
// Next, T lines: Two integers X and Y (100 ≤ X, Y ≤ 200, X ≠ Y)

// Output:
// For each test case, print "A" if Alice taller, "B" if Bob taller (case-insensitive)

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
            cout << "A" << '\n';
        else
            cout << "B" << '\n';
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 281: Reach the Target
// Team B is chasing a target of X runs.
// They have currently scored Y runs.
// Find how many more runs they need to win.

// Input:
// First line: T (1 ≤ T ≤ 10)
// Next, T lines: Two integers X and Y (50 ≤ Y < X ≤ 200)

// Output:
// For each test case, print X - Y

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

        cout << X - Y << '\n';
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 284: Best of Two
// Chef takes an exam twice: scores X in first attempt, Y in second.
// Final score = maximum of X and Y.

// Input:
// First line: T (1 ≤ T ≤ 1000)
// Next, T lines: Two integers X and Y (0 ≤ X, Y ≤ 100)

// Output:
// For each test case, print max(X, Y)

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
            cout << X << '\n';
        else
            cout << Y << '\n';
        
        // // OR
        // cout << max(X, Y) << '\n';
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 284: 2000
// Chef has N notes of ₹2000.
// He wants to pay the same amount using ₹500 notes only.
// Find how many ₹500 notes he needs.

// Input:
// One integer N (1 ≤ N ≤ 100)

// Output:
// Print number of ₹500 notes = N * 4

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

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 285: Roller Coaster
// Chef's son has height X inches.
// Minimum height required for ride: H inches.
// Determine if he can go on the ride.

// Input:
// First line: T (1 ≤ T ≤ 1000)
// Next, T lines: Two integers X and H (1 ≤ X, H ≤ 100)

// Output:
// For each test case, print "YES" if X ≥ H, else "NO" (case-insensitive)

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
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';        
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 289: Candy Division
// 3 friends, N candies in total.
// Can we divide all candies equally so each gets the same number?
// → Yes if N is divisible by 3, else No.

// Input:
// First line: T (1 ≤ T ≤ 100)
// Next, T lines: One integer N (1 ≤ N ≤ 100)

// Output:
// For each test case, print "YES" if N % 3 == 0, else "NO" (case-insensitive)

// Logic:
// Equal distribution possible only if N is divisible by 3
// → If N % 3 == 0 → "YES"
// → Else → "NO"

// Examples:
// Input: 3 → Output: YES  (3 % 3 = 0 → each gets 1)
// Input: 4 → Output: NO   (4 % 3 = 1 → not divisible)
// Input: 2 → Output: NO   (2 % 3 = 2 → not divisible)
// Input: 6 → Output: YES  (6 % 3 = 0 → each gets 2)

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        if(N % 3 == 0)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 294: Chef On Date
// Chef has X dollars, bill is Y dollars.
// Can he pay the bill without borrowing?

// Input:
// First line: T (1 ≤ T ≤ 100)
// Next, T lines: Two integers X and Y (1 ≤ X, Y ≤ 100)

// Output:
// For each test case, print "YES" if X ≥ Y, else "NO" (case-insensitive)

// Logic:
// If X >= Y → Chef can pay → "YES"
// Else → Chef needs to borrow → "NO"

// Examples:
// Input: 1 1  → Output: YES  (1 >= 1 → can pay)
// Input: 1 2  → Output: NO   (1 < 2 → needs to borrow)
// Input: 2 1  → Output: YES  (2 >= 1 → can pay)
// Input: 50 100 → Output: NO (50 < 100 → needs to borrow)

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        if(X >= Y)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 295: Parity
// Ashu and Arvind have N chocolates.
// Can they divide them equally (each gets N/2)?
// → Yes if N is even, No if odd.

// Input:
// First line: T (1 ≤ T ≤ 10)
// Next, T lines: One integer N (1 ≤ N ≤ 10)

// Output:
// For each test case, print "Yes" if N is even, "No" if odd (case-insensitive)

// Logic:
// Equal division possible only if N is divisible by 2
// → If N % 2 == 0 → "Yes"
// → Else → "No"

// Examples:
// Input: 10 → Output: Yes  (10 % 2 = 0 → each gets 5)
// Input: 4  → Output: Yes  (4 % 2 = 0 → each gets 2)
// Input: 3  → Output: No   (3 % 2 = 1 → not divisible)
// Input: 2  → Output: Yes  (2 % 2 = 0 → each gets 1)

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        if (N % 2 == 0)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }    
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 296: Total Prize Money
// Top 10 rankers get X rupees each
// Ranks 11 to 100 (90 people) get Y rupees each
// Find total prize money.

// Input:
// First line: T (1 ≤ T ≤ 1000)
// Next, T lines: Two integers X and Y (1 ≤ Y ≤ X ≤ 1000)

// Output:
// For each test case, print (10 * X) + (90 * Y)

// Logic:
// Total prize = (10 × X) + (90 × Y)

// Examples:
// Input: 1000 100 → Output: 19000  (10*1000 + 90*100 = 10000 + 9000 = 19000)
// Input: 1000 1000 → Output: 100000 (10*1000 + 90*1000 = 10000 + 90000 = 100000)
// Input: 80 1     → Output: 890    (10*80 + 90*1 = 800 + 90 = 890)
// Input: 400 30   → Output: 6700   (10*400 + 90*30 = 4000 + 2700 = 6700)

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while(T--) {
        int X, Y;
        cin >> X >> Y;

        cout << (10 * X) + (90 * Y) << '\n';
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 296: Counting Words
// A book has N pages, each with M words.
// Find the total number of words in the book.

// Input:
// First line: T (1 ≤ T ≤ 100)
// Next, T lines: Two integers N and M (1 ≤ N, M ≤ 100)

// Output:
// For each test case, print N * M

// Logic:
// Total words = Number of pages × Words per page
// → Answer = N * M

// Examples:
// Input: 1 1    → Output: 1    (1 × 1 = 1)
// Input: 4 2    → Output: 8    (4 × 2 = 8)
// Input: 2 4    → Output: 8    (2 × 4 = 8)
// Input: 95 42  → Output: 3990 (95 × 42 = 3990)

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        cout << N * M << '\n';
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 296: Battery Health
// Apple considers iPhone battery in optimal condition if health >= 80%.
// Given, Your iPhone has X% battery health, determine if it's optimal.

// Input:
// First line: T (1 ≤ T ≤ 100)
// Next, T lines: One integer X (0 ≤ X ≤ 100)

// Output:
// For each test case, print "YES" if X >= 80, else "NO" (case-insensitive)

// Logic:
// If X >= 80 → Optimal → "YES"
// Else → Not optimal → "NO"

// Examples:
// Input: 97 → Output: YES  (97 >= 80 → optimal)
// Input: 42 → Output: NO   (42 < 80 → not optimal)
// Input: 80 → Output: YES  (80 >= 80 → optimal)
// Input: 10 → Output: NO   (10 < 80 → not optimal)

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while (T--) {
        int X;
        cin >> X;

        if (X >= 80)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 298: Tom and Jerry Chase
// Jerry runs at speed X m/s, Tom at Y m/s.
// Initially, they are not at the same position.
// Can Tom catch Jerry?

// Input:
// First line: T (1 ≤ T ≤ 100)
// Next, T lines: Two integers X and Y (1 ≤ X, Y ≤ 10)

// Output:
// For each test case, print "YES" if Tom can catch Jerry, else "NO" (case-insensitive)

// Logic:
// Tom can catch Jerry only if his speed is strictly greater than Jerry's.
// → If Y > X → "YES"
// → Else (Y <= X) → "NO"

// Examples:
// Input: 2 3 → Output: YES  (3 > 2 → Tom faster → can catch)
// Input: 4 1 → Output: NO   (1 < 4 → Tom slower → cannot catch)
// Input: 1 1 → Output: NO   (1 == 1 → same speed, different position → cannot catch)
// Input: 3 5 → Output: YES  (5 > 3 → Tom faster → can catch)

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        if (X < Y)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 299: Ageing
// Chef is currently 20 years old.
// Chefina is currently 10 years old.
// They were born on the same day and month (different years).
// Given, Chef's future age X, find Chefina's age at that time.

// Input:
// First line: T (1 ≤ T ≤ 25)
// Next, T lines: One integer X (25 ≤ X ≤ 50)

// Output:
// For each test case, print Chefina's age = X - 10

// Logic:
// Age difference = 20 - 10 = 10 years (constant)
// So when Chef is X years old, Chefina will be X - 10.

// Examples:
// Input: 25 → Output: 15  (25 - 10 = 15)
// Input: 36 → Output: 26  (36 - 10 = 26)
// Input: 50 → Output: 40  (50 - 10 = 40)
// Input: 44 → Output: 34  (44 - 10 = 34)

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while (T--) {
        int X;
        cin >> X;

        cout << X - 10 << '\n';
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 299: Right There
// Chef wants to host a party with N people.
// Party hall has capacity of X people.
// Can he host the party?

// Input:
// First line: T (1 ≤ T ≤ 100)
// Next, T lines: Two integers N and X (1 ≤ N, X ≤ 10)

// Output:
// For each test case, print "YES" if N ≤ X, else "NO" (case-insensitive)

// Logic:
// Party can be hosted only if number of people ≤ capacity
// → If N <= X → "YES"
// → Else → "NO"

// Examples:
// Input: 2 5  → Output: YES  (2 ≤ 5 → can host)
// Input: 4 3  → Output: NO   (4 > 3 → cannot host)
// Input: 6 6  → Output: YES  (6 ≤ 6 → can host)
// Input: 10 9 → Output: NO   (10 > 9 → cannot host)

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        if (N <= X)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 300: Second Max of Three Numbers
// You are given N test cases. Each test case consists of three distinct integers.
// For each triple, find and print the second-largest (second-maximum) number.

// Input:
// First line: integer N (1 ≤ N ≤ 6) → number of test cases
// Next, N lines: three distinct integers A B C (1 ≤ A,B,C ≤ 10000)

// Output:
// For each triple, print the second-largest number on a new line.

// Logic:
// Since there are only three distinct numbers, we can:
// 1. Put them into an array/vector and sort → second max is arr[1] (0-based index)
//    OR
// 2. Use simple comparisons:
//    - Find the maximum among the three
//    - The second max is the largest among the remaining two
//    - Or more directly: return the number that is neither max nor min

// Most concise & readable approach (recommended):
// Sort the three numbers in descending order → index 1 is always the second max.

// Examples:
// 1 2 3   → sorted: 3 2 1 → second max = 2
// 10 15 5 → sorted: 15 10 5 → second max = 10
// 100 999 500 → sorted: 999 500 100 → second max = 500

#include <iostream>
using namespace std;
    
int main() {
    int N;
    cin >> N;

    while (N--) {
        int digit, lar = -1, sec = -1;

        for (int i = 0; i < 3; i++) {
            cin >> digit;

            if (digit > lar) {
                sec = lar;
                lar = digit;
            }
            else if (digit > sec) {
                sec = digit;
            }
        }

        cout << sec << '\n';
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 300: Bull or Bear
// Chef buys stock at price X and sells at price Y.
// Determine if it was PROFIT, LOSS, or NEUTRAL.

// Input:
// First line: T (1 ≤ T ≤ 500)
// Next, T lines: Two integers X and Y (1 ≤ X, Y ≤ 100)

// Output: For each test case:
//   - "PROFIT" if Y > X
//   - "LOSS" if Y < X
//   - "NEUTRAL" if Y == X
//   (Case-insensitive)

// Logic:
// Compare selling price Y with buying price X:
// → Y > X → PROFIT
// → Y < X → LOSS
// → Y == X → NEUTRAL

// Examples:
// Input: 4 2 → Output: LOSS     (2 < 4 → sold cheaper)
// Input: 8 8 → Output: NEUTRAL  (8 == 8 → no change)
// Input: 3 4 → Output: PROFIT   (4 > 3 → sold higher)
// Input: 2 1 → Output: LOSS     (1 < 2 → sold cheaper)

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        if (X < Y)
            cout << "Profit" << '\n';
        else if (X > Y)
            cout << "Loss" << '\n';
        else
            cout << "Neutral" << '\n';
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 302: Four Tickets
// 4 friends want to attend a concert.
// Each ticket costs X rupees.
// They go only if total cost <= 1000.
// Find if they will go or not.

// Input:
// First line: T (1 ≤ T ≤ 100)
// Next, T lines: One integer X (1 ≤ X ≤ 1000)

// Output:
// For each test case, print "YES" if (4 * X) <= 1000, else "NO" (case-insensitive)

// Logic:
// Total cost = 4 * X; OR, X <= 250 (1000 / 4)
// If 4 * X <= 1000 → "YES"
// Else → "NO"

// Examples:
// Input: 100  → Output: YES  (4*100 = 400  ≤ 1000)
// Input: 500  → Output: NO   (4*500 = 2000 > 1000)
// Input: 250  → Output: YES  (4*250 = 1000 ≤ 1000)
// Input: 1000 → Output: NO   (4*1000 = 4000 > 1000)

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while (T--) {
        int X;
        cin >> X;

        if (X <= 250)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 305: Chairs Requirement
// X students joined Chef's class, each needs 1 chair.
// Chef already has Y chairs.
// Find minimum number of new chairs to buy so every student gets a chair.

// Input:
// First line: T (1 ≤ T ≤ 1000)
// Next, T lines: Two integers X and Y (0 ≤ X, Y ≤ 100)

// Output:
// For each test case, print max(0, X - Y)

// Logic:
// Required chairs = X
// Already has = Y
// Need to buy = max(0, X - Y)
// → If X > Y → buy (X - Y)
// → Else → buy 0

// Examples:
// Input: 20 14 → Output: 6   (20 > 14 → need 6 more)
// Input: 41 41 → Output: 0   (41 == 41 → no need)
// Input: 35 0  → Output: 35  (35 > 0 → need 35)
// Input: 50 100 → Output: 0  (50 ≤ 100 → already enough)

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        if (X > Y)
            cout << X - Y << '\n';
        else
            cout << 0 << '\n';
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 305: Chef and Donation
// Chef earns X rupees, Chefina earns Y rupees, and it's guaranteed that Y > X.
// They want to have exactly the same amount, so the one with more money (Chefina)
// donates the difference to charity.
// Find out how much money is donated in total (which is simply Y - X).

// Input:
// First line: T (1 ≤ T ≤ 100) → number of test cases
// Next, T lines: two integers X and Y (1 ≤ X < Y ≤ 1000)

// Output:
// For each test case, print a single integer: the amount donated = Y - X

// Logic:
// Since Y > X is guaranteed, the donation amount is always Y - X.
// No need to check which is larger — just subtract.

// Examples:
// 1 3  → 3-difference = 2 → donate 2
// 2 5  → 5-2 = 3 → donate 3
// 4 5  → 5-4 = 1 → donate 1
// 2 10 → 10-2 = 8 → donate 8

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        cout << Y - X << '\n';
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 308: Sum it
// Bob has two numbers A and B. Alice claims that A + B = C.
// You need to check whether Alice is correct.

// Input:
// First line: T (1 ≤ T ≤ 100) → number of test cases
// Next, T lines: three integers A, B, C (0 ≤ A,B,C ≤ 100)

// Output:
// For each test case, print "YES" if A + B == C, otherwise print "NO"
// (Case-insensitive: Yes, YES, yes, yEs etc. are all accepted)

// Logic:
// Simply check if A + B equals C
// - If equal → "YES"
// - Else     → "NO"

// Examples:
// 1 2 3 → 1+2 = 3 → YES
// 4 5 9 → 4+5 = 9 → YES
// 2 3 6 → 2+3 = 5 ≠ 6 → NO

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;

        if (A + B == C)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 315: Get Subscription
// Chef wants to conduct an online lecture of exactly X minutes.
// The platform allows:
// - Maximum 30 minutes without subscription
// - Unlimited minutes with subscription
// Determine whether Chef needs to buy a subscription.

// Input:
// First line: T (1 ≤ T ≤ 100) → number of test cases
// Next, T lines: one integer X (1 ≤ X ≤ 100) → required lecture duration

// Output:
// For each test case, print "YES" if subscription is needed, "NO" otherwise
// (Case-insensitive: YES, yes, YeS, etc. are all accepted)

// Logic:
// - If X > 30 → subscription required → "YES"
// - If X ≤ 30 → no subscription needed → "NO"

// Examples:
// 50 → > 30 → YES
// 3  → ≤ 30 → NO
// 30 → ≤ 30 → NO
// 80 → > 30 → YES

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while (T--) {
        int X;
        cin >> X;

        if (X <= 30)
            cout << "No" << '\n';
        else
            cout << "Yes" << '\n';
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 316: Messi vs Ronaldo
// In Chefland football:
// - Each goal = 2 points
// - Each assist = 1 point
// Given:
//   Messi: A goals, B assists
//   Ronaldo: X goals, Y assists
// Compare their total points and decide who has more.

// Input:
// Single line: four integers A B X Y (0 ≤ A,B,X,Y ≤ 100)

// Output:
// "Messi"   if Messi's points > Ronaldo's points
// "Ronaldo" if Ronaldo's points > Messi's points
// "Equal"   if both have same points
// (Case-insensitive output accepted)

// Logic:
// Compute:
//   messi_points = A * 2 + B
//   ronaldo_points = X * 2 + Y
// Then compare the two values.

// Examples:
// 40 30 50 10 → 110 vs 110 → Equal
// 91 22 60 30 → 204 vs 150 → Messi
// 60 30 80 20 → 150 vs 180 → Ronaldo

#include <iostream>
using namespace std;
    
int main() {
    int A, B, X, Y;
    cin >> A >> B >> X >> Y;

    if (((2 * A) + B) > ((2 * X) + Y))
        cout << "Messi";
    else if ((A + B) < (X + Y))
        cout << "Ronaldo";
    else
        cout << "Equal";

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 319: Waiting Time
// Chef is told the secret information will be revealed after exactly K weeks.
// 1 week = 7 days → total wait time = K * 7 days
// X days have already passed (and it's guaranteed X < 7*K, i.e., info not revealed yet)
// Find how many more days Chef has to wait.

// Input:
// First line: T (1 ≤ T ≤ 500)
// Next, T lines: two integers K and X (1 ≤ K ≤ 10, 1 ≤ X < 7*K)

// Output:
// For each test case, print the number of remaining days = (K * 7 - X)

// Logic:
// Total days to wait = K weeks × 7 days/week
// Already waited = X days
// Remaining = total - already waited
// → Answer = 7*K - X

// Examples:
// K=1, X=5 → 7*1 - 5 = 2
// K=1, X=6 → 7*1 - 6 = 1
// K=1, X=1 → 7*1 - 1 = 6
// K=1, X=2 → 7*1 - 2 = 5

#include <iostream>
using namespace std;
    
int main() {
    int T;
    cin >> T;

    while (T--) {
        int K, X;
        cin >> K >> X;

        cout << (7 * K) - X << '\n';
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 319: October Marathon
// Chefina runs a 30 km marathon in X hours.
// Medal rules:
// - X < 3          → GOLD
// - 3 ≤ X < 6      → SILVER
// - X ≥ 6          → BRONZE

// Input:
// Single integer X (1 ≤ X ≤ 10) → hours taken by Chefina

// Output:
// Print "GOLD", "SILVER", or "BRONZE" (case-insensitive)

// Logic:
// Just check the value of X against the boundaries:
//   if (X < 3)           → GOLD
// else if (X < 6)      → SILVER
// else                 → BRONZE

// Examples:
// 2 → GOLD
// 5 → SILVER
// 6 → BRONZE

#include <iostream>
using namespace std;
    
int main() {
    int X; cin >> X;

    if (X < 3) cout << "GOLD";
    else if (X >= 3 && X < 6) cout << "SILVER";
    else cout << "BRONZE";
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 320: Just One More Episode
// Chef has an exam starting in exactly X minutes.
// Each episode of his show is 24 minutes long.
// He wants to start watching one episode now.
// Determine if he can finish it strictly before the exam starts (i.e., in less than X minutes).

// Input:
// First line: T (1 ≤ T ≤ 100) → number of test cases
// Next T lines: one integer X (1 ≤ X ≤ 100) → minutes until exam

// Output:
// For each test case, print "YES" if he finishes strictly before the exam (X > 24)
// Otherwise print "NO"
// (Case-insensitive: Yes, YES, yes, etc. all accepted)

// Logic:
// Episode takes exactly 24 minutes.
// To finish strictly before exam → need X > 24
// If X ≤ 24 → he finishes at or after exam start → "NO"

// Examples:
// 30 → 30 > 24 → Yes
// 23 → 23 ≤ 24 → No
// 60 → 60 > 24 → Yes
// 24 → 24 ≤ 24 → No (finishes exactly at start time, not strictly before)

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int X;
        cin >> X;

        cout << (X > 24 ? "Yes" : "No") << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 327: Mana Points
// Chefario has Y mana points.
// Each special attack costs X mana points.
// Find the maximum number of special attacks: floor(Y / X)

// Input:
// First line: T (1 ≤ T ≤ 10^5) → number of test cases
// Next T lines: two integers X Y (1 ≤ X ≤ 100, 1 ≤ Y ≤ 1000)

// Output:
// For each test case, print the integer Y / X

// Logic:
// Use integer division: attacks = Y / X
// (In C++, int / int automatically floors the result)

// Examples:
// 10 30 → 30 / 10 = 3
// 6  41 → 41 / 6  = 6  (6*6 = 36 ≤ 41, 7*6 = 42 > 41)
// 50  2 →  2 / 50 = 0

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int X, Y;
        cin >> X >> Y;

        cout << Y / X << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 328: Rain in Chefland
// Rainfall rate is X mm per hour. Categorize it as:
// - LIGHT    if X < 3
// - MODERATE if 3 ≤ X < 7
// - HEAVY    if X ≥ 7

// Input:
// First line: T (1 ≤ T ≤ 20) → number of test cases
// Next T lines: one integer X (1 ≤ X ≤ 20) → rainfall rate in mm/hour

// Output:
// For each test case, print "LIGHT", "MODERATE", or "HEAVY"
// (Case-insensitive: light, Light, HEAVY, heavy etc. all accepted)

// Logic:
// Simple if-else chain based on the given thresholds:
//   if (X < 3)        → LIGHT
//   else if (X < 7)   → MODERATE
//   else              → HEAVY

// Examples:
// 1 → LIGHT
// 20 → HEAVY
// 3 → MODERATE
// 7 → HEAVY

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int X;
        cin >> X;

        if (X < 3) cout << "LIGHT" << '\n';
        else if (X < 7) cout << "MODERATE" << '\n';
        else cout << "HEAVY" << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 330: Bidding
// Alice bids A, Bob bids B, Charlie bids C.
// All three amounts are distinct.
// The one with the highest bid wins the auction.

// Input:
// First line: T (1 ≤ T ≤ 1000) → number of test cases
// Next T lines: three distinct integers A B C (1 ≤ A,B,C ≤ 1000)

// Output:
// For each test case, print the name of the winner: "Alice", "Bob", or "Charlie"
// (Case-insensitive: alice, ALICE, AlIcE etc. all accepted)

// Logic:
// Find the maximum among A, B, C and print the corresponding name.
// Since values are distinct, no ties possible.

// Approach:
// Compare the three values:
//   if (A > B && A > C) → Alice
//   else if (B > A && B > C) → Bob
//   else → Charlie

// Examples:
// 200 100 400 → max=400 → Charlie
// 155 1000 566 → max=1000 → Bob
// 736 234 470 → max=736 → Alice
// 124 67 2 → max=124 → Alice

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;

        cout << ( A > B ? (A > C ? "Alice" : "Charlie") : (B > C ? "Bob" : "Charlie") ) << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 335: Overspeeding Fine
// Chef drives at speed X km/hour.
// Fine rules:
// - X ≤ 70          → No fine (0)
// - 70 < X ≤ 100    → Rs 500
// - X > 100         → Rs 2000

// Input:
// First line: T (1 ≤ T ≤ 200) → number of test cases
// Next T lines: one integer X (1 ≤ X ≤ 200) → speed in km/hour

// Output:
// For each test case, print the fine amount: 0, 500, or 2000

// Logic:
// Simple if-else chain:
//   if (X <= 70)        → 0
//   else if (X <= 100)  → 500
//   else                → 2000

// Examples:
// 40  → 0
// 110 → 2000
// 70  → 0
// 100 → 500
// 69  → 0
// 101 → 2000
// 85  → 500

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int X;
        cin >> X;

        cout << ( X > 70 ? (X > 100 ? 2000 : 500) : 0 ) << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 337: Chess Time
// Chef has N hours of free time.
// Each complete chess game takes exactly 20 minutes.
// Find the maximum number of complete games he can play.

// Input:
// First line: T (1 ≤ T ≤ 10) → number of test cases
// Next T lines: one integer N (1 ≤ N ≤ 10) → hours available

// Output:
// For each test case, print the maximum number of games = N * 3
// (since 1 hour = 60 minutes → 60 / 20 = 3 games per hour)

// Logic:
// Total minutes available = N * 60
// Games = floor(total minutes / 20) = (N * 60) / 20 = N * 3
// Since 60 is exactly divisible by 20, no remainder.

// Examples:
// N=1  → 1*3 = 3
// N=10 → 10*3 = 30
// N=7  → 7*3 = 21
// N=3  → 3*3 = 9

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;

        cout << (N * 60) / 20 << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 342: Passes for Fair
// Chef has N friends and wants to go to the fair with them.
// Total people = N (friends) + 1 (Chef) = N + 1
// He has K passes.
// Each person needs exactly one pass (passes are non-shareable).
// Determine if Chef + all N friends can enter.

// Input:
// First line: T (1 ≤ T ≤ 100) → number of test cases
// Next T lines: two integers N K (1 ≤ N,K ≤ 100)

// Output:
// For each test case, print "YES" if K >= (N + 1), else "NO"
// (Case-insensitive: yes, YES, YeS etc. all accepted)

// Logic:
// Total passes needed = N + 1 (for Chef and all friends)
// If K >= N + 1 → YES
// Else → NO

// Examples:
// 5 8 → 5+1=6 ≤8 → YES
// 6 3 → 6+1=7 >3 → NO
// 2 2 → 2+1=3 >2 → NO
// 1 2 → 1+1=2 ≤2 → YES

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, K;
        cin >> N >> K;

        cout << (K > N ? "Yes" : "No") << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 343: Read Pages
// Chef has a book with N pages.
// He can read at most X pages per day.
// He has Y days available.
// Determine if he can finish the entire book.

// Input:
// First line: T (1 ≤ T ≤ 1000) → number of test cases
// Next T lines: three integers N X Y (1 ≤ N ≤ 100, 1 ≤ X,Y ≤ 10)

// Output:
// For each test case, print "YES" if he can finish the book, "NO" otherwise
// (Case-insensitive: Yes, YES, yes, yEs etc. all accepted)

// Logic:
// Maximum pages he can read in Y days = X * Y
// He can finish the book if X * Y >= N
// → Check if (X * Y >= N)

// Examples:
// 5 2 3 → 2*3 = 6 ≥ 5 → YES
// 10 3 3 → 3*3 = 9 < 10 → NO
// 7 7 1 → 7*1 = 7 ≥ 7 → YES
// 3 2 1 → 2*1 = 2 < 3 → NO

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, X, Y;
        cin >> N >> X >> Y;

        cout << (N <= X * Y ? "Yes" : "No") << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 347: Couple Game
// There are G girls and B boys (B > G).
// Teams must be of size 2: exactly 1 girl + 1 boy.
// Find the minimum number of boys who cannot participate.

// Input:
// First line: T (1 ≤ T ≤ 100) → number of test cases
// Next T lines: two integers G B (1 ≤ G < B ≤ 100)

// Output:
// For each test case, print the number of boys left out.

// Logic:
// The maximum number of teams possible is limited by the number of girls → G teams.
// Each team uses 1 girl and 1 boy → G boys get to participate.
// Total boys left out = B - G
// Since B > G, this is always positive.

// Examples:
// 1 3 → 3 - 1 = 2
// 2 4 → 4 - 2 = 2
// 3 10 → 10 - 3 = 7

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int G, B;
        cin >> G >> B;

        cout << B - G << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 347: Air Quality Index
// Government wants average AQI strictly below 100 (i.e., < 100).
// Chef measures AQI as X.
// Determine if the government succeeded.

// Input:
// Single integer X (1 ≤ X ≤ 150) → measured AQI

// Output:
// "YES" if X < 100
// "NO"  if X ≥ 100
// (Case-insensitive: Yes, YES, yes, yEs etc. all accepted)

// Logic:
// Simple comparison:
//   if (X < 100) → YES
//   else         → NO

// Examples:
// 50  → < 100 → YES
// 100 → ≥ 100 → NO
// 99  → < 100 → YES
// 145 → ≥ 100 → NO

#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    cout << (X < 100 ? "Yes" : "No") << '\n';
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 348: Fever
// Chef's body temperature is X °F.
// He has fever if temperature is strictly greater than 98 °F.

// Input:
// First line: T (1 ≤ T ≤ 10) → number of test cases
// Next T lines: one integer X (94 ≤ X ≤ 103) → temperature in °F

// Output:
// For each test case, print "YES" if X > 98, otherwise "NO"
// (Case-insensitive: yes, YES, YeS etc. all accepted)

// Logic:
// Simple comparison:
//   if (X > 98) → YES
//   else        → NO

// Examples:
// 98  → ≤ 98 → NO
// 100 → > 98 → YES
// 96  → ≤ 98 → NO

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int X;
        cin >> X;

        cout << (X > 98 ? "Yes" : "No") << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 348: Sleep deprivation
// A person is sleep deprived if they slept strictly less than 7 hours in a day.
// Chef slept X hours yesterday.
// Determine if he is sleep deprived.

// Input:
// First line: T (1 ≤ T ≤ 20) → number of test cases
// Next T lines: one integer X (1 ≤ X ≤ 15) → hours slept

// Output:
// For each test case, print "YES" if X < 7, otherwise "NO"
// (Case-insensitive: yes, YES, YeS etc. all accepted)

// Logic:
// Simple comparison:
//   if (X < 7) → YES
//   else       → NO

// Examples:
// 4 → < 7 → YES
// 7 → ≥ 7 → NO
// 10 → ≥ 7 → NO

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int X;
        cin >> X;

        cout << (X < 7 ? "Yes" : "No") << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 349: MATH1 Enrolment
// There are X seats available for MATH-1 course.
// Y students are interested in enrolling.
// Find the minimum number of extra seats needed so that all Y students can enroll.

// Input:
// First line: T (1 ≤ T ≤ 100) → number of test cases
// Next T lines: two integers X Y (1 ≤ X,Y ≤ 10^5)

// Output:
// For each test case, print the minimum extra seats needed.
// If X >= Y → no extra seats needed → 0
// If X < Y  → need (Y - X) extra seats

// Logic:
// Extra seats = max(0, Y - X)

// Examples:
// 1 1   → max(0, 1-1) = 0
// 12 34 → max(0, 34-12) = 22
// 50 49 → max(0, 49-50) = 0
// 49 50 → max(0, 50-49) = 1

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int X, Y;
        cin >> X >> Y;

        cout << (Y > X ? Y - X : 0) << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 350: Chef and Chapters
// Chef has X courses.
// Each course has Y units.
// Each unit has Z chapters.
// Find the total number of chapters to study.

// Input:
// First line: T (1 ≤ T ≤ 1000) → number of test cases
// Next T lines: three integers X Y Z (1 ≤ X,Y,Z ≤ 1000)

// Output:
// For each test case, print the total chapters = X * Y * Z

// Logic:
// Total chapters = (courses) × (units per course) × (chapters per unit)
// → X * Y * Z

// Examples:
// 1 1 1 → 1*1*1 = 1
// 2 1 2 → 2*1*2 = 4
// 1 2 3 → 1*2*3 = 6

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        cout << (X * Y) * Z << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 351: Water Requirement
// Chef's water cooler requires 2 liters of water per hour to cool.
// Given N hours, find the total water required.

// Input:
// First line: T (1 ≤ T ≤ 1000) → number of test cases
// Next T lines: one integer N (1 ≤ N ≤ 1000) → number of hours

// Output:
// For each test case, print the total water in liters = 2 * N

// Logic:
// Water required = hours × 2 liters per hour
// → Answer = 2 * N

// Examples:
// N=1 → 2*1 = 2
// N=2 → 2*2 = 4

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;

        cout << 2 * N << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 352: Lunchtime
// Chef has lunch only between 1 pm and 4 pm (both inclusive).
// Given current time X pm (1 ≤ X ≤ 12), determine if it's lunchtime.

// Input:
// First line: T (1 ≤ T ≤ 12) → number of test cases
// Next T lines: one integer X (1 ≤ X ≤ 12) → current time in pm

// Output:
// For each test case, print "YES" if 1 ≤ X ≤ 4, otherwise "NO"
// (Case-insensitive: yes, YES, YeS etc. all accepted)

// Logic:
// Lunchtime if X is 1, 2, 3, or 4
// → if (X >= 1 && X <= 4) → YES
//   else                  → NO

// Examples:
// 1 → YES
// 7 → NO
// 3 → YES

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int X;
        cin >> X;

        cout << (X >= 1 && X <= 4 ? "Yes" : "No") << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 357: Good Investment or Not
// Chef invests at interest rate X% per annum.
// Current inflation rate is Y% per annum.
// Investment is good if interest rate >= 2 * inflation rate (X >= 2*Y)

// Input:
// First line: T (1 ≤ T ≤ 400) → number of test cases
// Next T lines: two integers X Y (1 ≤ X,Y ≤ 20)

// Output:
// For each test case, print "YES" if X >= 2*Y, otherwise "NO"
// (Case-insensitive: Yes, yes, yES etc. all accepted)

// Logic:
// Simple comparison:
//   if (X >= 2 * Y) → YES
//   else            → NO

// Examples:
// 7 4  → 7 >= 8? No → NO
// 6 3  → 6 >= 6? Yes → YES
// 2 4  → 2 >= 8? No → NO
// 10 10 → 10 >= 20? No → NO
// 20 1 → 20 >= 2? Yes → YES

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int X, Y;
        cin >> X >> Y;

        cout << (X >= (2 * Y) ? "Yes" : "No") << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 358: Final Population
// Initial population: X million
// Y million people leave the town
// Z million people immigrate to the town
// Find the final population.

// Input:
// First line: T (1 ≤ T ≤ 100) → number of test cases
// Next T lines: three integers X Y Z (1 ≤ X,Y,Z ≤ 10, Y ≤ X)

// Output:
// For each test case, print the final population = X - Y + Z

// Logic:
// Population change: subtract those who left, add those who immigrated
// → Final = X - Y + Z

// Examples:
// 3 1 2 → 3 - 1 + 2 = 4
// 2 2 2 → 2 - 2 + 2 = 2
// 4 1 8 → 4 - 1 + 8 = 11
// 10 1 10 → 10 - 1 + 10 = 19

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        cout << X - Y + Z << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 363: Chef gives Party
// Chef has N friends.
// Each burger costs X rupees.
// Chef has K rupees in total.
// Determine if he can buy one burger for each friend (including enough money for all).

// Input:
// First line: T (1 ≤ T ≤ 1000) → number of test cases
// Next T lines: three integers N X K (1 ≤ N,X ≤ 100, 1 ≤ K ≤ 10000)

// Output:
// For each test case, print "YES" if K >= N * X, otherwise "NO"
// (Case-insensitive: yes, YES, YeS etc. all accepted)

// Logic:
// Total cost needed = N * X
// If K >= total cost → YES
// Else → NO

// Examples:
// 5 10 70  → 5*10=50 ≤70 → YES
// 5 10 40  → 5*10=50 >40 → NO
// 10 40 400 → 10*40=400 ≤400 → YES
// 14 14 150 → 14*14=196 >150 → NO

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, X, K;
        cin >> N >> X >> K;

        cout << (K >= (N * X) ? "Yes" : "No") << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 364: Time Complexity
// Algorithm A uses X comparisons to sort an array.
// Algorithm B uses Y comparisons to sort the same array.
// A has more time complexity than B if A uses strictly more comparisons than B.
// Find whether A has more time complexity than B.

// Input:
// First line: T (1 ≤ T ≤ 100) → number of test cases
// Next T lines: two integers X Y (1 ≤ X,Y ≤ 100)

// Output:
// For each test case, print "YES" if X > Y, otherwise "NO"
// (Case-insensitive: Yes, YES, yes, yEs etc. all accepted)

// Logic:
// Simply check if X > Y
// - If X > Y → YES (A has more time complexity)
// - Else     → NO  (A does not have more time complexity)

// Examples:
// 9 9  → 9 not > 9 → NO
// 15 7 → 15 > 7 → YES
// 10 19 → 10 not > 19 → NO
// 21 20 → 21 > 20 → YES

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int X, Y;
        cin >> X >> Y;

        cout << (X > Y ? "Yes" : "No") << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 373: Interior Design
// Chef has two interior design styles to choose from:
// Style 1: Tiling floor X1 rupees + Painting walls Y1 rupees → total = X1 + Y1
// Style 2: Tiling floor X2 rupees + Painting walls Y2 rupees → total = X2 + Y2
// Chef will choose the style with the lower total cost.

// Input:
// First line: T (1 ≤ T ≤ 100) → number of test cases
// Next T lines: four integers X1 Y1 X2 Y2 (1 ≤ X1,Y1,X2,Y2 ≤ 100)

// Output:
// For each test case, print the minimum cost: min(X1+Y1, X2+Y2)

// Logic:
// Compute cost of both styles and take the smaller one.
// If equal, either is fine (result will be the same).

// Examples:
// 10 20 9 25 → min(30, 34) = 30
// 10 20 9 20 → min(30, 29) = 29
// 10 20 20 10 → min(30, 30) = 30
// 100 43 85 61 → min(143, 146) = 143

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int A, B, X, Y;
        cin >> A >> B >> X >> Y;

        cout << (A + B > X + Y ? (X + Y) : (A + B)) << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 374: Car Trip
// Chef rents a car for the whole day.
// Cost is 10 Rs per km, but he must pay for at least 300 km even if he drives less.
// If the car travels X km, find the total cost.

// Input:
// First line: T (1 ≤ T ≤ 100) → number of test cases
// Next T lines: one integer X (1 ≤ X ≤ 1000) → km travelled

// Output:
// For each test case, print the cost = 10 * max(X, 300)

// Logic:
// Effective km to pay for = maximum of X and 300
// Total cost = effective km * 10
// → cost = 10 * max(X, 300)

// Examples:
// 800 → max(800,300)=800 → 800*10 = 8000
// 3   → max(3,300)=300   → 300*10 = 3000
// 299 → max(299,300)=300 → 300*10 = 3000
// 301 → max(301,300)=301 → 301*10 = 3010
// 300 → max(300,300)=300 → 300*10 = 3000

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int X;
        cin >> X;

        cout << (X > 300 ? 10 * X : 3000) << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */


// 🟢 Problem 376: Multivitamin Tablets
// Doctor prescribed 3 multivitamin tablets per day for X days.
// Total tablets needed = 3 * X
// Chef already has Y tablets.
// Determine if Y is enough for the full course.

// Input:
// First line: T (1 ≤ T ≤ 2000) → number of test cases
// Next T lines: two integers X Y (1 ≤ X ≤ 100, 0 ≤ Y ≤ 1000)

// Output:
// For each test case, print "YES" if Y >= 3*X, otherwise "NO"
// (Case-insensitive: yes, YES, YeS etc. all accepted)

// Logic:
// Required tablets = 3 * X
// If Y >= required → YES
// Else → NO

// Examples:
// 1 10  → 3*1=3  ≤10 → YES
// 12 0  → 3*12=36 >0  → NO
// 10 29 → 3*10=30 >29 → NO
// 10 30 → 3*10=30 ≤30 → YES

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int X, Y;
        cin >> X >> Y;

        cout << (Y / 3 >= X ? "Yes" : "No") << '\n';
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------ */