
#include <iostream>
using namespace std;

int main() {
    int n, scores[100], sum = 0;
    string names[100];

    cout << "Enter num of students: ";
    cin >> n;

    if (n < 1 || n > 100) return 0;

    for (int i = 0; i < n; i++) {
        cout << "Enter name: ";
        cin >> names[i];

        cout << "Enter score: ";
        cin >> scores[i];

        sum += scores[i];
    }

    cout << "Average score is: " << (double)sum / n << endl;
    cout << "--- Grades ---" << endl;

    for (int i = 0; i < n; i++) {
        cout << names[i] << " got "
             << (scores[i] >= 90 ? "A" :
                 scores[i] >= 80 ? "B" :
                 scores[i] >= 70 ? "C" : "F") << endl;
    }

    return 0;
}


/*
Changes Made:

1. Removed global variables and declared all variables
   inside the main() function.

2. Removed the separate proc() function and performed
   grade calculation directly inside main().

3. Replaced nested if-else statements with the
   ternary operator to make the code shorter.

4. Combined the sum calculation with the student
   input loop to avoid an extra loop.

5. Calculated the average directly instead of
   declaring a separate average variable.

6. Added a condition to prevent invalid student
   numbers (less than 1 or greater than 100).

7. Removed the unnecessary #include <string>
   because the current code uses string through
   the included iostream header implementation.
*/


