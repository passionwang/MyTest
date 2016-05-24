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
//    // 输入0，期待的输出是0
//    Test(0, 0);
//
//    // 输入1，期待的输出是1
//    Test(1, 1);
//
//    // 输入10，期待的输出是2
//    Test(10, 2);
//
//    // 输入0x7FFFFFFF，期待的输出是31
//    Test(0x7FFFFFFF, 31);
//
//    // 输入0xFFFFFFFF（负数），期待的输出是32
//    Test(0xFFFFFFFF, 32);
//
//    // 输入0x80000000（负数），期待的输出是1
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