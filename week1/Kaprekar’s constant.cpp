#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int n, d1, d2, d3, d4;
bool valid = false;
cout<<"Enter any fout-digit: ";
cin>>n;

while (!valid){

d1= (n/1000);
d2= (n/100) % 10;
d3= (n/10)%10;
d4= (n%10);
bool inrange=(n<= 9999 && n>=1000);
bool allsame=(d1==d2 && d2==d3 && d3==d4);

if(!inrange)
        {
        cout<<"Re-enter the number in the given Range(1000-9999): ";
	cin>>n;	
                }

else if(allsame)
        {
         cout<<"Invalid input. Enter a four-digit number whose digits are not all identical: ";
	cin>>n;	
                }
else{
	valid=true;
		}
}

int current=n;
int steps =0;
while(current!=6174){
	d1= (current/1000);
	d2= (current/100) % 10;
	d3= (current/10)%10;
	d4= (current%10);

	if(d1>d2)   {int t=d1; d1=d2; d2=t;}
	if(d1>d3)   {int t=d1; d1=d3; d3=t;}
	if(d1>d4)   {int t=d1; d1=d4; d4=t;}
	if(d2>d3)   {int t=d2; d2=d3; d3=t;}
	if(d2>d4)   {int t=d2; d2=d4; d4=t;}
	if(d3>d4)   {int t=d3; d3=d4; d4=t;}

int smallest = d1 * 1000 + d2 * 100 + d3 * 10 + d4;
int largest = d4 * 1000 + d3 * 100 + d2 * 10 + d1;
int diff=largest-smallest;
steps++;
cout<<setfill('0');
cout<<"step "<<steps<<":  "<<setw(4)<<largest<<" - "<<setw(4)<<smallest<<" = "<<setw(4)<<diff<<endl;
//cout<<left<<setw(8)<<"Step "<<steps<<": "<<largest<<" - "<<right<<setw(4)<<smallest<<" = "<<diff<<endl;
current=diff;
}



cout<<endl;
cout<<"Reached Kaprekar’s constant in "<<steps<<" steps."<<endl;

}

