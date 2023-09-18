/**
 * @file vector3.h
 * @author Sam Sui
 * @brief Header file for core functionality of cuPhysics
 * @version 0.1
 * @date 2023-09-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "cuphysics/precision.h"

#include <cstring>
#include <math.h>

namespace cuphysics {

/**
 * @brief Vector3 class to hold vector components in 3-dimensional space. 
 * 
 */
class Vector3 {

private:

    /**
     * @brief Pointers to the vector components on the host and the device
     * 
     */
    f32 components[3];
    f32* dev_components;

    /**
     * @brief Static variable holds the number of variables for each Vector3 object
     * 
     */
    static const int num_components = 3;

public:

    /**
     * @brief Construct a new Vector3 object as a 0 vector
     * 
     */
    Vector3();

    /**
     * @brief Construct a new Vector3 object with parameters as vector components
     * 
     * @param const f32
     * @param const f32
     * @param const f32
     */
    Vector3(const f32, const f32, const f32);

    /**
     * @brief Destroy the Vector 3 object
     * 
     */
    ~Vector3();

    /**
     * @brief Zeros the vector components
     * 
     */
    void clear();

    /**
     * @brief Vector component getter functions
     * 
     * @return f32 
     */
    f32 x() const;
    f32 y() const;
    f32 z() const;

    /**
     * @brief Vector component setter functions
     * 
     * @param const f32
     */
    void x(const f32);
    void y(const f32);
    void z(const f32);

    /**
     * @brief Return the length of the diagonal using the 3D variant of Pythagorean's Theorem
     * 
     * @return f32 
     */
    f32 magnitude() const;

    /**
     * @brief Return the squared sum of the vector components
     * 
     * @return f32 
     */
    f32 square_magnitude() const;

    /**
     * @brief Convert the vector components to its additive inverse
     * 
     */
    void invert();

    /**
     * @brief Divide the vector components by its magnitude
     * 
     */
    void normalize();

    /**
     * @brief Distribute scalar value across vector components
     * 
     * @param const f32
     */
    void operator*=(const f32);

    /**
     * @brief Return a Vector3 copy where scalar values is distributed across the vector components
     * 
     * @param const f32 
     * @return Vector3 
     */
    Vector3 operator*(const f32) const;

    /**
     * @brief Add the parameter's components to each respective vector component
     * 
     * @param const Vector3& 
     */
    void operator+=(const Vector3&);

    /**
     * @brief Return a Vector3 copy where vector components are added with the parameter's
     * 
     * @param const Vector3& 
     * @return Vector3 
     */
    Vector3 operator+(const Vector3&) const;

    /**
     * @brief Subtract the parameter's components to each respective vector component
     * 
     * @param const Vector3&
     */
    void operator-=(const Vector3&);

    /**
     * @brief Return a Vector3 copy where vector components are subtracted by the parameter's
     * 
     * @param const Vector3& 
     * @return Vector3 
     */
    Vector3 operator-(const Vector3&) const;

    /**
     * @brief Scale the parameter vector then add the corresponding components
     * 
     * @param const Vector3& 
     * @param f32
     * @return 
     */
    void add_scaled_vector(const Vector3&, f32);

    /* Element-wise Product */

    /**
     * @brief Returns a Vector3 copy with element-wise vector component products
     * Same functionality as hadamard_product
     * 
     * @param const Vector3&
     * @return Vector3 
     */
    Vector3 component_product(const Vector3&) const;
    
    /**
     * @brief Returns a Vector3 copy with element-wise vector component products
     * Same functionality as component_product
     * 
     * @param const Vector3& 
     * @return Vector3 
     */
    Vector3 hadamard_product(const Vector3&) const;

    /**
     * @brief Multiplies vector components with the parameter's corresponding components
     * 
     * @param const Vector3&
     */
    void operator*=(const Vector3&);

    /**
     * @brief Returns a Vector3 copy with element-wise vector component products
     * 
     * @param const Vector3&
     * @return Vector3 
     */
    Vector3 operator*(const Vector3&) const;

    /* Inner Product */

    /**
     * @brief Product of Euclidean magnitudes product and the cosine angle
     * between the two vectors
     * Same functionality as dot_product
     * 
     * @param const Vector3&
     * @return Vector3 
     */
    f32 scalar_product(const Vector3&) const;

    /**
     * @brief Product of Euclidean magnitudes product and the cosine angle
     * between the two vectors
     * Same functionality as scalar_product
     * 
     * @param const Vector3&
     * @return Vector3 
     */
    f32 dot_product(const Vector3&) const;

    /* Outer Product */

    /**
     * @brief 
     * 
     * @param const Vector3& 
     * @return Vector3 
     */
    Vector3 vector_product(const Vector3&) const;

    /**
     * @brief 
     * 
     * @param const Vector3& 
     * @return Vector3 
     */
    Vector3 cross_product(const Vector3&) const;

    /**
     * @brief 
     * 
     * @param const Vector3& 
     */
    void operator%=(const Vector3&);

    /**
     * @brief 
     * 
     * @param const Vector3& 
     * @return Vector3 
     */
    Vector3 operator%(const Vector3&) const;

};

}