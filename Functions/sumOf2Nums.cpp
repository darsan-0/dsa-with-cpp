#include <iostream>
using namespace std;

//Arguments are the actual values.
//Parameteres are the copy of actual values( arguments).

int sumOf2Nums(int x , int y){//Parameters x,y
    return x + y ;
}

int minOf2Nums(int a , int b){
    if (a < b){
        return a;
    }else{
        return b;
    }
}

int main(){

    int a = 10 ;
    int b = 20 ;

    cout << "Ths sum of " << a <<"," << b << " = " << sumOf2Nums(a,b) << endl;
    cout << "Ths min of " << a <<"," << b << " = " << minOf2Nums(a,b)//arguments a,b ;
    
    return 0;
}