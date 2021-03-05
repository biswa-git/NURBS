#include <b_spline.hpp>

int main()
{
	data::vertex_list vert_lst;
	vertex v1(0, 0, 0), v2(1, 0, 0), v3(1, 1, 0), v4(6, 0, 0);
	vert_lst.push_back(v1);
	vert_lst.push_back(v2);
	vert_lst.push_back(v3);
	vert_lst.push_back(v4);
	vert_lst.set_freezed_stat(true);

	curve::b_spline bsp(vert_lst);
	bsp.calculate();

}