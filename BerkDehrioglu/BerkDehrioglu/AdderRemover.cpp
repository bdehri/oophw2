#include "AdderRemover.h"

Node::Node(int number)
{
	this->number_;
	this->next_ =  nullptr ;
	this->prev_ = nullptr;
}

Node::~Node()
{}

ARTraverser::ARTraverser()
{
	
}


ARTraverser::~ARTraverser()
{
}

AdderRemover::AdderRemover()
{
	this->traverser_ = nullptr;
	this->head_ = nullptr;
	this->tail_ = nullptr;
	this->nodeCount_ = 0;
}

AdderRemover::~AdderRemover()
{
}

void AdderRemover::display()
{
	
	Node* traverse;
	traverse = this->head_;
	std::cout << this->name_ << " | NodeCount:" << this->nodeCount_ << std::endl;
	std::cout << " -----" << std::endl;
	if (nodeCount_ == 0)
	{
		std::cout << " There is no element to print." << std::endl;
	}
	while (traverse) {
		std::cout << "\n" << traverse->number_ << std::endl;
		traverse = traverse->next_;
	}
}

void AdderRemover::removeAll()
{
	Node* traverse;
	traverse = this->head_;
	while (traverse != nullptr)
	{
		head_ = head_->next_;
		delete traverse;
		traverse = head_;
	}
}

void AdderRemover::traverse()
{

}