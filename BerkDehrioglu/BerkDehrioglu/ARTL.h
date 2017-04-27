#pragma once
#include "AdderRemover.h"
class ARTL :
	public ARTraverser
{
public:
	ARTL(Node* current);
	~ARTL();
	bool hasNode(void);
	int next(void);
};

