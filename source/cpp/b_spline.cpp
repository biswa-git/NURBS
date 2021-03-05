#pragma once
#include <b_spline.hpp>

curve::b_spline::b_spline()
{
}

curve::b_spline::b_spline(data::vertex_list& vertex)
{
	set_vertex_list(vertex);
}

curve::b_spline::~b_spline()
{
}

void curve::b_spline::set_vertex_list(data::vertex_list& list_of_vertex)
{
	auto& r_vertex_list = list_of_vertex.get_data_reference();
	for (auto it : r_vertex_list)
	{
		this->data.vertex.push_back(it);
	}
	this->data.vertex_list_freezed_stat = true;
}

void curve::b_spline::calculate()
{
	generate_knot_vector();
}

void curve::b_spline::generate_knot_vector()
{
	int order = data.order;
	int vertex_count = data.vertex.get_size();

	int knot_vector_size = 0;
	if (data.vertex_list_freezed_stat)
	{
		knot_vector_size = order + vertex_count + 1;
	}

	data.knot_vector.reserve(knot_vector_size);
	for (int i = 0; i < order; i++)
	{
		data.knot_vector.push_back(0.0);
	}

	for (int i = order; i < vertex_count+1; i++)
	{
		data.knot_vector.push_back(double(i) - double(order) + 1.0);
	}

	for (int i = vertex_count+1; i < knot_vector_size; i++)
	{
		data.knot_vector.push_back(double(vertex_count) - double(order) + 2.0);
	}
}