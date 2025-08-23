#include<iostream>
#include<string>
using namespace std;

int main(){

int n;
int X = 0;
string a;
cin >> n;
for(int i=0;i<n;i++){
    cin >> a ;


   {
    if(a[1] == '+'){
        X++ ;
    }
    else if(a[1] == '-'){
        X--;
    }
    }
}
cout << X << endl;
return 0;
}
