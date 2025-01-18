// C++ program to demonstrate the 
// insertion in the array of sets 
#include <bits/stdc++.h> 
using namespace std; 
#define ROW 4 
#define COL 5 

// Driver Code 
int main() 
{ 
	// Declaring array of sets 
	set<int> s[ROW]; 

	// Elements to insert 
	// in set 
	int num = 10; 

	// Inserting elements 
	// into sets 
	for (int i = 0; i < ROW; i++) { 
		// Insert the column elements 
		for (int j = 0; j < COL; j++) { 
			s[i].insert(num); 
			num += 5; 
		} 
	} 

	// Display the array of sets 
	for (int i = 0; i < ROW; i++) { 
		cout << "Elements at index " << i << ": "; 

		// Print the array of sets 
		for (auto x : s[i]) 
			cout << x << " "; 

		cout << endl; 
	} 

	return 0; 
} 
