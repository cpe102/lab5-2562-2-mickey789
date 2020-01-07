#include<iostream>
#include<string>
using namespace std;

string mixText(string x, string y){
	int i=0;
	int N = x.size();
	int M = y.size();
	string c = "";
	if(N == M){
		while(i<N){
			c = c + x[i] + y[i];
			i++;
		}
		return c;
	}else{
		return "E";
	}

}


int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
