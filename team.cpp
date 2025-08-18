#include <iostream>
using namespace std;

int main() {
	int i,n;
    int a,b,c;

	cin >> n;
	int count=0;
    int number[3];

	for(i=0;i<n;i++){

		cin >> a >> b >> c;
        if(a + b + c >= 2){
        count++;
    }
	}

    cout << count ;


	return 0;
}
