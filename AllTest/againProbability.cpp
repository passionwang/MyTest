//#include<iostream>
//using namespace std;
//
//int g_Point = 6;
//
//void Probability(int nOrigin,int n,int Sum,int* pArr)
//{
//	if(NULL == pArr || Sum < 0 || nOrigin < 0 || n < 1) return;
//	if(1 == n)
//		++pArr[Sum-nOrigin];
//	else
//	{
//		for(int i=1;i<=g_Point;++i)
//		{
//			Probability(nOrigin,n-1,Sum+i,pArr);
//		}
//	}
//}
//
//void Probability(int n)
//{
//	if(n<1) return ;
//
//	int nMax = (g_Point-1) * n + 1;
//
//	int* pArr = new int[nMax];
//	memset(pArr,0,sizeof(int)*nMax);
//
//	for(int i=1;i<=g_Point;++i)
//		Probability(n,n,i,pArr);
//
//	double dMax = pow((double)g_Point,n);
//
//	for(int i=n;i<=n*g_Point;++i)
//	{
//		double Pro = (double)pArr[i-n] / dMax;
//		printf("%d:%e\n",i,Pro);
//	}
//	delete[] pArr;
//	pArr = NULL;
//}
//
//void Probability2(int n)
//{
//	if(n<1) return;
//
//	int nMax = n * g_Point - n + 1;
//
//	int *pArr[2];
//
//	pArr[0] = new int[nMax];
//	pArr[1] = new int[nMax];
//
//	memset(pArr[0],0,sizeof(int)*nMax);
//	memset(pArr[1],0,sizeof(int)*nMax);
//
//	for(int i=0;i<g_Point;++i)
//		pArr[0][i] = 1;
//
//	int flag = 0;
//	for(int i=2;i<=n;++i)
//	{
//		for(int j=i;j<=i*g_Point;++j)
//		{
//			pArr[1-flag][j-i] = 0;
//			for(int k=0;k<g_Point && j-i-k>=0;++k)
//			{
//				pArr[1-flag][j-i] += pArr[flag][j-i-k];
//			}
//		}
//		flag = 1-flag;
//	}
//
//	double dMax = pow((double)g_Point,n);
//	for(int i=n;i<=n*g_Point;++i)
//	{
//		double Pro = (double)pArr[flag][i-n] / dMax;
//		printf("%d:%e\n",i,Pro);
//	}
//	delete[] pArr[0];
//	delete[] pArr[1];
//}
//
//// ====================²âÊÔ´úÂë====================
//void Test(int n)
//{
//    printf("Test for %d begins:\n", n);
//    
//    printf("Test for solution1\n");
//    Probability(n);
//
//    printf("Test for solution2\n");
//    Probability2(n);
//
//    printf("\n");
//}
//
//int main(int argc, char* argv[])
//{
//    Test(1);
//    Test(2);
//    Test(3);
//    Test(4);
//    
//    Test(11);
//
//    Test(0);
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