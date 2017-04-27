#pragma once
#include "AdderRemover.h"
#include "ARTL.h"
class LAFR :
	public AdderRemover
{
public:
	LAFR();
	~LAFR();
	void add(int number);
	void remove(void);
	void setTraverser(void);
};

