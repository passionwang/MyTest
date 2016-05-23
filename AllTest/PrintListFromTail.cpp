//#include<iostream>
//#include<stack>
//
//using namespace std;
//
//struct ListNode
//{
//	int m_nKey;
//	ListNode* m_pNext;
//};
//
//void CreateList(ListNode** pHead)
//{
//	if(NULL == pHead) return ;
//	*pHead = new ListNode;
//	(*pHead)->m_nKey = 0;
//	(*pHead)->m_pNext = NULL;
//	ListNode* pNode = *pHead;
//	ListNode* pTemp = NULL;
//	for(int i=1;i<10;i++)
//	{
//		pTemp = new ListNode;
//		pTemp->m_nKey = i;
//		pTemp->m_pNext = NULL;
//		pNode->m_pNext = pTemp;
//		pNode = pNode->m_pNext;
//	}
//}
//
//void PrintList(ListNode* pHead)
//{
//	if(NULL == pHead) return ;
//
//	stack<ListNode*> Stack;
//
//	while(NULL != pHead)
//	{
//		Stack.push(pHead);
//		pHead = pHead->m_pNext;
//	}
//
//	while(false == Stack.empty())
//	{
//		cout<<Stack.top()->m_nKey<<endl;
//		Stack.pop();
//	}
//}
//
//void PrintList2(ListNode* pHead)
//{
//	if(NULL == pHead) return ;
//	PrintList2(pHead->m_pNext);
//	cout<<pHead->m_nKey<<endl;
//}
//
//int main()
//{
//	ListNode* pHead = NULL;
//	CreateList(&pHead);
//
//	PrintList(pHead);
//
//	system("pause");
//	return 0;
//}