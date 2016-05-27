//#include<iostream>
//using namespace std;
//
//void PrintMatrixClockWisely(int **pArr/*(*pArr)[4]*/,int columns,int rows)
//{
//	if(NULL == pArr || rows<1 || columns<1) return ;
//	int nBase = 0;
//	while(rows>0 && columns>0)
//	{
//		if(1 == rows)
//		{
//			for(int i=0;i<columns;++i)
//			{
//				cout<<pArr[0+nBase][i+nBase]<<endl;
//			}
//			return;
//		}
//		if(1 == columns)
//		{
//			for(int i=0;i<rows;++i)
//			{
//				cout<<pArr[i+nBase][nBase]<<endl;
//			}
//			return;
//		}
//		int i,j,k,l;
//		for(i=0;i<columns;++i)
//			cout<<pArr[0+nBase][i+nBase]<<"   ";
//		cout<<endl;
//		for(j=1;j<rows-1;++j)
//			cout<<pArr[j+nBase][i-1+nBase]<<"   ";
//		cout<<endl;
//		for(k=columns-1;k>=0;--k)
//			cout<<pArr[j+nBase][k+nBase]<<"   ";
//		cout<<endl;
//		for(l=j-1;l>0;--l)
//			cout<<pArr[l+nBase][0+nBase]<<"   ";
//		cout<<endl;
//		rows -= 2;
//		columns -= 2;
//		++nBase;
//	}
//}
//
//// ====================²âÊÔ´úÂë====================
//void Test(int columns, int rows)
//{
//    printf("Test Begin: %d columns, %d rows.\n", columns, rows);
//
//    if(columns < 1 || rows < 1)
//        return;
//
//    int** numbers = new int*[rows];
//    for(int i = 0; i < rows; ++i)
//    {
//        numbers[i] = new int[columns];
//        for(int j = 0; j < columns; ++j)
//        {
//            numbers[i][j] = i * columns + j + 1;
//        }
//    }
//
//    PrintMatrixClockWisely(numbers, columns, rows);
//    printf("\n");
//
//    for(int i = 0; i < rows; ++i)
//        delete[] (int*)numbers[i];
//
//    delete[] numbers;
//}
//
//int main(int argc, char* argv[])
//{
//    /*
//    1    
//    */
//    Test(1, 1);
//
//    /*
//    1    2
//    3    4
//    */
//    Test(2, 2);
//
//    /*
//    1    2    3    4
//    5    6    7    8
//    9    10   11   12
//    13   14   15   16
//    */
//    Test(4, 4);
//
//    /*
//    1    2    3    4    5
//    6    7    8    9    10
//    11   12   13   14   15
//    16   17   18   19   20
//    21   22   23   24   25
//    */
//    Test(5, 5);
//
//    /*
//    1
//    2
//    3
//    4
//    5
//    */
//    Test(1, 5);
//
//    /*
//    1    2
//    3    4
//    5    6
//    7    8
//    9    10
//    */
//    Test(2, 5);
//
//    /*
//    1    2    3
//    4    5    6
//    7    8    9
//    10   11   12
//    13   14   15
//    */
//    Test(3, 5);
//
//    /*
//    1    2    3    4
//    5    6    7    8
//    9    10   11   12
//    13   14   15   16
//    17   18   19   20
//    */
//    Test(4, 5);
//
//    /*
//    1    2    3    4    5
//    */
//    Test(5, 1);
//
//    /*
//    1    2    3    4    5
//    6    7    8    9    10
//    */
//    Test(5, 2);
//
//    /*
//    1    2    3    4    5
//    6    7    8    9    10
//    11   12   13   14    15
//    */
//    Test(5, 3);
//
//    /*
//    1    2    3    4    5
//    6    7    8    9    10
//    11   12   13   14   15
//    16   17   18   19   20
//    */
//    Test(5, 4);
//	system("pause");
//    return 0;
//}
//
//
//
////int main()
////{
////	int Arr[][4] = {
////		{1,2,3,4},
////		{5,6,7,8},
////		{9,10,11,12},
////		{13,14,15,16}
////	};
////	PrintMatrixClockWisely(Arr,4,4);
////	system("pause");
////	return 0;
////}