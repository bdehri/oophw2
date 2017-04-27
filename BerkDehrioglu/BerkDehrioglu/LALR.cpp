#include "LALR.h"



LALR::LALR()
{
	this->name_ = "LALR";
}


LALR::~LALR()
{
}

void LALR::add(int number)
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
		tail_->next_ = newnode;
		newnode->prev_ = tail_;
		tail_ = newnode;
	}
	this->nodeCount_++;

}

void LALR::remove()
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

void LALR::setTraverser()
{
	this->traverser_ = new ARTL(this->tail_);
}