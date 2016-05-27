//#include<iostream>
//#include"BinaryTreeNode.h"
//#include<vector>
//using namespace std;
//
//void FindPath(BinaryTreeNode* pRoot,int nThink,vector<int>& stackPath,int& nSum)
//{
//	if(NULL == pRoot) return;
//
//	nSum += pRoot->m_nValue;
//	stackPath.push_back(pRoot->m_nValue);
//
//	bool IsLeaf = (NULL == pRoot->m_pLeft) && (NULL == pRoot->m_pRight);
//	if(IsLeaf && nSum == nThink)
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
//		FindPath(pRoot->m_pLeft,nThink,stackPath,nSum);
//	if(NULL != pRoot->m_pRight)
//		FindPath(pRoot->m_pRight,nThink,stackPath,nSum);
//
//	nSum -= pRoot->m_nValue;
//	stackPath.pop_back();
//}
//
//void FindPath(BinaryTreeNode* pRoot,int nThink)
//{
//	if(NULL == pRoot) return;
//	int nSum = 0;
//	vector<int> stackPath;
//	FindPath(pRoot,nThink,stackPath,nSum);
//}
//// ====================���Դ���====================
//void Test(char* testName, BinaryTreeNode* pRoot, int expectedSum)
//{
//    if(testName != NULL)
//        printf("%s begins:\n", testName);
//
//    FindPath(pRoot, expectedSum);
//
//    printf("\n");
//}
//
////            10
////         /      \
////        5        12
////       /\        
////      4  7     
//// ������·���ϵĽ���Ϊ22
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
//// û��·���ϵĽ���Ϊ15
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
//// ��һ��·������Ľ���Ϊ15
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
//// û��·������Ľ���Ϊ16
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
//// ����ֻ��1�����
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
//// ����û�н��
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
//
////int main()
////{
////
////	system("pause");
////	return 0;
////}