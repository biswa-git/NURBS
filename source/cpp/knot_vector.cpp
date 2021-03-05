#pragma once
#include <knot_vector.hpp>

curve::knot_vector::knot_vector()
{
}

curve::knot_vector::knot_vector(std::vector<double>& vector)
{
	SetVector(vector);
}

curve::knot_vector::~knot_vector()
{
}

void curve::knot_vector::SetVector(std::vector<double>& vector)
{
	for (auto it : vector)
	{
		data.vector.emplace_back(it);
	}
	data.freezed_stat = true;
}

void curve::knot_vector::Normalize()
{

}