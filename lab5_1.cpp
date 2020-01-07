#include<iostream>
#include<string>
using namespace std;

int main(){
	int N;
	cout << "Enter the number of student: ";
	cin >> N;
	
	string name[N];
	int age[N];

	int i = 0;
	while(i<N){
	cout << "Name of student =["<<i+1<<"]:";
	cin >> name[i];
	
	cout << "Age of student = ["<<i+1<<"]:";
	cin >> age[i];
	i++;
	} 
	cout <<"--------------------------------------\n";
	
	int key;
	cout << "Enter an age to search: ";
	cin >> key;
	cout <<"--------------------------------------\n";
	
	i=0;
	while(i<N){
		if(key==age[i]){
			cout << name[i] << "\n";
			i++;
		}else{
			i++;
		}
	}
	cout <<"--------------------------------------\n";
return 0;
}

