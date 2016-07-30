#ifndef PARETOMODEL_H
#define PARETOMODEL_H

#include "ProbModel.hpp"

class ParetoModel: public ProbModel {
protected:
	double min, k;
	
public:
	ParetoModel(double k, double min): 
		min(min), k(k) {}
	
	inline max_size_t GenRate() {
		return (max_size_t)(min / pow(rand() / (double)(RAND_MAX), 1 / k));
	}
};

#endif
