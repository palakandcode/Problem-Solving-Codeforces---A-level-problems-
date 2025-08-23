#include<bits/stdc++.h>

using namespace std;

int main(){
int n,j,k=0,l=0;;
cin >> n;
for(int i=1; ;i++){

   int j = i*(i+1)/2;
     if(k+j <= n){
       k +=  j;
       l++ ;
    }
    else
        break ;
}

cout << l << endl;
return 0;
}
