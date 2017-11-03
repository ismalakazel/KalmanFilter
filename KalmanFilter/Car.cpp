#include "Car.hpp"


Car::Car() {
    
    // Initial state and covariance
    
    x << 0, 0;
    P << 1000, 0, 0, 1000;
    u << 0, 0;
    
    // Hardcode measurements
    
    VectorXd single_meas(1);
    
    single_meas << 1;
    measurements.push_back(single_meas);
    
    single_meas << 2;
    measurements.push_back(single_meas);
    
    single_meas << 3;
    measurements.push_back(single_meas);
}
