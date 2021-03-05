#pragma once
#include <vertex_list.hpp>


data::vertex_list::vertex_list()
{
}

data::vertex_list::~vertex_list()
{
}

size_t data::vertex_list::get_size()
{
	return data.list_of_vertex.size();
}

void data::vertex_list::push_back(vertex& v)
{
	data.list_of_vertex.emplace_back(v);
}

void data::vertex_list::clear()
{
	data.list_of_vertex.clear();
}

std::list<vertex>& data::vertex_list::get_data_reference()
{
	return data.list_of_vertex;
}

void data::vertex_list::set_freezed_stat(const bool& stat)
{
	data.freezed_stat = stat;
}

bool data::vertex_list::get_freezed_stat()
{
	return data.freezed_stat;
}