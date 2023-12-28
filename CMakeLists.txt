cmake_minimum_required(VERSION 3.27)
project(RaytracingInAWeekend)

set(CMAKE_CXX_STANDARD 14)

add_executable(RaytracingInAWeekend
        main.cpp
        vec3.cpp
        vec3.h
        color.h
        ray.h
        hittable.h
        sphere.h
        hittable_list.h
        rtweekend.h
        interval.h)
