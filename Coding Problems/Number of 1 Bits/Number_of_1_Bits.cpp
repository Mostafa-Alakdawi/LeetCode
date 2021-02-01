//============================================================================
// Name        : Number_of_1_Bits.cpp
// Author      : Mostafa Alakdawi
// Version     :
// Copyright   : Your copyright notice
// Description : The solution of the Hamming weight coding problem
//============================================================================

#include <iostream>
# include <assert.h>

using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {

        int count {0};
        uint32_t mask = 1;

        while(n != 0){

            if(n & mask)
                ++count;

            n = n >> 1;
        }

        return count;
    }
};

int main() {
	cout << "Test Start" << endl;

	//Testing the solution using asserions
	Solution solution;

	assert( solution.hammingWeight(11) == 3 );
	assert( solution.hammingWeight(9) == 2 );
	assert( solution.hammingWeight(15) == 4 );

	cout << "Test End" << endl;

	return 0;
}
