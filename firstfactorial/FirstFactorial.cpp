#include <iostream>
#include <string>
using namespace std;

int FirstFactorial (int num){
    if (num < 0 ) return 0;
    int y {1};
    for (int x = num; x > 0; x--){
        y = y*x;
    }
    return y;
}

int FirstFactorial1 (int num){
    return num <= 1? num : num*FirstFactorial1(num-1);
}

int main(){
    for(int x: {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18}){
    std::cout << FirstFactorial(x) << endl;
    std::cout << FirstFactorial1(x) << endl;
    }
    return 0;
}