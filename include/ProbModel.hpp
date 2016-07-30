#ifndef PROBMODEL_H
#define PROBMODEL_H

#include "headers.h"
#include "util.h"

class ProbModel {
public:
	virtual ~ProbModel() {}
	virtual max_size_t GenRate() = 0;
};

#endif // PROBMODEL_H

