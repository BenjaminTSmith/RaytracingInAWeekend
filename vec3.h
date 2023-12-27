#ifndef RAYTRACINGINAWEEKEND_VEC3_H
#define RAYTRACINGINAWEEKEND_VEC3_H

class vec3 {
public:
    double e[3];

    vec3() : e{0, 0, 0} {}
    vec3(double e0, double e1, double e2) : e{e0, e1, e2} {}

    double x() const;
    double y() const;
    double z() const;

    vec3 operator-() const;
    double operator[](int i) const;
    double& operator[](int i);

    vec3& operator+=(const vec3 &vector);
    vec3& operator*=(double t);
    vec3& operator/=(double t);

    double length() const;
    double length_squared() const;
};


#endif //RAYTRACINGINAWEEKEND_VEC3_H
