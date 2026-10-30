
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int minute, hour, second, alarmm, alarmh;
int n,snooze=0;
cout<<"Enter current time (hh mm ss): ";
cin>>hour>>minute>>second;
cout<<endl;
cout<<"Enter  alarm time (hh mm): ";
cin>>alarmh>>alarmm;
bool running=false;
while(!running){
second++;
	if(second == 60){
	second = 0;
	minute++;
	

		if(minute==60){
		minute=0;
		hour++;
	
		
			if(hour==24){
				hour=0;
	
	
			}
		}
	}

cout<<setfill('0');
if(second == 0 && minute == alarmm && hour == alarmh ){
cout<<"BEEP BEEP BEEP! It's "<<setw(2)<<hour<<":"<<setw(2)<<minute<<"!"<<endl;
cout<<"1) Snooze 2) Wake up: ";

cin>>n;
	switch(n){
	case 1:
		cout<<"Snoozing for five more minutes..."<<endl;
		alarmm=alarmm+5;
		snooze++;
		break;
	case 2:
		cout<<"Good morning! You woke up after "<<snooze<< " snooze(s)"<<endl;
	
		running= true;
		}








}








}




}

