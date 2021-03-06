#include "FAFR.h"



FAFR::FAFR()
{
	this->name_ = "FAFR";
}


FAFR::~FAFR()
{
}

void FAFR::add(int number)
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

void FAFR::remove()
{
	if (head_ != nullptr)
	{
		Node* temp = head_;
		if (head_->next_ != nullptr)
		{
			head_->next_->prev_ = nullptr;
			head_ = head_->next_;
		}
		delete temp;
	}
	this->nodeCount_--;
}

void FAFR::setTraverser()
{
	this->traverser_ = new ARTF(this->head_);
}