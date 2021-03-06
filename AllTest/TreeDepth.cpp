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
//	return ((left>right)?(left+1):(right+1));
//}
//
//// ====================测试代码====================
//void Test(BinaryTreeNode* pRoot, int expected)
//{
//    int result = TreeDepth(pRoot);
//    if(expected == result)
//        printf("Test passed.\n");
//    else
//        printf("Test failed.\n");
//}
//
////            1
////         /      \
////        2        3
////       /\         \
////      4  5         6
////        /
////       7
//void Test1()
//{
//    printf("Test1 begins.\n");
//
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
//    Test(pNode1, 4);
//
//    DestroyTree(pNode1);
//}
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
//void Test2()
//{
//    printf("Test2 begins.\n");
//
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
//    Test(pNode1, 5);
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
//void Test3()
//{
//    printf("Test3 begins.\n");
//
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
//    Test(pNode1, 5);
//
//    DestroyTree(pNode1);
//}
//
//// 树中只有1个结点
//void Test4()
//{
//    printf("Test4 begins.\n");
//
//    BinaryTreeNode* pNode1 = CreateBinaryTreeNode(1);
//    Test(pNode1, 1);
//
//    DestroyTree(pNode1);
//}
//
//// 树中没有结点
//void Test5()
//{
//    printf("Test5 begins.\n");
//
//    Test(NULL, 0);
//}
//
//int main(int argc, char* argv[])
//{
//    Test1();
//    Test2();
//    Test3();
//    Test4();
//    Test5();
//	system("pause");
//    return 0;
//}
//
