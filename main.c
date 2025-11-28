#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occurrences[11] = {0}; // Array til at gemme forekomsten af udfald
    int die1;
    int die2;
    int sum;
    int i;
    
    // Seed random number generator
    srand(time(NULL));
    
    // Simuler kast med to terninger x- antal gange
    for(i = 0; i < 50000; i++) {
        die1 = (rand() % 6) + 1; // Random 1-6
        die2 = (rand() % 6) + 1; // Random 1-6
        sum = die1 + die2;       // Summen af hvert kast
        occurrences[sum - 2]++;  // summen bliver gemt i arrayet
    }
    
    // Output the results
    for(i = 0; i < 11; i++) {
        printf("%d: %d\n", i + 2, occurrences[i]);
    }
    
    return 0;
}