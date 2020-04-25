#pragma once

#include <array>

namespace my {
    class Vec3f {
        public:
            Vec3f(float x=0, float y=0, float z=0);

            std::array<float, 3> vec3f() const;
            void set_vec3f(std::array<float, 3> vec3f);
            float operator[] (int index) const;
            float& operator[] (int index);
            bool operator== (Vec3f vec3f);
            bool operator!= (Vec3f vec3f);
            Vec3f& operator+= (Vec3f vec3f);
            Vec3f operator+ (Vec3f vec3f);
            Vec3f& operator- ();
        
        private:
            std::array<float, 3> vec3f_;

    };

    float dot(Vec3f vec3fA, Vec3f vec3fB);
}