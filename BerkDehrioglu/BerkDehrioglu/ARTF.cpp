#include "ARTF.h"



ARTF::ARTF(Node* current)
{
	this->current_ = current;
}


ARTF::~ARTF()
{

}

bool ARTF::hasNode(void)
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
int ARTF::next(void)
{
	int number = current_->number_;
	current_ = current_->next_;
	return number;
}
