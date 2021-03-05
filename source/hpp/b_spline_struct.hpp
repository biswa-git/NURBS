#pragma once
#include <base.h>

namespace curve
{
	struct b_spline_struct
	{
		size_t order = 3; // Default order is k = 3
		bool vertex_list_freezed_stat = false;
		data::vertex_list vertex;
		std::vector<double> knot_vector;
	};
}