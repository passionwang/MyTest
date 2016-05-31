//#include<iostream>
//using namespace std;
//
//void Print(int nLow,int nHigh)
//{
//	for(int i=nLow;i<=nHigh;++i)
//		cout<<i<<"  ";
//	cout<<endl;
//}
//
//void FindContinueSequence(int nSum)
//{
//	int nLow = 1;
//	int nHigh = 2;
//	int nCurrentSum = 3;
//
//	while(2*nLow+1<=nSum)
//	{
//		if(nCurrentSum == nSum)
//		{
//			Print(nLow,nHigh);
//			++nHigh;
//			nCurrentSum = nCurrentSum+nHigh-nLow;
//			++nLow;
//		}
//		else if(nCurrentSum<nSum)
//		{
//			++nHigh;
//			nCurrentSum += nHigh;
//		}
//		else
//		{
//			nCurrentSum -= nLow;
//			++nLow;
//		}
//	}
//}
//// ====================²âÊÔ´úÂë====================
//void Test(char* testName, int sum)
//{
//    if(testName != NULL)
//        printf("%s for %d begins: \n", testName, sum);
//
//    FindContinueSequence(sum);
//}
//
//int main(int argc, char* argv[])
//{
//    Test("test1", 1);
//    Test("test2", 3);
//    Test("test3", 4);
//    Test("test4", 9);
//    Test("test5", 15);
//    Test("test6", 100);
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