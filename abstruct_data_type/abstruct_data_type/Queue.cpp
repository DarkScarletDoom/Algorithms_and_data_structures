#include "Queue.h"

Queue::Node::Node()
{
	data = 0;
	next = NULL;
}

bool Queue::isEmpty()
{
	return lenght == 0 ? true : false;
}

int Queue::size()
{
	return lenght;
}

void Queue::bubbleSort(Queue queue)
{
	int len = queue.lenght;

	/*for (int i = 0; i < len; i++) {

	}*/
}

void Queue::enQueue(int data)
{
	Node* NewNode = new Node();
	NewNode->data = data;
	NewNode->next = NULL;
	if (lenght != 0) {
		rear->next = NewNode;
		rear = NewNode;
	}
	else {
		rear = NewNode;
		head = NewNode;
	}
	lenght++;
}

int Queue::deQueue()
{
	if (!isEmpty()) {
		int data = head->data;
		Node* oldNode = head;
		if (rear != head) {
			head = head->next;
			free(oldNode);
			return data;
		}
		else {
			head = NULL;
			rear = NULL;
			return data;
		}
		lenght--;
	}
	else {
		return NULL;
	}
}