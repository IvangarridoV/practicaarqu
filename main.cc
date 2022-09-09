#include "iostream"
//include ".\src\addition.cc"
//include ".\src\division.cc"
//#include ".\src\multiplication.cc"
//#include ".\src\subtraction.cc"
#include ".\lib\static\libarith.a"

using namespace std;

int main(){
    int a=5, b=10, res; 
    res = add(a,b);
    cout << res << endl;
    res = divi(a,b);
    cout << res << endl;
    res = sub(a,b);
    cout << res << endl;
    res = mul(a,b);
    cout << res << endl;
    return 0;
}