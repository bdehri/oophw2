#pragma once
#include "AdderRemover.h"
#include "ARTF.h"
class FALR :
	public AdderRemover
{
public:
	FALR();
	~FALR();
	void add(int number);
	void remove(void);
	void setTraverser(void);
};

