#include<iostream>
#include<vector>

using namespace std;

bool isPresent(int arr[][4], int target, int row, int col) {
	for(int row=0; row<3; row++) {
		for(int col=0; col<4; col++) {
			if(arr[row][col] == target) {
				return true;
			}
		}
	}
	return false;
}

void printrowsum(int arr[][4], int row, int col) {
	for(int i=0; i<row; i++) {
		int sum = 0;
		for(int j=0; j<col; j++) {
			sum += arr[i][j];
		}
		cout << sum << " ";
	}
}

void printcolsum(int arr[][4], int row, int col) {
	for(int i=0; i<col; i++) {
		int sum = 0;
		for(int j=0; j<row; j++) {
			sum += arr[j][i];
		}
		cout << sum << " ";
	}
}

int largestrow(int arr[][4], int row, int col) {
	int maxi = INT_MIN;
	int rowindex=-1;
	for(int i=0; i<row; i++) {
		int sum = 0;
		for(int j=0; j<col; j++) {
			sum += arr[i][j];
		}
		if(sum > maxi) {
			maxi = sum;
			rowindex = i;
		}
	}
	cout << "The Maximum Sum is : "<<maxi<<endl;
	return rowindex;
}

vector<int> WavePrint(int arr[][4], int Rows, int Cols) {
	//errors :
	vector<int> ans;
	for(int col=0; col<=Cols; col++) {
		
		if(col & 1) {
			// Odd Index --> Bottem To Top
			
			for(int row = Rows-1; row>=0; row-- ) {
//				cout<< arr[row][col]<<" ";
				ans.push_back( arr[row][col] );
			}
			
		}else{
			// Even Index --> Top To Bottem
			
			for(int row = 0; row<Rows; row++) {
//				cout<< arr[row][col]<<" ";
				ans.push_back( arr[row][col] );
			}
			
		}
		
	}
	return ans;
}

vector<int> Spiral_Order_print(int arr[][4], int Rows, int Cols) {
//	vector<int> ans;
//	int row = matrix.size();
//	int col = matrix[0].size();
//	
//	int count = 0;
//	int total = row*col;
//	
////	Index Initizition :
//	int startingrow = 0;
//	int startingcol = 0;
//	int endingrow = row - 1;
//	int endingcol = col - 1;
//	
//	
//	while(count < total) {
//		
//		// Print Starting Row :
//		for (int index=startingcol; count < total && index < endingcol; index++) {
//			ans.push_back( matrix[startingrow][index]);
//			count++;
//		}
//		startingrow++;
//		
//		// Print Ending Column :
//		for (int index=startingrow; count < total && index < endingrow; index++) {
//			ans.push_back( matrix[index][endingcol]);
//			count++;
//		}
//		endingcol--;
//		
//		// Print Ending Row:
//		for (int index=endingcol; count < total && index >= startingcol; index++) {
//			ans.push_back( matrix[endingrow][index]);
//			count++;
//		}
//		endingrow++;
//		
//		// Print Starting Column :
//		for (int index=endingrow; count < total && index >= startingrow; index++) {
//			ans.push_back( matrix[index][startingcol]);
//			count++;
//		}
//		startingcol++;
//	}
//	return ans;
}

void Rotate_Array()
{	
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
	int rows = 3, cols = 3;
	
	for(int col = 0; col <= cols-1; col++) {
		for(int row = rows-1; row >= 0; row--) {
			cout<<arr[row][col]<<" ";
		}
		cout<<endl;
	}
} 

int main()
{
	
//	Create 2D-Array :
//	int arr[3][4];
//	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	int arr[3][4] = { {1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333} };


//	2D Array Input :
	//cout<<"Enter Number : "<<endl;
//	 --> 1. Row vise Input :
	/*for(int i=0; i<3; i++) {
		for(int j=0; j<4; j++) {
			cin>>arr[i][j];
		}
	}*/
//	--> 2. Column vise Input :
	/*for(int i=0; i<4; i++) {
		for(int j=0; j<3; j++) {
			cin>>arr[j][i];
		}
	}*/
	
	
//	2D Array Output :
	/*cout<<"Print 2D - Array : "<<endl;
	for(int i=0; i<3; i++) {
		for(int j=0; j<4; j++) {
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}*/
	
	
//	Search element :
	/*cout<< "Enter The To Search Element :"<<endl;
	int target;
	cin>>target;
	if ( isPresent(arr, target, 3, 4) ) {
		cout<<"Element Found "<<endl;
	}else{
		cout<<"Not Found"<<endl;
	}*/
	
//	Print row wise Sum
	/*cout << "Print row wise Sum is : ";
	printrowsum(arr, 3, 4);
	cout << endl;*/
	
//	Print column wise Sum
	/* << "Print column wise Sum is : ";
	printcolsum(arr, 3, 4);
	cout << endl;*/
	
//	1 2 3 4 5 6 7 8 9 10 11 12
	
//	Largest Sum in row :
	//cout<<"Largest Sum in row index : "<< largestrow(arr, 3, 4) <<endl;
	
//	 Print Wave :
//	cout<<"Print Wave : " << WavePrint(arr, 3, 4) <<endl;
	
//	Rotate Array :
	Rotate_Array();
	
	
	
	return 0;
}
