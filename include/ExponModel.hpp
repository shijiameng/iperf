#ifndef EXPONMODEL_H
#define EXPONMODEL_H

#include "ProbModel.hpp"

class ExponModel: public ProbModel {

protected:
	double lambda;
	
public:
	ExponModel(double lambda): lambda(lambda) {}
	inline max_size_t GenRate() {
		return (max_size_t)((1 / lambda) * log(1 / (rand() / (double)(RAND_MAX))));
	}
};

#endif
