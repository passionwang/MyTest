//#include<iostream>
//using namespace std;
//
//int g_MaxPoint = 6;
//
//void Probability(int nOrigin,int n,int Sum,int* pArr)
//{
//	if(NULL == pArr || n<1 || Sum<0 || nOrigin<0) return ;
//
//	if(1 == n)
//		++pArr[Sum-nOrigin];
//	else
//	{
//		for(int i=1;i<=g_MaxPoint;++i)
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
//	int nMax = (g_MaxPoint-1)*n+1;
//
//	int* pArr = new int[nMax];
//	memset(pArr,0,sizeof(int)*nMax);
//
//	for(int i=1;i<=g_MaxPoint;++i)
//	{
//		Probability(n,n,i,pArr);
//	}
//
//	double dMax = pow((double)g_MaxPoint,n);
//
//	for(int i=n;i<=n*g_MaxPoint;++i)
//	{
//		double Pro = (double)pArr[i-n] / dMax;
//		printf("%d:%e\n",i,Pro);
//	}
//	delete[] pArr;
//}
//
//void Probability2(int n)
//{
//	if(n<1) return ;
//
//	int nMax = (g_MaxPoint-1)*n+1;
//
//	int* p[2];
//	p[0] = new int[nMax];
//	p[1] = new int[nMax];
//
//	memset(p[0],0,sizeof(int)*nMax);
//	memset(p[1],0,sizeof(int)*nMax);
//
//	for(int i=0;i<g_MaxPoint;++i)
//		p[0][i] = 1;
//
//	int flag = 0;
//	for(int i=2;i<=n;++i)
//	{
//		for(int j=i;j<=i*g_MaxPoint;++j)
//		{
//			p[1-flag][j-i] = 0;
//			for(int k=0;k<g_MaxPoint && j-i-k>=0;++k)
//			{
//				p[1-flag][j-i] += p[flag][j-i-k]; 		
//			}
//		}
//		flag = 1-flag;
//	}
//
//	double dMax = pow((double)g_MaxPoint,n);
//	for(int i=n;i<=n*g_MaxPoint;++i)
//	{
//		double Pro = p[flag][i-n] / dMax;
//		printf("%d:%e\n",i,Pro);
//	}
//	delete[] p[0];
//	delete[] p[1];
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
////int main()
////{
////
////
////	system("pause");
////	return 0;
////}