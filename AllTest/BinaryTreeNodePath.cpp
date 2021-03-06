//#include<iostream>
//#include"BinaryTreeNode.h"
//#include<vector>
//using namespace std;
//void FindBinaryTreePath(BinaryTreeNode* pRoot,int nThink,vector<int>&stackPath,int& nSum)
//{
//	if(NULL == pRoot) return;
//
//	nSum += pRoot->m_nValue;
//	stackPath.push_back(pRoot->m_nValue);
//
//	bool IsLeaf = pRoot->m_pLeft==NULL && pRoot->m_pRight==NULL;
//	if(nThink == nSum && IsLeaf)
//	{
//		vector<int>::iterator ite = stackPath.begin();
//		while(ite != stackPath.end())
//		{
//			cout<<*ite<<endl;
//			++ite;
//		}
//	}	
//
//	if(NULL != pRoot->m_pLeft)
//		FindBinaryTreePath(pRoot->m_pLeft,nThink,stackPath,nSum);
//	if(NULL != pRoot->m_pRight)
//		FindBinaryTreePath(pRoot->m_pRight,nThink,stackPath,nSum);
//	
//	nSum -= pRoot->m_nValue;
//	stackPath.pop_back();
//}
//void FindBinaryTreePath(BinaryTreeNode* pRoot,int nThink)
//{
//	if(NULL == pRoot) return ;
//
//	int nSum = 0;
//	vector<int> stackPath;
//	FindBinaryTreePath(pRoot,nThink,stackPath,nSum);
//}
//// ====================测试代码====================
//void Test(char* testName, BinaryTreeNode* pRoot, int expectedSum)
//{
//    if(testName != NULL)
//        printf("%s begins:\n", testName);
//
//    FindBinaryTreePath(pRoot, expectedSum);
//
//    printf("\n");
//}
//
////            10
////         /      \
////        5        12
////       /\        
////      4  7     
//// 有两条路径上的结点和为22
//void Test1()
//{
//    BinaryTreeNode* pNode10 = CreateBinaryTreeNode(10);
//    BinaryTreeNode* pNode5 = CreateBinaryTreeNode(5);
//    BinaryTreeNode* pNode12 = CreateBinaryTreeNode(12);
//    BinaryTreeNode* pNode4 = CreateBinaryTreeNode(4);
//    BinaryTreeNode* pNode7 = CreateBinaryTreeNode(7);
//
//    ConnectTreeNodes(pNode10, pNode5, pNode12);
//    ConnectTreeNodes(pNode5, pNode4, pNode7);
//
//    printf("Two paths should be found in Test1.\n");
//    Test("Test1", pNode10, 22);
//
//    DestroyTree(pNode10);
//}
//
////            10
////         /      \
////        5        12
////       /\        
////      4  7     
//// 没有路径上的结点和为15
//void Test2()
//{
//    BinaryTreeNode* pNode10 = CreateBinaryTreeNode(10);
//    BinaryTreeNode* pNode5 = CreateBinaryTreeNode(5);
//    BinaryTreeNode* pNode12 = CreateBinaryTreeNode(12);
//    BinaryTreeNode* pNode4 = CreateBinaryTreeNode(4);
//    BinaryTreeNode* pNode7 = CreateBinaryTreeNode(7);
//
//    ConnectTreeNodes(pNode10, pNode5, pNode12);
//    ConnectTreeNodes(pNode5, pNode4, pNode7);
//
//    printf("No paths should be found in Test2.\n");
//    Test("Test2", pNode10, 15);
//
//    DestroyTree(pNode10);
//}
//
////               5
////              /
////             4
////            /
////           3
////          /
////         2
////        /
////       1
//// 有一条路径上面的结点和为15
//void Test3()
//{
//    BinaryTreeNode* pNode5 = CreateBinaryTreeNode(5);
//    BinaryTreeNode* pNode4 = CreateBinaryTreeNode(4);
//    BinaryTreeNode* pNode3 = CreateBinaryTreeNode(3);
//    BinaryTreeNode* pNode2 = CreateBinaryTreeNode(2);
//    BinaryTreeNode* pNode1 = CreateBinaryTreeNode(1);
//
//    ConnectTreeNodes(pNode5, pNode4, NULL);
//    ConnectTreeNodes(pNode4, pNode3, NULL);
//    ConnectTreeNodes(pNode3, pNode2, NULL);
//    ConnectTreeNodes(pNode2, pNode1, NULL);
//
//    printf("One path should be found in Test3.\n");
//    Test("Test3", pNode5, 15);
//
//    DestroyTree(pNode5);
//}
//
//// 1
////  \
////   2
////    \
////     3
////      \
////       4
////        \
////         5
//// 没有路径上面的结点和为16
//void Test4()
//{
//    BinaryTreeNode* pNode1 = CreateBinaryTreeNode(1);
//    BinaryTreeNode* pNode2 = CreateBinaryTreeNode(2);
//    BinaryTreeNode* pNode3 = CreateBinaryTreeNode(3);
//    BinaryTreeNode* pNode4 = CreateBinaryTreeNode(4);
//    BinaryTreeNode* pNode5 = CreateBinaryTreeNode(5);
//
//    ConnectTreeNodes(pNode1, NULL, pNode2);
//    ConnectTreeNodes(pNode2, NULL, pNode3);
//    ConnectTreeNodes(pNode3, NULL, pNode4);
//    ConnectTreeNodes(pNode4, NULL, pNode5);
//
//    printf("No paths should be found in Test4.\n");
//    Test("Test4", pNode1, 16);
//
//    DestroyTree(pNode1);
//}
//
//// 树中只有1个结点
//void Test5()
//{
//    BinaryTreeNode* pNode1 = CreateBinaryTreeNode(1);
//
//    printf("One path should be found in Test5.\n");
//    Test("Test5", pNode1, 1);
//
//    DestroyTree(pNode1);
//}
//
//// 树中没有结点
//void Test6()
//{
//    printf("No paths should be found in Test6.\n");
//    Test("Test6", NULL, 0);
//}
//
//int main(int argc, char* argv[])
//{
//    Test1();
//    Test2();
//    Test3();
//    Test4();
//    Test5();
//    Test6();
//	system("pause");
//    return 0;
//}
////int main()
////{
////
////
////	system("pause");
////	return 0;
////}