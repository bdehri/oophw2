#include "AdderRemover.h"

Node::Node(int number)
{
	this->number_ = number;
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
	std::cout << std::endl << std::endl << this->name_ << " | NodeCount:" << this->nodeCount_ << std::endl;
	std::cout << " -----" << std::endl;
	if (nodeCount_ == 0)
	{
		std::cout << " There is no element to print." << std::endl;
	}
	while (traverse) {
		std::cout << "\n" << traverse->number_ ;
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
	this->nodeCount_ = 0;
}

void AdderRemover::traverse()
{
	std::cout << std::endl << std::endl << this->name_ << " | NodeCount:" << this->nodeCount_ << std::endl;
	std::cout << " -----" << std::endl;
	if (nodeCount_ == 0)
	{
		std::cout << " There is no element to print." << std::endl;
	}
	for (int i = 0; i < this->nodeCount_; i++)
	{
		std::cout << std::endl << traverser_->next();
	}
}