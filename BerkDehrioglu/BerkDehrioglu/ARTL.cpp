#include "ARTL.h"



ARTL::ARTL(Node* current)
{
	this->current_ = current;
}


ARTL::~ARTL()
{
}

bool ARTL::hasNode(void)
{
	if (current_ != nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int ARTL::next(void)
{
	int number = current_->number_;
	current_ = current_->prev_;
	return number;
}