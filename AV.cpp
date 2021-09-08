#include <iostream>
using namespace std;

int main(){
	
	float sum = 0.0;
	float salaries[5];
	for(int i=0; i<5; i++)
	{
		cout<<"Enter the value of the client "<<i+1<<" \n";
		cin>> salaries[i];
	}
	for(int index=0; index<5; index++)
	salaries[index]+=salaries[index]*0.10;
	
	for(int i=0; i<5; i++)
	sum+=salaries[i];
	
	cout<<"The avarge is "<<sum/10<<"\n";
	
	return 0;
	
}
