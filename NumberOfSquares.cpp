// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to count all the possible
// squares with given lines parallel
// to both the X and Y axis
int numberOfSquares(int X[], int Y[],
					int N, int M)
{
	// Stores the count of all possible
	// distances in X[] & Y[] respectively
	unordered_map<int, int> m1, m2;
	int i, j, ans = 0;

	// Find distance between all
	// pairs in the array X[]
	for (i = 0; i < N; i++) {
		for (j = i + 1; j < N; j++) {

			int dist = abs(X[i] - X[j]);

			// Add the count to m1
			m1[dist]++;
		}
	}

	// Find distance between all
	// pairs in the array Y[]
	for (i = 0; i < M; i++) {
		for (j = i + 1; j < M; j++) {

			int dist = abs(Y[i] - Y[j]);

			// Add the count to m2
			m2[dist]++;
		}
	}

	// Find sum of m1[i] * m2[i]
	// for same distance
	for (auto i = m1.begin();
		i != m1.end(); i++) {

		// Find current count in m2
		if (m2.find(i->first)
			!= m2.end()) {

			// Add to the total count
			ans += (i->second
					* m2[i->first]);
		}
	}

	// Return the final count
	return ans;
}

// Driver Code
int main()
{
	// Given lines
	int X[] = { 1, 3, 7 };
	int Y[] = { 2, 4, 6, 1 };

	int N = sizeof(X) / sizeof(X[0]);

	int M = sizeof(Y) / sizeof(Y[0]);

	// Function Call
	cout << numberOfSquares(X, Y, N, M);

	return 0;
}
