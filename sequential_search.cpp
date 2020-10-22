#include<iostream>
using namespace std;

int main()
{
	string id [8]={"2207023006","2207023004","2207023003","2207023007","2207023005","2207023001","2207023008","2207023002"};
	string name [8]={"Tommy", "John", "George", "Mike", "Ronaldo", "Messi", "Neymar", "Puyol"};
	string input;
	
	int index, data;
	
	cout << "PERSON DATA" << endl;
	cout << "====================" << endl;
	cout << "Input ID : ";
	cin >> input;
	
	for (int i=0;i<=8;i++)
	{
		if(input == id[i]) {
			index +=1;
			data = i;
		}
		
	}
	
	if (index > 0){
		cout<< endl << "Name	: ";
		cout<<name[data];
	}
	
	else{
		cout << endl << "Data Not Found!";
	}
	
	return 0;
}