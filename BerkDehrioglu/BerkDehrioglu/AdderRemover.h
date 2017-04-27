#pragma once
#include <string>
#include <iostream>

class Node
{	
public:
	int number_;
	Node* next_;
	Node* prev_;
	Node(int number);
	~Node();

};

class ARTraverser
{
protected:
	Node* current_;
public:
	ARTraverser();
	~ARTraverser();
	virtual bool hasNode(void) = 0;
	virtual int next(void) = 0;
};


class AdderRemover
{
protected:
	Node *head_;
	Node *tail_;
	std::string name_;
	int nodeCount_;
	ARTraverser* traverser_;
public:
	AdderRemover();
	~AdderRemover();
	virtual void add(int number) = 0;
	virtual void remove(void) = 0;
	virtual void setTraverser(void) = 0;
	void display(void);
	void removeAll(void);
	void traverse(void);
};

