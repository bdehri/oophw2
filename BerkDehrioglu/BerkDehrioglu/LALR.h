#pragma once
#include "AdderRemover.h"
#include "ARTL.h"
class LALR :
	public AdderRemover
{
public:
	LALR();
	~LALR();
	void add(int number);
	void remove(void);
	void setTraverser(void);
};

