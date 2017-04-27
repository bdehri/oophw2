#pragma once
#include "AdderRemover.h"
class ARTF :
	public ARTraverser
{
public:
	ARTF(Node* current);
	~ARTF();
	bool hasNode(void);
	int next(void);
};

