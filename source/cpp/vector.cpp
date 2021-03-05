#pragma once
#include <vector.hpp>

    math::vector::vector(const double& len_x = 0.0, const double& len_y = 0.0, const double& len_z = 0.0) : len{ len_x,len_y,len_z }
    {
    }

    math::vector::~vector()
    {
    }

    void math::vector::set_length(const double& len_x, const double& len_y, const double& len_z)
    {
        len[0] = len_x;
        len[1] = len_y;
        len[2] = len_z;
    }

    double math::vector::get_distance(const vector& head, const vector& tail)
    {
        double v[3]
        {
            head.len[0] - tail.len[0],
            head.len[1] - tail.len[1],
            head.len[2] - tail.len[2]
        };
        return sqrt(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
    }

    math::vector math::vector::operator+(const vector& V)
    {
        return vector(this->len[0] + V.len[0], this->len[1] + V.len[1], this->len[2] + V.len[2]);
    }

    math::vector math::vector::operator-(const vector& V)
    {
        return vector(this->len[0] - V.len[0], this->len[1] - V.len[1], this->len[2] - V.len[2]);
    }

    math::vector math::vector::operator*(const double& S)
    {
        return vector(this->len[0] * S, this->len[1] * S, this->len[2] * S);
    }

    math::vector math::vector::operator/(const double& S)
    {
        return vector(this->len[0] / S, this->len[1] / S, this->len[2] / S);
    }

    double math::vector::dot_product(const vector& first,const vector& second)
    {
        return (first.len[0] * second.len[0] + first.len[1] * second.len[1] + first.len[2] * second.len[2]);
    }

    math::vector math::vector::cross_product(const vector& first, const vector& second)
    {
        return vector(
            first.len[1] * second.len[2] - first.len[2] * second.len[1],
            first.len[2] * second.len[0] - first.len[0] * second.len[2],
            first.len[0] * second.len[1] - first.len[1] * second.len[0]);
    }
