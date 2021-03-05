#pragma once
#include <vertex_list.hpp>
#include<b_spline_struct.hpp>
namespace curve
{
	class b_spline
	{
	public:
		b_spline();
		b_spline(data::vertex_list&);
		~b_spline();
		void set_order(const int& size_t);
		int get_order();
		//GET_MACRO(knot_vector, size_t);
		void set_vertex_list(data::vertex_list&);
		void calculate();
	private:
		b_spline_struct data;

		void generate_knot_vector();
	};
}