// Copyright (c) 2026 Kaylee R All rights reserved.
// .
// Created by: Kaylee R
// Date: 24,11,2026
// This program  uses a for loop
// to print numbers from 1000 to 2000
// 5 numbers per line with spaces in between.

#include <iostream>
#include <ostream>

int main() {
    // declare variables
    int counter;

    // set up for loop
    for (counter = 10; counter < 20 + 1; counter++) {
        if (counter == 10) {
            std::cout << counter << " ";
        } else if (counter % 5 == 0) {
            std::cout << "\n" << counter << " ";
        } else {
            std::cout << counter << " ";
        }
    }
}
