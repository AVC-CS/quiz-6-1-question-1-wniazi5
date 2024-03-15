#include <iostream> 
using namespace std;

void getTwoValues(int begin, int end){
    do {
        cout << "Enter two integer values (begin < end): ";
        cin >> begin >> end;
    }
    while ( begin >= end);
}
    int isPrime(int num) {
        if (num <= 1) 
        return 0 ;
        if (num == 2) 
        return 1;
        if (num % 2 == 0)
        return 0;
    for (int i = 3; i * i <= num; i += 2){
        if ( num % i == 0)
        return 0 ;
    }
    return 1;

    }
    int getNextPrime(int begin){
        int next = begin + 1;
        while (!isPrime(next)) {
            next++;
        }
        return next;
        }
        int getPrevPrime (int end){
            int prev = end -1;
            while (!isPrime(prev)){
                prev-- ;
            }
            return prev;
        }
    

// ******************************
// Implement all your functions here
// ******************************
