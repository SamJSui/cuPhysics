/**
 * @file Particle.h
 * @author Sam Sui
 * @brief Header file to define the Particle class and their physical attributes
 * @version 0.1
 * @date 2023-09-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */

namespace cuphysics {

class Particle {

public:
    
    /* Position and its derivatives */
    Vector3 position;
    Vector3 velocity;
    Vector3 acceleration;

    /* Reduces linear motion to remove energy added 
     * through numerical instability in the integrator 
     */
    f32 damping;

    /* Acceleration is equal to the product of force and inverse mass */
    f32 inverse_mass;

    /* Holds the accumulation of forces to be applied at the NEXT time step*/
    Vector3 force_accumulator;

    /**
     * @brief Integrates the particle based on its derivatives and the time given
     * Newton-Euler integration method (linear approximation)
     * 
     * @param f32
     */
    void integrate(f32);

    /**
     * @brief Clears the forces to be applied to the particle
     * 
     */
    void clear_accumulator();

    /**
     * @brief Adds the given force to the accumulator for the next iteration
     * 
     * @param const Vector3&
     */
    void add_force(const Vector3&);
}

}