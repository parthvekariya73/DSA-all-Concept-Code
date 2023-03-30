#include<iostream>
using namespace std;

int main()
{
	
//	Allocation 2D Array :-
	/*
	int row, col;
	cout << "Enter Numbers Of Row and Column : " << endl;
	cin >> row;
	cin >> col;
	int** arr = new int*[row];
	for(int i=0; i<row; i++) {
		arr[i] = new int[col];
	}
	cout << "Input Numbers : " << endl;
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			cin >> arr[i][j];
		}
	}
	cout << endl;
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}	
	*/
	
	
//	Release Memory on Heap :-
	/*for(int i=0; i<row; i++) {
			delete [] arr[i];
	}
	delete []arr;
	*/
	
	
	
	return 0;
}
