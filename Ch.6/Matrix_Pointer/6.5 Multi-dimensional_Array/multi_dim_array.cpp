#include <iostream>

using namespace std;

int main()
{
//	const int num_rows = 3;
//	const int num_columns = 5;
//
//	for (int row = 0; row < num_rows; row++)
//	{
//		for (int col = 0; col < num_columns; col++)
//		{
//			cout << '[' << row << ']' << '[' << col << ']' << '\t';
//
//		}
//		cout << endl;
//	}
//	cout << endl;
//
//	int array[num_rows][num_columns]; // row-major <-> column-major
//	
//									  //init
//	array[0][0] = 1;
//
//	int array2[][num_columns] =
//	{
//		{1, 2, },		// row 0
//		{6, 7, 8, 9, 10},		// row 1
//		{11, 12, 13, 14, 15}	// row 2
//	};
//
//	//or cpp11 upper
//
//	//int array[num_rows][num_columns]
//	//{
//	//	{1, 2, 3, 4, 5},		// row 0
//	//	{6, 7, 8, 9, 10},		// row 1
//	//	{11, 12, 13, 14, 15}	// row 2
//	//};
//
//	for (int row = 0; row < num_rows; row++)
//	{
//		for (int col = 0; col < num_columns; col++)
//		{
//			cout << array2[row][col] << '\t';
//			//cout << (int)&array2[row][col] << '\t';
//		}
//		cout << endl;
//	}
	int array[5][4][3]; // 3 dim, tensor

	return 0;
}