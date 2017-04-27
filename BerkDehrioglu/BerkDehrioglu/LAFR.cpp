#include "LAFR.h"



LAFR::LAFR()
{
	this->name_ = "LAFR";
}


LAFR::~LAFR()
{
}

void LAFR::add(int number)
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

void LAFR::remove()
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

void LAFR::setTraverser()
{
	this->traverser_ = new ARTL(this->tail_);
}