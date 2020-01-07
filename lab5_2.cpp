#include<iostream>
#include<string> 
using namespace std;

string mixText(string a, string b){
	int L1 = a.size();
	int L2 = b.size();

	if (L1!=L2){
		return "E";
	}
	int i =0;
	string y = " ";
	while(i<L1){
		y=y+a[i]+b[i];
		i++;
	}
	return y;
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
