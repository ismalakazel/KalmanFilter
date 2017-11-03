#include "Eigen/Dense"


using namespace Eigen;


/// The Kalman filter.
struct Kalman {
    
public:
    /*!
     @func filter
     @description The Kalman filter function
     @param x Object state
     @param P Object state covariance
     @param u State change control input
     @param z Incoming measurement
     */
    void filter(VectorXd &x, MatrixXd &P, VectorXd u, VectorXd z);

    /// Initialization of the Kalman filter properties
    Kalman();

private:
    /// Matrix that describes how the state transitions
    MatrixXd F = MatrixXd(2, 2);
    
    /// Matrix that describes the measurement of an observation
    MatrixXd H = MatrixXd(1, 2);
    
    /// Matrix that describes the measurement covariance
    MatrixXd R = MatrixXd(1, 1);
    
    /// Identity matrix
    MatrixXd I = MatrixXd::Identity(2, 2);
    
    /// Matrix that describes the prediction covariance
    MatrixXd Q = MatrixXd(2, 2);
};      
