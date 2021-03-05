#pragma once
#include<vertex.hpp>
#include<vertex_list_struct.hpp>

namespace data
{
    class vertex_list
    {
    public:
        vertex_list();
        virtual ~vertex_list();
        size_t get_size();
        void push_back(vertex&);
        void clear();
        std::list<vertex>& get_data_reference();
        void set_freezed_stat(const bool&);
        bool get_freezed_stat();

    private:
        vertex_list_struct data;
    };
}