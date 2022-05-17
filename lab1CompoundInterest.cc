/**
 *   @file: lab1CompoundInterest.cc
 * @author: Isaac Weber
 *   @date: 05/17/2022
 *  @brief: Calculating future compound interest
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {
    double interest_number_of_years;
    double future_value;
    double invest_amount, annual_interest_rate, time_period;
    cout << "Please enter your Investment Amount, your Interest rate, and your Number of years:";
    cin >> invest_amount >> annual_interest_rate >> time_period;
    if (invest_amount < 0)
    {
        cout << "Error: Invalid input" << endl;
    }
    else if(annual_interest_rate < 0)
    {
        cout << "Error: Invalid input" << endl;
    }
    else if(time_period < 0)
    {
        cout << "Error: Invalid input" << endl;
    }
    else
    {
        double annual_interest_rate_decimal = annual_interest_rate * 0.01;
        interest_number_of_years = pow((1+annual_interest_rate_decimal), time_period);
        future_value = invest_amount * interest_number_of_years;
        
        cout << "Investment Amount: $" << fixed << setprecision(2) << invest_amount << endl;
        cout << "Interest: " << setw(14) << fixed << setprecision(2) << annual_interest_rate << "%" << endl;
        cout << "Number of Years: " << setw(7) << fixed << setprecision(2) << time_period << endl;
        cout << "Future Value: " << setw(6)<< '$' << fixed << setprecision(2) << future_value << endl;

    }



    return 0;
}