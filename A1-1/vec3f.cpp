#include "vec3f.h"

using namespace my;

Vec3f::Vec3f(float x, float y, float z)
    : vec3f_({x, y, z})
{}

std::array<float, 3>
Vec3f::vec3f() const
{
    return vec3f_;
}

void
Vec3f::set_vec3f(std::array<float, 3> vec3f)
{
    vec3f_ = vec3f;
}

float
Vec3f::operator[] (int index) const
{
    return vec3f_[index];
}

float&
Vec3f::operator[] (int index)
{
    return vec3f_[index];
}

bool
Vec3f::operator== (Vec3f vec3f)
{
    return vec3f_[0] == vec3f[0] && vec3f_[1] == vec3f[1] && vec3f_[2] == vec3f[2];
}

bool
Vec3f::operator!= (Vec3f vec3f)
{
    return !(*this == vec3f);
}

Vec3f&
Vec3f::operator+= (Vec3f vec3f) {
    vec3f_[0] += vec3f[0];
    vec3f_[1] += vec3f[1];
    vec3f_[2] += vec3f[2];
    return *this; 
}

Vec3f
Vec3f::operator+ (Vec3f vec3f)
{
    Vec3f temp(*this);
    temp += vec3f;
    return temp;
}

Vec3f&
Vec3f::operator- ()
{
    vec3f_[0] = -vec3f_[0];
    vec3f_[1] = -vec3f_[1];
    vec3f_[2] = -vec3f_[2];
    return *this;
}

float
dot(Vec3f vec3fA, Vec3f vec3fB)
{
    return vec3fA[0] * vec3fB[0] + vec3fA[1] * vec3fB[1] + vec3fA[2] * vec3fB[2];
}