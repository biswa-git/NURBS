#pragma once
#include <base.h>

namespace curve
{
	struct knot_vector_data
	{
		bool freezed_stat = false;
		std::vector<double> vector;
	};
}