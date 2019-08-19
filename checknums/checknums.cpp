/* Have the function CheckNums(num1,num2) take both parameters being passed 
and return the string true if num2 is greater than num1, otherwise return the string false. 
If the parameter values are equal to each other then return the string -1.  */

#include <string>

std::string CheckNums(int num1, int num2){
    if (num1 < num2 ){
        return "true";
    }
    else if(num1 > num2 ){
        return "false";
    }
    else return "-1";
}

std::string CheckNums1(int num1, int num2){
    return num1<num2?"true":(num1==num2?"-1":"false");
}