#include<iostream>
#include<stack>
using namespace std;

template<typename T>
class CQueue
{
public:
	CQueue(){}
	~CQueue(){}

	void appendTail(const T& node);
	T deleteHead();
private:
	stack<T> stack1;
	stack<T> stack2;
};

template<typename T>
void CQueue<T>::appendTail(const T& node)
{
	stack1.push(node);
}
template<typename T>
T CQueue<T>::deleteHead()
{
	if(stack2.empty())
	{
		while(!stack1.empty())
		{
			T& temp = stack1.top();
			stack1.pop();
			stack2.push(temp);
		}
	}

	if(stack2.empty())
		throw exception("Invalid Input.");
	T temp = stack2.top();
	stack2.pop();
	return temp;
}

void Test(char actual, char expected)
{
    if(actual == expected)
        printf("Test passed.\n");
    else
        printf("Test failed.\n");
}

int main()
{
    CQueue<char> queue;

    queue.appendTail('a');
    queue.appendTail('b');
    queue.appendTail('c');

    char head = queue.deleteHead();
    Test(head, 'a');

    head = queue.deleteHead();
    Test(head, 'b');

    queue.appendTail('d');
    head = queue.deleteHead();
    Test(head, 'c');

    queue.appendTail('e');
    head = queue.deleteHead();
    Test(head, 'd');

    head = queue.deleteHead();
    Test(head, 'e');


	system("pause");
    return 0;
}
