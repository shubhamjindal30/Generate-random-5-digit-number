//Including the header files
#include<iostream>
#include<stdlib.h>
#include<cstdlib>
#include<ctime>
using namespace std;

int generateRandom(int max) {
    srand(time(NULL));
    return (rand() % max);
}


int main() {
    
    int num = 0;
    int count[10] = {0};
    for(int i = 0; i< 5; i++) {
        int random = generateRandom(10);
        if(count[random] == 0) {
            count[random] = 1;
            num = num * 10 + random;
        } else {
            i--;
            continue;
        }
    }
    std::string hider = std::to_string(num);
    cout<<hider;
}
