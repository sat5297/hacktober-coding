// CPP program to check for parallel 
// to X and Y Axis 
#include <bits/stdc++.h> 
using namespace std; 

// To check for parallel line 
void parallel(int n, int a[][2]) 
{ 
	bool x = true, y = true; 

	// checking for parallel to X and Y 
	// axis condition 
	for (int i = 0; i < n - 1; i++) { 
		if (a[i][0] != a[i + 1][0]) 
			x = false; 
		if (a[i][1] != a[i + 1][1]) 
			y = false; 
	} 

	// To display the output 
	if (x) 
		cout << "parallel to Y Axis" << endl; 
	else if (y) 
		cout << "parallel to X Axis" << endl; 
	else
		cout << "Not parallel to X"
			<< " and Y Axis" << endl; 
} 

// Driver's Code 
int main() 
{ 
	int a[][2] = { { 1, 2 }, 
				{ 1, 4 }, 
				{ 1, 6 }, 
				{ 1, 0 } }; 

	int n = sizeof(a) / sizeof(a[0]); 
	parallel(n, a); 
	return 0; 
} 
