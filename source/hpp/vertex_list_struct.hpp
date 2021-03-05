#pragma once
#include<vertex.hpp>

namespace data
{
    struct vertex_list_struct
    {
        bool freezed_stat = false;
        std::list<vertex> list_of_vertex;
    };
}