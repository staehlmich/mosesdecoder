/*
 * SkeletonStatefulFF.h
 *
 *  Created on: 27 Oct 2015
 *      Author: hieu
 */

#pragma once

#include "StatelessFeatureFunction.h"

class SkeletonStatelessFF : public StatelessFeatureFunction
{
public:
	SkeletonStatelessFF(size_t startInd, const std::string &line);
	virtual ~SkeletonStatelessFF();
};
