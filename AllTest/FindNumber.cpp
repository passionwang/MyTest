//#include<iostream>
//using namespace std;
//
//bool FindNumber(int (*pArr)[4],int rows,int columns,int num)
//{
//	if(NULL == pArr || rows<1 || columns<1) return false;
//
//	int nRow = 0;
//	int nColumn = columns - 1;
//
//	while(nRow <= rows - 1 && nColumn >= 0)
//	{
//		if(num == pArr[nRow][nColumn]) return true;
//		if(num > pArr[nRow][nColumn]) ++nRow;
//		if(num < pArr[nRow][nColumn]) --nColumn;
//	}
//
//	return false;
//}
//
////int main()
////{
////	int Arr[][4] = {
////					{1,2,8,9},
////					{2,4,9,12},
////					{4,7,10,13},
////					{6,8,11,15}
////					};
////	cout<<FindNumber(Arr,4,4,7)<<endl;
////	system("pause");
////	return 0;
////}
//void Test(char* testName, int(*matrix)[4], int rows, int columns, int number, bool expected)
//{
//    if(testName != NULL)
//        printf("%s begins: ", testName);
//
//    bool result = FindNumber(matrix, rows, columns, number);
//    if(result == expected)
//        printf("Passed.\n");
//    else
//        printf("Failed.\n");
//}
//
////  1   2   8   9
////  2   4   9   12
////  4   7   10  13
////  6   8   11  15
//// 要查找的数在数组中
//void Test1()
//{
//    int matrix[4][4] = {{1, 2, 8, 9}, {2, 4, 9, 12}, {4, 7, 10, 13}, {6, 8, 11, 15}};
//    Test("Test1", matrix, 4, 4, 7, true);
//}
//
////  1   2   8   9
////  2   4   9   12
////  4   7   10  13
////  6   8   11  15
//// 要查找的数不在数组中
//void Test2()
//{
//    int matrix[][4] = {{1, 2, 8, 9}, {2, 4, 9, 12}, {4, 7, 10, 13}, {6, 8, 11, 15}};
//    Test("Test2", matrix, 4, 4, 5, false);
//}
//
////  1   2   8   9
////  2   4   9   12
////  4   7   10  13
////  6   8   11  15
//// 要查找的数是数组中最小的数字
//void Test3()
//{
//    int matrix[][4] = {{1, 2, 8, 9}, {2, 4, 9, 12}, {4, 7, 10, 13}, {6, 8, 11, 15}};
//    Test("Test3",matrix, 4, 4, 1, true);
//}
//
////  1   2   8   9
////  2   4   9   12
////  4   7   10  13
////  6   8   11  15
//// 要查找的数是数组中最大的数字
//void Test4()
//{
//    int matrix[][4] = {{1, 2, 8, 9}, {2, 4, 9, 12}, {4, 7, 10, 13}, {6, 8, 11, 15}};
//    Test("Test4", matrix, 4, 4, 15, true);
//}
//
////  1   2   8   9
////  2   4   9   12
////  4   7   10  13
////  6   8   11  15
//// 要查找的数比数组中最小的数字还小
//void Test5()
//{
//    int matrix[][4] = {{1, 2, 8, 9}, {2, 4, 9, 12}, {4, 7, 10, 13}, {6, 8, 11, 15}};
//    Test("Test5", matrix, 4, 4, 0, false);
//}
//
////  1   2   8   9
////  2   4   9   12
////  4   7   10  13
////  6   8   11  15
//// 要查找的数比数组中最大的数字还大
//void Test6()
//{
//    int matrix[][4] = {{1, 2, 8, 9}, {2, 4, 9, 12}, {4, 7, 10, 13}, {6, 8, 11, 15}};
//    Test("Test6", matrix, 4, 4, 16, false);
//}
//
//// 鲁棒性测试，输入空指针
//void Test7()
//{
//    Test("Test7", NULL, 0, 0, 16, false);
//}
//
//int main()
//{
//    Test1();
//    Test2();
//    Test3();
//    Test4();
//    Test5();
//    Test6();
//    Test7();
//	system("pause");
//    return 0;
//}
