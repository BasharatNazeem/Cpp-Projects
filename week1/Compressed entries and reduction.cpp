/*
Name: Basharat Nazeem       ERP: 35567        Section: 2:30 pm --- 5:15 pm
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int n, current,length, newvalue, count=0, count1=0, count2=0;
cout<<"Enter integers, -1 t end: ";
cin>>n;
cout<<"Compressed Output: "<<endl;
if(n== -1){cout<<"The stream is empty."<<endl;}
else{
newvalue=n;
cin>>n;
while(n!= -1){
	
	if (n == newvalue){
	count++;
	
		}
	else if(n != newvalue){
	cout<<"["<<count+1<<" x "<<newvalue<<"] ";
	newvalue = n;
	count=0;
	count2++;
	
	
		}

	cin>>n;
	count1++;
	
	
	}

}
cout<<"["<<count+1<<" x "<<newvalue<<"]"<<endl;
cout<<"Orignal values"<<setw(5)<<":"<<setw(5)<<count1+1<<endl;
cout<<"Compressed entries: "<<setw(3)<<count2+1<<endl;
double reduction =0; 
reduction = double((count1+1) - (count2+1)) /double(count1+1)*100;
cout<<"Reduction"<<setw(10)<<":"<<setw(8)<<setprecision(4)<<reduction<<"%"<<endl;











}
