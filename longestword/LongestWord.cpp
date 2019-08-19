#include <iostream>
#include <string>
using namespace std;
// july 30, 2019, could be improved

string LongestWord(string sen){
    string sen2 {""};
    string longest {""};
    for(char a: sen){
        if (isalnum(a)){
            sen2+=a;    
        }
        else if ( a == ' ') {
            if (sen2.length()>longest.length()){
                longest = sen2;
            }
            sen2 = "";
        }
    }
    if (sen2.length()>longest.length()) longest = sen2;
    return longest;
}

int main(){
    cout << LongestWord(" ddfsss  sdfdsfk e e e 9eejsdfjsjdkfjkj sjsdjf skji;;fj83josojodj 3 jsoj;((odsjfo3333333j ") << endl;
    return 0;
}