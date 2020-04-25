#pragma once

#include <array>

namespace my {
    class Vec3f {
        public:
            Vec3f(float x=0, float y=0, float z=0);

            std::array<float, 3> vec3f() const;
            void set_vec3f(std::array<float, 3> vec3f);
        
        private:
            std::array<float, 3> vec3f_;

    };
}