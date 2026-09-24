#include <iostream>
#include <cmath>

double findSqrt(double num) {
    if (num < 0) return -1;
    if (num == 0) return 0;

    double lower = 0;
    double upper = num;
    double temp = 0;
    
    int iterations = 50; 
    
    while (iterations-- > 0) {
        temp = (lower + upper) / 2;
        if (temp * temp == num) return temp;
        else if (temp * temp > num) {
            upper = temp;
        } else {
            lower = temp;
        }
    }
    return temp;
}   