#include <iostream>
#include<cctype>
#include<cstring>
using namespace std;

int main() {
	char s[100];
	cin.getline(s,101);
int	lowercount=0;
int	uppercount=0;

	for(int i =0;s[i] != '\0';i++){
		char ch =s[i];
		if(islower(ch)){
	        ++lowercount ;
		}
		else if(isupper(ch)){
	    	++uppercount;
		}
	}
	for(int i=0;s[i] != '\0';i++){
	if(lowercount > uppercount){

			s[i]= tolower(s[i]);

	}
	else if(lowercount == uppercount){
		s[i]= tolower(s[i]);
	}
	else{
		s[i] = toupper(s[i]);
	}
	}
	cout << s << endl;
	return 0;
}
