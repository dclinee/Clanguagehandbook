#ifndef STATS_H
#define STATS_H
/* stats.h
 *
 * Simple statistics library
 * Project UID 5366c7e2b77742d5b2142097e51561a5
 *
 * EECS 280 Project 1
 *
 */

#include <vector>

//NOTE: no "using namespace std;" in a .h file!  That's why we use "std::vector
//instead of "vector" later on.  You can add "using namespace std;" to your
//stats.cpp if you want to.

//REQUIRES: v is not empty
//EFFECTS: returns a summary of the dataset as (value, frequency) pairs
//  In the returned vector-of-vectors, the inner vector is a (value, frequency)
//  pair.  The outer vector contains many of these pairs.  The pairs should be
//  sorted by value.
//  {
//    {1, 2},
//    {2, 3},
//    {17, 1}
//   }
//
// This means that the value 1 occurred twice, the value 2 occurred 3 times,
// and the value 17 occurred once
std::vector<std::vector<double> > summarize(std::vector<double> v);

//EFFECTS: returns the count of the numbers in v
int count(std::vector<double> v);

//REQUIRES: v is not empty
//EFFECTS: returns the sum of the numbers in v
double sum(std::vector<double> v);

//REQUIRES: v is not empty
//EFFECTS: returns the arithmetic mean of the numbers in v
//  http://en.wikipedia.org/wiki/Arithmetic_mean
double mean(std::vector<double> v);

//REQUIRES: v is not empty
//EFFECTS: returns the sample median of the numbers in v
//  http://en.wikipedia.org/wiki/Median#The_sample_median
double median(std::vector<double> v);

//REQUIRES: v is not empty
//EFFECTS: returns the mode of the numbers in v
//  http://en.wikipedia.org/wiki/Mode_(statistics)
//  Example: mode({1,2,3}) = 1
//  Example: mode({1,1,2,2}) = 1
//  Example: mode({2,2,1,1}) = 1
//  Example: mode({1,2,1,2}) = 1
//  Example: mode({1,2,1,2,2}) = 2
//  In the event of a tie, return the smallest value (as in the 
//  above examples)
//HINT 1: use the sort() function provided in p1_library.h
//HINT 2: use a nested loop
//HINT 3: use a variable to remember the most frequent number seen so far
double mode(std::vector<double> v);

//REQUIRES: v is not empty
//EFFECTS: returns the min number in v
double min(std::vector<double> v);

//REQUIRES: v is not empty
//EFFECTS: returns the max number in v
double max(std::vector<double> v);

//REQUIRES: v contains at least 2 elements
//EFFECTS: returns the corrected sample standard deviation of the numbers in v
//  http://en.wikipedia.org/wiki/Standard_deviation#Corrected_sample_standard_deviation
double stdev(std::vector<double> v);

//REQUIRES: v is not empty
//          p is between 0 and 1, inclusive
//EFFECTS: returns the percentile p of the numbers in v like Microsoft Excel.
//  Refer to the Appendix in the spec for the formula to use.
//  NOTE: the definition in the wiki article uses indexing from 1.  You will
//  need to adapt it to use indexing from 0.
double percentile(std::vector<double> v, double p);

#endif
