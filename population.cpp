// (Population projection) UBoS projects population based on the
// following assumptions:
// One birth every 7 seconds
// One death every 13 seconds
// One new immigrant every 45 seconds
// Write a program to display the population for each of the next five years. Assume the current population is 312032486 and one year has 365 days.

#include <iostream>
using namespace std;

int main() {
    long long population = 312032486;
    
    //total number of seconds in a 365-day year
    const long long secondsperyear = 365LL * 24 * 60 * 60;
    
    long long birthsperyear = secondsperyear / 7;
    long long deathsperyear = secondsperyear / 13;
    long long immigrantsperyear = secondsperyear / 45;
    
    //net population change per year
    long long netchangeperyear = birthsperyear - deathsperyear + immigrantsperyear;

    //for the next five years to project and display the population
    for (int year = 1; year <= 5; ++year) 
    {
        population += netchangeperyear;
        cout << "\nIn year " << year << ": " << population;
    }

    return 0;
}
