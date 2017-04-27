#include "FALR.h"



FALR::FALR()
{
	this->name_ = "FALR";
}


FALR::~FALR()
{
}

void FALR::add(int number)
{
	if (head_ == nullptr)/*first node being added*/
	{
		Node *newnode = new Node(number);
		this->tail_ = newnode;
		head_ = tail_;
	}
	else
	{
		Node *newnode = new Node(number);
		head_->prev_ = newnode;
		newnode->next_ = head_;
		head_ = newnode;
	}
	this->nodeCount_++;

}

void FALR::remove()
{
	if (head_ != nullptr)
	{
		Node* temp = tail_;
		if (tail_->prev_ != nullptr)
		{
			tail_->prev_->next_ = nullptr;
			tail_ = tail_->prev_;
		}
		delete temp;
	}
	this->nodeCount_--;
}

void FALR::setTraverser()
{
	this->traverser_ = new ARTF(this->head_);
}