

#include<iostream>
using namespace std;
int main(){

int n;
bool valid = false;

while(!valid){
cout<<"Enter grid size n (odd, 3 to 15): ";
cin>>n;
bool odd = (n%2 != 0);
bool range = (n>=3 && n<= 15);

	if(!range){
	cout<<"n must be in the given range. Please try again";
	cout<<endl;
		}

        else if (!odd){
        cout<<"n must be an odd integer. Please try again";
        cout<<endl;
                }
	else{
	valid=true;
		}
	}
int center= n/2,rd=0,cd=0;

for(int row=0; row<n; row++){
	for (int col=0; col<n; col++){

int total=0;
	if (row>center)  {rd= row-center;}   else {rd= center-row;}
	if (col>center)  {cd= col-center;}   else {cd= center-col;}
	total=rd+cd;
	
	cout<<total<<" ";
		}
	
cout<<endl;	
	
	}



}
