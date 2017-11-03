#include <iostream>
#include "Filter.hpp"
#include "Car.hpp"


int main(int argc, const char * argv[]) {
    
    // Create a Kalman instance
    
    Kalman kalman = Kalman();
    
    // Create a trackable object
    
    Car car = Car();
    
    // Predict object state with measurements
    
    for (unsigned int n = 0; n < car.measurements.size(); ++n) {
        kalman.filter(car.x, car.P, car.u, car.measurements[n]);
        std::cout << "x = " << car.x << std::endl;
        std::cout << "P = " << car.P << std::endl;
    }
    
    return 0;
}
