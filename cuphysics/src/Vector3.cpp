/**
 * @file core.cu
 * @author Sam Sui
 * @brief Header file to define 3D vectors and their operations
 * @version 0.1
 * @date 2023-09-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "cuphysics/Vector3.h"

namespace cuphysics {

Vector3::Vector3() {
    memset(components, 0, 3*sizeof(f32));
}

Vector3::Vector3(const f32 x, const f32 y, const f32 z) {
    components[0] = x;
    components[1] = y;
    components[2] = z;
}

Vector3::~Vector3() {
    ;
}

void Vector3::clear() {
    memset(components, 0, 3*sizeof(f32));
}

// Vector Component Getters
f32 Vector3::x() const {
    return components[0];
}
f32 Vector3::y() const {
    return components[1];
}
f32 Vector3::z() const {
    return components[2];
}

// Vector Component Setters
void Vector3::x(const f32 value) {
    components[0] = value;
}
void Vector3::y(const f32 value) {
    components[1] = value;
}
void Vector3::z(const f32 value) {
    components[2] = value;
}

f32 Vector3::magnitude() const {
    return sqrtf(
        components[0]*components[0]+
        components[1]*components[1]+
        components[2]*components[2]
    );
}

f32 Vector3::square_magnitude() const {
    return (
        components[0]*components[0]+
        components[1]*components[1]+
        components[2]*components[2]
    );
}

void Vector3::invert() {
    components[0] = -components[0];
    components[1] = -components[1];
    components[2] = -components[2];
}

void Vector3::normalize() {
    f32 mag = magnitude();
    if (mag > 0) {
        (*this) *= 1.0f/mag;
    }
}

void Vector3::operator*=(const f32 scalar) {
    components[0] *= scalar;
    components[1] *= scalar;
    components[2] *= scalar;
}

Vector3 Vector3::operator*(const f32 scalar) const {
    return Vector3(components[0]*scalar, components[1]*scalar, components[2]*scalar);
}

void Vector3::operator+=(const Vector3& rhs) {
    components[0] += rhs.x();
    components[1] += rhs.y();
    components[2] += rhs.z();
}

Vector3 Vector3::operator+(const Vector3& rhs) const {
    return Vector3(components[0]+rhs.x(), components[1]+rhs.y(), components[2]+rhs.z());
}

void Vector3::operator-= (const Vector3& rhs) {
    components[0] -= rhs.x();
    components[1] -= rhs.y();
    components[2] -= rhs.z();
}

Vector3 Vector3::operator-(const Vector3& rhs) const {
    return Vector3(components[0]-rhs.x(), components[1]-rhs.y(), components[2]-rhs.z());
}

void Vector3::add_scaled_vector(const Vector3& rhs, f32 scalar) {
    components[0] += rhs.x() * scalar;
    components[1] += rhs.y() * scalar;
    components[2] += rhs.z() * scalar;
}

/* Element-wise Product */

Vector3 Vector3::component_product(const Vector3& rhs) const {
    return Vector3(
        components[0] * rhs.x(),
        components[1] * rhs.y(),
        components[2] * rhs.z()
    );
}

Vector3 Vector3::hadamard_product(const Vector3& rhs) const {
    return Vector3(
        components[0] * rhs.x(),
        components[1] * rhs.y(),
        components[2] * rhs.z()
    );
}

void Vector3::operator*=(const Vector3& rhs) {
    components[0] *= rhs.x();
    components[1] *= rhs.y();
    components[2] *= rhs.z();
}

Vector3 Vector3::operator*(const Vector3& rhs) const {
    return Vector3(
        components[0] * rhs.x(),
        components[1] * rhs.y(),
        components[2] * rhs.z()
    );
}

/* Scalar Product */

f32 Vector3::scalar_product(const Vector3& rhs) const {
    return 
        components[0] * rhs.x() +
        components[1] * rhs.y() +
        components[2] * rhs.z();
}

f32 Vector3::dot_product(const Vector3& rhs) const {
    return 
        components[0] * rhs.x() +
        components[1] * rhs.y() +
        components[2] * rhs.z();
}

/* Outer Product */

Vector3 Vector3::vector_product(const Vector3& rhs) const {
    return Vector3(
        components[1]*rhs.z() - components[2]*rhs.y(),
        components[2]*rhs.x() - components[0]*rhs.z(),
        components[0]*rhs.y() - components[1]*rhs.x()
    );
}

Vector3 Vector3::cross_product(const Vector3& rhs) const {
    return Vector3(
        components[1]*rhs.z() - components[2]*rhs.y(),
        components[2]*rhs.x() - components[0]*rhs.z(),
        components[0]*rhs.y() - components[1]*rhs.x()
    );
}

void Vector3::operator%=(const Vector3& rhs) {
    f32 x = components[0];
    f32 y = components[1];
    f32 z = components[2];

    components[0] = y*rhs.z() - z*rhs.y();
    components[1] = z*rhs.x() - x*rhs.z();
    components[2] = x*rhs.y() - y*rhs.x();
}

Vector3 Vector3::operator%(const Vector3& rhs) const {
    return Vector3(
        components[1]*rhs.z() - components[2]*rhs.y(),
        components[2]*rhs.x() - components[0]*rhs.z(),
        components[0]*rhs.y() - components[1]*rhs.x()
    );
}



}