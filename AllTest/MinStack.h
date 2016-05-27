#pragma once 
#ifndef __INCLUDE_MINSTACK_H__
#define __INCLUDE_MINSTACK_H__
#include<stack>
#include <assert.h>
using namespace std;
template <typename T>
class MyStack
{
public:
	void push(T Node);
	void pop();
	T& top();
	T& min();
	bool empty();
	size_t size();
private:
	stack<T> stackData;
	stack<T> stackMin;
};

template <typename T> 
void MyStack<T>::push(T Node)
{
	stackData.push(Node);
	if(stackMin.size() == 0 || stackMin.top() > Node)
		stackMin.push(Node);
	else
	{
		T& temp = stackMin.top();
		stackMin.push(temp);
	}
}
template<typename T>
void MyStack<T>::pop()
{
	if(stackData.size()>0)
	{
		stackData.pop();
		stackMin.pop();
	}
}
template<typename T>
T& MyStack<T>::top()
{
	if(stackData.size()<=0) return NULL;
	T& Node = stackData();
	return Node;
}
template <typename T>
T& MyStack<T>::min()
{
	assert(stackMin.size() > 0);
	T& Node = stackMin.top();
	return Node;
}
template<typename T>
bool MyStack<T>::empty()
{
	if(stackData.size()>0)
	{
		return false;
	}
	return true;
}
template<typename T>
size_t MyStack<T>::size()
{
	return stackData.size();
}
#endif //__INCLUDE_MINSTACK_H__