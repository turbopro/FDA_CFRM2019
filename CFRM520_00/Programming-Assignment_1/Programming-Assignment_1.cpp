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
// function signature for trig_shift()
double trig_shift(double x, double y, double phi);

// Q3
// function signature for norm_cdf()
double norm_cdf(double x);

// Q4
// function signature for sum_abs()
int sum_abs(int j, int k);

// function signature for abs_sum()
int abs_sum(int j, int k);

int main()
{
    //std::cout << "Hello World!\n";

    cout << "trig_shift(0.1, 0.2, 0.3) = "
        << trig_shift(0.1, 0.2, 0.3)
        << endl << endl;

    cout << "norm_cdf(0.1) = "
        << norm_cdf(0.1)
        << endl << endl;

    cout << "sum_abs(-5, 2) = " 
        << sum_abs(-5, 2)
        << endl << endl;

    cout << "abs_sum(-5, 2) = "
        << abs_sum(-5, 2)
        << endl << endl;


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

    //double cdf_0 = std::erf(x);

    return result;
}


// Q4
// function signature for sum_abs()
int sum_abs(int j, int k)
{
    return (std::abs(j) + std::abs(k));
}

// function signature for abs_sum()
int abs_sum(int j, int k)
{
    return std::abs(j + k);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
