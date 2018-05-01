/*
    *Implement a void function F that takes pointers to two arrays of integers (A and B) 
    *and a size N as parameters. It then populates B where B[i] is the product of all A[j] where j != i.
    *For example: If A = {2, 1, 5, 9}, then B would be {45, 90, 18, 10}.
*/
#include <iostream>

using namespace std;

void F(size_t N, int *A, int *B) {
	for (size_t i = 0; i < N; ++i) {
		B[i] = 1;
		for (size_t j = 0; j < N; ++j ) {
			if (i == j) {
				continue;
			}
			B[i] *= A[j];
		}
	}
}

int main(){
    int arrayA[] = {2, 1, 5, 9};
    int arrayB[4];

    F(sizeof(arrayA)/sizeof(arrayA[0]), arrayA, arrayB);

    for(const int &x : arrayB){// checks our solution
        cout << x << endl;
    }

    return 0;
}