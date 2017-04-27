#pragma once
#include "AdderRemover.h"
#include "ARTF.h"
class FAFR :
	public AdderRemover
{
public:
	FAFR();
	~FAFR();
	void add(int number);
	void remove(void);
	void setTraverser(void);

};

