#pragma once
#include <base.h>
#include <knot_vector_struct.hpp>

namespace curve
{
	class knot_vector
	{
	public:
		knot_vector();
		knot_vector(std::vector<double>&);
		~knot_vector();
		void SetVector(std::vector<double>&);
		void Normalize();

	private:
		knot_vector_data data;
	};
}