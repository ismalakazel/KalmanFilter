#include "Filter.hpp"


Kalman::Kalman() {
        
    // Initialize Kalman filter matrices
    
    F << 1, 1, 0, 1;
    H << 1, 0;
    R << 1;
    Q << 0, 0, 0, 0;
}


void Kalman::filter(VectorXd &x, MatrixXd &P, VectorXd u, VectorXd z) {
    
    // Kalman gain
    
    MatrixXd K =  P * H.transpose() * (H * P * H.transpose() + R).inverse();
    
    // Kalman filter update step
    
    x = x + K * (z - H * x);
    P = (I - K * H) * P;
    
    // Kalman filter predict step
    
    x = F * x + u;
    P = F * P * F.transpose() + Q;    
}

