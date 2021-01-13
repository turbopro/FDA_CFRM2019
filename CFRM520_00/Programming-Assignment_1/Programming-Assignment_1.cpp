/*
Programming-Assignment_1.cpp
1st programming assignment for CFRM520, Winter 2021

Name:       Vernon WOOLFORD
Date:       Jan 08 2021
Ver:        1.0
 
*/
#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

// Q2
// function declaration/signature for trig_shift()
double trig_shift(double x, double y, double phi);

// Q3
// function declaration/signature for norm_cdf()
double norm_cdf(double x);

// Q4
// function declaration/signature for sum_abs()
int sum_abs(int j, int k);

// function declaration/signature for abs_sum()
int abs_sum(int j, int k);


int main()
{
    /*
    cout << "trig_shift(0.1, 0.2, 0.3) = "
        << trig_shift(0.1, 0.2, 0.3)
        << endl << endl
        << "norm_cdf(0.1) = "
        << norm_cdf(0.1)
        << endl << endl
        << "sum_abs(-5, 2) = " 
        << sum_abs(-5, 2)
        << endl << endl
        << "abs_sum(-5, 2) = "
        << abs_sum(-5, 2)
        << endl << endl;
    */

    return 0;
}


// Q2
// function definition for trig_shift()
double trig_shift(double x, double y, double phi)
{
    double result = std::sin(x + phi * y) + std::cos(x - phi * y);
    return result;
}


// Q3
// function definition for norm_cdf()
double norm_cdf(double x)
{
    // tex:
    // Formula 1: $$(a+b)^2 = a^2 + 2ab + b^2$$

    const double sqrt_two = std::sqrt(2.0);

    double result = (1 + std::erf(x / sqrt_two)) / 2;

    return result;
}


// Q4
// function definition for sum_abs()
int sum_abs(int j, int k)
{
    return (std::abs(j) + std::abs(k));
}

// function definition for abs_sum()
int abs_sum(int j, int k)
{
    return std::abs(j + k);
}

