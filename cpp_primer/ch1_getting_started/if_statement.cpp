#include <iostream>

/*
*  if statement that counts how many consecutive times
*  each distinct value appears in the input
*
*
*/

int main() {
    // currVal is the number we're counting; we'll read new values into val
    int currVal = 0, val = 0;

    // read first number and ensure that we have data to process
    if (std::cin >> currVal) {
        int cnt = 1; // store the count for the currVal we're processing
        while (std::cin >> val) { // read remaining nums
            if (val == currVal) // counts how many consecutive times the same num appears
                cnt++; // increment cnt
            else { // if new num found, start cnt at the beginning (1) - new num
                std::cout << currVal << " occurs " 
                        << cnt << " times" << std::endl; // output previous nums/val number of times it appeared
                currVal = val; // remember the new num/val 
                cnt = 1; // reset cnt
            }
        }

        // if no more input, goes here (outputs # of consec. times the last val appeared)
        std::cout << currVal << " occurs "
                << cnt << " times" << std::endl;


    } 

    return 0;
}