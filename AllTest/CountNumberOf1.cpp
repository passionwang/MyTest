//#include<iostream>
//using namespace std;
//
//
//int CountNumberOf1(int num)
//{
//	int nCount = 0;
//	while(num)
//	{
//		++nCount;
//		num = num & (num-1);
//	}
//	return nCount;
//}
//
//void Test(int number, unsigned int expected)
//{
//    int actual = CountNumberOf1(number);
//    if(actual == expected)
//        printf("Solution1: Test for %p passed.\n", number);
//    else
//        printf("Solution1: Test for %p failed.\n", number);
//
//    actual = CountNumberOf1(number);
//    if(actual == expected)
//        printf("Solution2: Test for %p passed.\n", number);
//    else
//        printf("Solution2: Test for %p failed.\n", number);
//
//    printf("\n");
//}
//
//int main()
//{
//    // ����0���ڴ��������0
//    Test(0, 0);
//
//    // ����1���ڴ��������1
//    Test(1, 1);
//
//    // ����10���ڴ��������2
//    Test(10, 2);
//
//    // ����0x7FFFFFFF���ڴ��������31
//    Test(0x7FFFFFFF, 31);
//
//    // ����0xFFFFFFFF�����������ڴ��������32
//    Test(0xFFFFFFFF, 32);
//
//    // ����0x80000000�����������ڴ��������1
//    Test(0x80000000, 1);
//	system("pause");
//    return 0;
//}
//
////int main()
////{
////	for(int i=0;i<0x10;++i)
////		cout<<CountNumberOf1(i)<<endl;
////
////
////
////	system("pause");
////	return 0;
////}