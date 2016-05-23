//#include<iostream>
//
//using namespace std;
//
//struct BinaryTreeNode
//{
//	int m_nValue;
//	BinaryTreeNode* m_pLeft;
//	BinaryTreeNode* m_pRight;
//};
//
//BinaryTreeNode* ConstructCore(int* PreOrderStart,int* PreOrderEnd,
//							  int* InOrderStart,int* InOrderEnd)
//{
//	int rootValue = PreOrderStart[0];
//	BinaryTreeNode* pRoot = new BinaryTreeNode();
//	pRoot->m_nValue = rootValue ;
//	pRoot->m_pLeft = NULL ;
//	pRoot->m_pRight = NULL;
//
//	if(PreOrderStart == PreOrderEnd)
//	{
//		if(InOrderStart == InOrderEnd && *PreOrderStart == *InOrderStart)
//			return pRoot;
//		else
//			throw exception("Invalid Input.");
//	}
//	int* rootInOrder = InOrderStart;
//	while(rootInOrder <= InOrderEnd && *rootInOrder != rootValue)
//		++rootInOrder;
//	if(rootInOrder == InOrderEnd && *rootInOrder != rootValue)
//		throw exception("InValid Input.");
//	int leftLenght = rootInOrder - InOrderStart;
//	int* leftPreOrderEnd = PreOrderStart + leftLenght;
//	if(leftLenght>0)
//	{
//		pRoot->m_pLeft = ConstructCore(PreOrderStart+1,leftPreOrderEnd,
//										InOrderStart,rootInOrder-1);
//	}
//	if(leftLenght<PreOrderEnd - PreOrderStart)
//	{
//		pRoot->m_pRight = ConstructCore(leftPreOrderEnd+1,PreOrderEnd,
//										rootInOrder+1,InOrderEnd);
//	}
//	return pRoot;
//}
//
//BinaryTreeNode* CreateBinaryTree(int* PreOrder,int* InOrder,int nLenght)
//{
//	if(NULL == PreOrder || NULL == InOrder || nLenght < 1) return NULL;
//
//	return ConstructCore(PreOrder,PreOrder+nLenght-1,InOrder,InOrder+nLenght-1);
//}
//void PrintTreeNode(BinaryTreeNode* pNode)
//{
//    if(pNode != NULL)
//    {
//        printf("value of this node is: %d\n", pNode->m_nValue);
//
//        if(pNode->m_pLeft != NULL)
//            printf("value of its left child is: %d.\n", pNode->m_pLeft->m_nValue);
//        else
//            printf("left child is null.\n");
//
//        if(pNode->m_pRight != NULL)
//            printf("value of its right child is: %d.\n", pNode->m_pRight->m_nValue);
//        else
//            printf("right child is null.\n");
//    }
//    else
//    {
//        printf("this node is null.\n");
//    }
//
//    printf("\n");
//}
//
//void PrintTree(BinaryTreeNode* pRoot)
//{
//    PrintTreeNode(pRoot);
//
//    if(pRoot != NULL)
//    {
//        if(pRoot->m_pLeft != NULL)
//            PrintTree(pRoot->m_pLeft);
//
//        if(pRoot->m_pRight != NULL)
//            PrintTree(pRoot->m_pRight);
//    }
//}
//
//void DestroyTree(BinaryTreeNode* pRoot)
//{
//    if(pRoot != NULL)
//    {
//        BinaryTreeNode* pLeft = pRoot->m_pLeft;
//        BinaryTreeNode* pRight = pRoot->m_pRight;
//
//        delete pRoot;
//        pRoot = NULL;
//
//        DestroyTree(pLeft);
//        DestroyTree(pRight);
//    }
//}
//void Test(char* testName, int* preorder, int* inorder, int length)
//{
//    if(testName != NULL)
//        printf("%s begins:\n", testName);
//
//    printf("The preorder sequence is: ");
//    for(int i = 0; i < length; ++ i)
//        printf("%d ", preorder[i]);
//    printf("\n");
//
//    printf("The inorder sequence is: ");
//    for(int i = 0; i < length; ++ i)
//        printf("%d ", inorder[i]);
//    printf("\n");
//
//    try
//    {
//        BinaryTreeNode* root = CreateBinaryTree(preorder, inorder, length);
//        PrintTree(root);
//
//        DestroyTree(root);
//    }
//    catch(std::exception& exception)
//    {
//        printf("Invalid Input.\n");
//    }
//}
//
//// 普通二叉树
////              1
////           /     \
////          2       3  
////         /       / \
////        4       5   6
////         \         /
////          7       8
//void Test1()
//{
//    const int length = 8;
//    int preorder[length] = {1, 2, 4, 7, 3, 5, 6, 8};
//    int inorder[length] = {4, 7, 2, 1, 5, 3, 8, 6};
//
//    Test("Test1", preorder, inorder, length);
//}
//
//// 所有结点都没有右子结点
////            1
////           / 
////          2   
////         / 
////        3 
////       /
////      4
////     /
////    5
//void Test2()
//{
//    const int length = 5;
//    int preorder[length] = {1, 2, 3, 4, 5};
//    int inorder[length] = {5, 4, 3, 2, 1};
//
//    Test("Test2", preorder, inorder, length);
//}
//
//// 所有结点都没有左子结点
////            1
////             \ 
////              2   
////               \ 
////                3 
////                 \
////                  4
////                   \
////                    5
//void Test3()
//{
//    const int length = 5;
//    int preorder[length] = {1, 2, 3, 4, 5};
//    int inorder[length] = {1, 2, 3, 4, 5};
//
//    Test("Test3", preorder, inorder, length);
//}
//
//// 树中只有一个结点
//void Test4()
//{
//    const int length = 1;
//    int preorder[length] = {1};
//    int inorder[length] = {1};
//
//    Test("Test4", preorder, inorder, length);
//}
//
//// 完全二叉树
////              1
////           /     \
////          2       3  
////         / \     / \
////        4   5   6   7
//void Test5()
//{
//    const int length = 7;
//    int preorder[length] = {1, 2, 4, 5, 3, 6, 7};
//    int inorder[length] = {4, 2, 5, 1, 6, 3, 7};
//
//    Test("Test5", preorder, inorder, length);
//}
//
//// 输入空指针
//void Test6()
//{
//    Test("Test6", NULL, NULL, 0);
//}
//
//// 输入的两个序列不匹配
//void Test7()
//{
//    const int length = 7;
//    int preorder[length] = {1, 2, 4, 5, 3, 6, 7};
//    int inorder[length] = {4, 2, 8, 1, 6, 3, 7};
//
//    Test("Test7: for unmatched input", preorder, inorder, length);
//}
//
//int main()
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
//
//
//
////int main()
////{
////
////
////	system("pause");
////	return 0;
////}