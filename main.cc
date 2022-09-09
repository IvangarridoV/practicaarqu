#include "iostream"
#include ".\src\addition.cc"
#include ".\src\division.cc"
#include ".\src\multiplication.cc"
#include ".\src\subtraction.cc"

using namespace std;

int main(){
    int a=5, b=10;
    add(a,b);
    div(a,b);
    sub(a,b);
    mul(a,b);
    return 0;
}