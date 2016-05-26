//#include<iostream>
//using namespace std;
//
//struct ListNode
//{
//	int m_nValue;
//	ListNode* m_pNext;
//};
//
//ListNode* FindKthToTail(ListNode* pHead,int k)
//{
//	if(NULL == pHead || k<=0) return NULL;
//
//	ListNode* pNode = pHead;
//	ListNode* pNode1 = pHead;
//	ListNode* pNode2 = pHead;
//	for(int i=0;i<k-1;++i)
//	{
//		if(NULL != pNode->m_pNext)
//		{
//			pNode = pNode->m_pNext;
//			pNode2 = pNode;
//		}
//		else
//		{
//			return NULL;
//		}
//	}
//	while(NULL != pNode2->m_pNext)
//	{
//		pNode2 = pNode2->m_pNext;
//		pNode1 =pNode1->m_pNext;
//	}
//	return pNode1;
//}
//ListNode* CreateListNode(int value)
//{
//    ListNode* pNode = new ListNode();
//    pNode->m_nValue = value;
//    pNode->m_pNext = NULL;
//
//    return pNode;
//}
//
//void ConnectListNodes(ListNode* pCurrent, ListNode* pNext)
//{
//    if(pCurrent == NULL)
//    {
//        printf("Error to connect two nodes.\n");
//        exit(1);
//    }
//
//    pCurrent->m_pNext = pNext;
//}
//
//void PrintListNode(ListNode* pNode)
//{ 
//    if(pNode == NULL)
//    {
//        printf("The node is NULL\n");
//    }
//    else
//    {
//        printf("The key in node is %d.\n", pNode->m_nValue);
//    }
//}
//
//void PrintList(ListNode* pHead)
//{
//    printf("PrintList starts.\n");
//    
//    ListNode* pNode = pHead;
//    while(pNode != NULL)
//    {
//        printf("%d\t", pNode->m_nValue);
//        pNode = pNode->m_pNext;
//    }
//
//    printf("\nPrintList ends.\n");
//}
//
//void DestroyList(ListNode* pHead)
//{
//    ListNode* pNode = pHead;
//    while(pNode != NULL)
//    {
//        pHead = pHead->m_pNext;
//        delete pNode;
//        pNode = pHead;
//    }
//}
//// ====================测试代码====================
//// 测试要找的结点在链表中间
//void Test1()
//{
//    printf("=====Test1 starts:=====\n");
//    ListNode* pNode1 = CreateListNode(1);
//    ListNode* pNode2 = CreateListNode(2);
//    ListNode* pNode3 = CreateListNode(3);
//    ListNode* pNode4 = CreateListNode(4);
//    ListNode* pNode5 = CreateListNode(5);
//
//    ConnectListNodes(pNode1, pNode2);
//    ConnectListNodes(pNode2, pNode3);
//    ConnectListNodes(pNode3, pNode4);
//    ConnectListNodes(pNode4, pNode5);
//
//    printf("expected result: 4.\n");
//    ListNode* pNode = FindKthToTail(pNode1, 2);
//    PrintListNode(pNode);
//
//    DestroyList(pNode1);
//}
//
//// 测试要找的结点是链表的尾结点
//void Test2()
//{
//    printf("=====Test2 starts:=====\n");
//    ListNode* pNode1 = CreateListNode(1);
//    ListNode* pNode2 = CreateListNode(2);
//    ListNode* pNode3 = CreateListNode(3);
//    ListNode* pNode4 = CreateListNode(4);
//    ListNode* pNode5 = CreateListNode(5);
//
//    ConnectListNodes(pNode1, pNode2);
//    ConnectListNodes(pNode2, pNode3);
//    ConnectListNodes(pNode3, pNode4);
//    ConnectListNodes(pNode4, pNode5);
//
//    printf("expected result: 5.\n");
//    ListNode* pNode = FindKthToTail(pNode1, 1);
//    PrintListNode(pNode);
//
//    DestroyList(pNode1);
//}
//
//// 测试要找的结点是链表的头结点
//void Test3()
//{
//    printf("=====Test3 starts:=====\n");
//    ListNode* pNode1 = CreateListNode(1);
//    ListNode* pNode2 = CreateListNode(2);
//    ListNode* pNode3 = CreateListNode(3);
//    ListNode* pNode4 = CreateListNode(4);
//    ListNode* pNode5 = CreateListNode(5);
//
//    ConnectListNodes(pNode1, pNode2);
//    ConnectListNodes(pNode2, pNode3);
//    ConnectListNodes(pNode3, pNode4);
//    ConnectListNodes(pNode4, pNode5);
//
//    printf("expected result: 1.\n");
//    ListNode* pNode = FindKthToTail(pNode1, 5);
//    PrintListNode(pNode);
//
//    DestroyList(pNode1);
//}
//
//// 测试空链表
//void Test4()
//{
//    printf("=====Test4 starts:=====\n");
//    printf("expected result: NULL.\n");
//    ListNode* pNode = FindKthToTail(NULL, 100);
//    PrintListNode(pNode);
//}
//
//// 测试输入的第二个参数大于链表的结点总数
//void Test5()
//{
//    printf("=====Test5 starts:=====\n");
//    ListNode* pNode1 = CreateListNode(1);
//    ListNode* pNode2 = CreateListNode(2);
//    ListNode* pNode3 = CreateListNode(3);
//    ListNode* pNode4 = CreateListNode(4);
//    ListNode* pNode5 = CreateListNode(5);
//
//    ConnectListNodes(pNode1, pNode2);
//    ConnectListNodes(pNode2, pNode3);
//    ConnectListNodes(pNode3, pNode4);
//    ConnectListNodes(pNode4, pNode5);
//
//    printf("expected result: NULL.\n");
//    ListNode* pNode = FindKthToTail(pNode1, 6);
//    PrintListNode(pNode);
//
//    DestroyList(pNode1);
//}
//
//// 测试输入的第二个参数为0
//void Test6()
//{
//    printf("=====Test6 starts:=====\n");
//    ListNode* pNode1 = CreateListNode(1);
//    ListNode* pNode2 = CreateListNode(2);
//    ListNode* pNode3 = CreateListNode(3);
//    ListNode* pNode4 = CreateListNode(4);
//    ListNode* pNode5 = CreateListNode(5);
//
//    ConnectListNodes(pNode1, pNode2);
//    ConnectListNodes(pNode2, pNode3);
//    ConnectListNodes(pNode3, pNode4);
//    ConnectListNodes(pNode4, pNode5);
//
//    printf("expected result: NULL.\n");
//    ListNode* pNode = FindKthToTail(pNode1, 0);
//    PrintListNode(pNode);
//
//    DestroyList(pNode1);
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
//
////
////int main()
////{
////
////
////	system("pause");
////	return 0;
////}