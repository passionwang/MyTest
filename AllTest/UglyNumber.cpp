//#include<iostream>
//using namespace std;
//
//bool IsUglyNumber(int num)
//{
//	if(num < 0) return false;
//
//	while(num % 2 == 0) 
//		num /= 2;
//	while(num % 3 == 0)
//		num /=3;
//	while(num % 5 == 0)
//		num /= 5;
//
//	if(1 == num) 
//		return true;
//	return false;
//
//}
//
//int GetUglyNumber_Solution1(int nIndex)
//{
//	if(nIndex<1) return -1;
//
//	int nUglyCount = 0;
//	int num = 0;
//
//	while(nUglyCount<nIndex)
//	{
//		++num;
//		if(IsUglyNumber(num))
//			++nUglyCount;
//	}
//
//	return num;
//}
//
//int Min(int n1,int n2,int n3)
//{
//	int min = (n1>n2?n2:n1);
//	return (min>n3?n3:min);
//}
//
//int GetUglyNumber_Solution2(int nIndex)
//{
//	if(nIndex<1) return 0;
//
//	int* pUglyArr = new int[nIndex];
//	pUglyArr[0] = 1;
//	int pNextIndex = 1;
//
//	int* p2 = pUglyArr;
//	int* p3 = pUglyArr;
//	int* p5 = pUglyArr;
//
//	while(pNextIndex<nIndex)
//	{
//		int min = Min(*p2 * 2,*p3 * 3,*p5 * 5);
//		pUglyArr[pNextIndex] = min;
//
//		if(*p2 * 2 <= min)
//			++p2;
//		if(*p3 * 3 <= min)
//			++p3;
//		if(*p5 * 5 <= min)
//			++p5;
//
//		++pNextIndex;
//	}
//	--pNextIndex;
//	int num = pUglyArr[pNextIndex];
//	delete[] pUglyArr;
//	return num;
//}
//// ====================²âÊÔ´úÂë====================
//void Test(int index, int expected)
//{
//   /* if(GetUglyNumber_Solution1(index) == expected)
//        printf("solution1 passed\n");
//    else
//        printf("solution1 failed\n");*/
//
//    if(GetUglyNumber_Solution2(index) == expected)
//        printf("solution2 passed\n");
//    else
//        printf("solution2 failed\n");
//}
//
//int main(int argc, char* argv[])
//{
//    Test(1, 1);
//
//    Test(2, 2);
//    Test(3, 3);
//    Test(4, 4);
//    Test(5, 5);
//    Test(6, 6);
//    Test(7, 8);
//    Test(8, 9);
//    Test(9, 10);
//    Test(10, 12);
//    Test(11, 15);
//
//    Test(1500, 859963392);
//
//    Test(0, 0);
//	system("pause");
//    return 0;
//}
//
//
////int main()
////{
////
////
////	system("pause");
////	return 0;
////}