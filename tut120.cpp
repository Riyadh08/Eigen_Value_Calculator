#include <iostream>
#include <cmath>

void calculateEigenvalues(double matrix[2][2], double& eigenvalue1, double& eigenvalue2) {
    double trace = matrix[0][0] + matrix[1][1];
    double determinant = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];

    // Calculate eigenvalues using the quadratic formula
    double discriminant = std::sqrt(trace * trace - 4 * determinant);
    eigenvalue1 = (trace + discriminant) / 2;
    eigenvalue2 = (trace - discriminant) / 2;
}

int main() {
    // Define the matrix
    double matrix[2][2] = {
        {2, 1},
        {1, 3}
    };

    double eigenvalue1, eigenvalue2;

    // Calculate eigenvalues
    calculateEigenvalues(matrix, eigenvalue1, eigenvalue2);

    // Print the eigenvalues
    std::cout << "Eigenvalue 1: " << eigenvalue1 << std::endl;
    std::cout << "Eigenvalue 2: " << eigenvalue2 << std::endl;

    return 0;
}
