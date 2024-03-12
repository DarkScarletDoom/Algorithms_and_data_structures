#pragma once
#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <ctime>
#include <cstdlib>

class Queue
{
private:
	struct Node{
		Node* next;
		int data;
		Node();
	};

	Node* rear;
	Node* head;

	int lenght = 0;
public:
	Queue() {
		rear = NULL;
		head = NULL;
	}
	void enQueue(int data);
	int deQueue();
	bool isEmpty();
	int size();
	void bubbleSort(Queue queue);
};