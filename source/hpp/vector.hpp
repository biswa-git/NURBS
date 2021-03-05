#pragma once
#include <base.h>

namespace math
{
    class vector
    {
    public:
        vector(const double&, const double&, const double&);
        virtual ~vector();
        void set_length(const double&, const double&, const double&);
        static double get_distance(const vector&, const vector&);

        vector operator+(const vector&);
        vector operator-(const vector&);
        vector operator*(const double&);
        vector operator/(const double&);

        static double dot_product(const vector& first, const vector& second);
        static vector cross_product(const vector& first, const vector& second);

    private:
        double len[3];
    };
}