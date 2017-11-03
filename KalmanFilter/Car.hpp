#include <vector>
#include "Eigen/Dense"


using namespace std;
using namespace Eigen;


/// A state predictable object
struct Car {
public:
    
    /// State vector
    VectorXd x = VectorXd(2);
    
    /// State covariance matrix
    MatrixXd P = MatrixXd(2, 2);
    
    /// State change controls
    VectorXd u = VectorXd(2);
    
    /// Incoming object measurements
    vector<VectorXd> measurements;
    
    /// Initialize with base state and covariance
    Car();
};
