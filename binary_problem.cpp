/*
    *Given a collection of integers, sort them according to the numbers of
    *ones in their binary representation. if two numbers have same number of ones
    *in their binary representation, sort according to normal integer sort
*/

#include <bitset>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

#define no_of_bits static_cast<int>(ceil(log2(1000)))

int main (int argc, const char *argv[]){

    vector<int>coll = {6,6,2,19,45,3,0};
    sort (coll.begin(), coll.end(), [](int a, int b){
        size_t ones_in_a = bitset<no_of_bits>(a).count(), ones_in_b = bitset<no_of_bits>(b).count();
        return (ones_in_a == ones_in_b) ? (a < b) : (ones_in_a < ones_in_b);
    });
    for (const auto x : coll){
        cout << x << endl;
    }
    return 0;
}