//#include<iostream>
//#include"BinaryTreeNode.h"
//using namespace std;
//
//int TreeDepth(BinaryTreeNode* pRoot)
//{
//	if(NULL == pRoot) return 0;
//
//	int left = TreeDepth(pRoot->m_pLeft);
//	int right = TreeDepth(pRoot->m_pRight);
//
//	return (1 + (left>right?left:right));
//
//}
//
//bool IsBalance1(BinaryTreeNode* pRoot)
//{
//	if(NULL == pRoot) return true;
//
//	int left = TreeDepth(pRoot->m_pLeft);
//	int right = TreeDepth(pRoot->m_pRight);
//
//	int diff = left-right;
//	if(diff>1 || diff<-1)
//		return false;
//
//	return IsBalance1(pRoot->m_pLeft) && IsBalance1(pRoot->m_pRight);
//
//}
//
//bool IsBalance(BinaryTreeNode* pRoot,int& depth)
//{
//	if(NULL == pRoot)
//	{
//		depth = 0;
//		return true;
//	}
//
//	int left ;
//	int right;
//	if(IsBalance(pRoot->m_pLeft,left) && IsBalance(pRoot->m_pRight,right))
//	{
//		int diff = left - right;
//		if(diff>=-1 && diff<=1)
//		{
//			depth = (1+(left>right?left:right));
//			return true;
//		}
//	}
//	return false;
//}
//
//bool IsBalance2(BinaryTreeNode* pRoot)
//{
//	if(NULL == pRoot) return true;
//	int depth = 0;
//	return IsBalance(pRoot,depth);
//}
//// ====================测试代码====================
//void Test(char* testName, BinaryTreeNode* pRoot, bool expected)
//{
//    if(testName != NULL)
//        printf("%s begins:\n", testName);
//
//    printf("Solution1 begins: ");
//    if(IsBalance1(pRoot) == expected)
//        printf("Passed.\n");
//    else
//        printf("Failed.\n");
//
//    printf("Solution2 begins: ");
//    if(IsBalance2(pRoot) == expected)
//        printf("Passed.\n");
//    else
//        printf("Failed.\n");
//}
//
//// 完全二叉树
////             1
////         /      \
////        2        3
////       /\       / \
////      4  5     6   7
//void Test1()
//{
//    BinaryTreeNode* pNode1 = CreateBinaryTreeNode(1);
//    BinaryTreeNode* pNode2 = CreateBinaryTreeNode(2);
//    BinaryTreeNode* pNode3 = CreateBinaryTreeNode(3);
//    BinaryTreeNode* pNode4 = CreateBinaryTreeNode(4);
//    BinaryTreeNode* pNode5 = CreateBinaryTreeNode(5);
//    BinaryTreeNode* pNode6 = CreateBinaryTreeNode(6);
//    BinaryTreeNode* pNode7 = CreateBinaryTreeNode(7);
//
//    ConnectTreeNodes(pNode1, pNode2, pNode3);
//    ConnectTreeNodes(pNode2, pNode4, pNode5);
//    ConnectTreeNodes(pNode3, pNode6, pNode7);
//
//    Test("Test1", pNode1, true);
//
//    DestroyTree(pNode1);
//}
//
//// 不是完全二叉树，但是平衡二叉树
////             1
////         /      \
////        2        3
////       /\         \
////      4  5         6
////        /
////       7
//void Test2()
//{
//    BinaryTreeNode* pNode1 = CreateBinaryTreeNode(1);
//    BinaryTreeNode* pNode2 = CreateBinaryTreeNode(2);
//    BinaryTreeNode* pNode3 = CreateBinaryTreeNode(3);
//    BinaryTreeNode* pNode4 = CreateBinaryTreeNode(4);
//    BinaryTreeNode* pNode5 = CreateBinaryTreeNode(5);
//    BinaryTreeNode* pNode6 = CreateBinaryTreeNode(6);
//    BinaryTreeNode* pNode7 = CreateBinaryTreeNode(7);
//
//    ConnectTreeNodes(pNode1, pNode2, pNode3);
//    ConnectTreeNodes(pNode2, pNode4, pNode5);
//    ConnectTreeNodes(pNode3, NULL, pNode6);
//    ConnectTreeNodes(pNode5, pNode7, NULL);
//
//    Test("Test2", pNode1, true);
//
//    DestroyTree(pNode1);
//}
//
//// 不是平衡二叉树
////             1
////         /      \
////        2        3
////       /\         
////      4  5        
////        /
////       6
//void Test3()
//{
//    BinaryTreeNode* pNode1 = CreateBinaryTreeNode(1);
//    BinaryTreeNode* pNode2 = CreateBinaryTreeNode(2);
//    BinaryTreeNode* pNode3 = CreateBinaryTreeNode(3);
//    BinaryTreeNode* pNode4 = CreateBinaryTreeNode(4);
//    BinaryTreeNode* pNode5 = CreateBinaryTreeNode(5);
//    BinaryTreeNode* pNode6 = CreateBinaryTreeNode(6);
//
//    ConnectTreeNodes(pNode1, pNode2, pNode3);
//    ConnectTreeNodes(pNode2, pNode4, pNode5);
//    ConnectTreeNodes(pNode5, pNode6, NULL);
//
//    Test("Test3", pNode1, false);
//
//    DestroyTree(pNode1);
//}
//
//
////               1
////              /
////             2
////            /
////           3
////          /
////         4
////        /
////       5
//void Test4()
//{
//    BinaryTreeNode* pNode1 = CreateBinaryTreeNode(1);
//    BinaryTreeNode* pNode2 = CreateBinaryTreeNode(2);
//    BinaryTreeNode* pNode3 = CreateBinaryTreeNode(3);
//    BinaryTreeNode* pNode4 = CreateBinaryTreeNode(4);
//    BinaryTreeNode* pNode5 = CreateBinaryTreeNode(5);
//	
//    ConnectTreeNodes(pNode1, pNode2, NULL);
//    ConnectTreeNodes(pNode2, pNode3, NULL);
//    ConnectTreeNodes(pNode3, pNode4, NULL);
//    ConnectTreeNodes(pNode4, pNode5, NULL);
//
//    Test("Test4", pNode1, false);
//
//    DestroyTree(pNode1);
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
//void Test5()
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
//    Test("Test5", pNode1, false);
//
//    DestroyTree(pNode1);
//}
//
//// 树中只有1个结点
//void Test6()
//{
//    BinaryTreeNode* pNode1 = CreateBinaryTreeNode(1);
//    Test("Test6", pNode1, true);
//
//    DestroyTree(pNode1);
//}
//
//// 树中没有结点
//void Test7()
//{
//    Test("Test7", NULL, true);
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
//    Test7();
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