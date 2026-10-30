

#include<iostream>
using namespace std;

int main(){
int x=0;
int y=0;
bool run = false;
char command;
int direction=0;
int newx=0, newy=0;
int pitX=-3, pitY=2;
int treasureX=2, treasureY=3;
while(!run)
	{
	cout<<"Command: ";
	cin>>command;
	if (command >= 'a' && command <= 'z')
		 {
        command = command - 32;
		}
	        //0 = North, 1 = East, 2 = South, 3 = West;
		switch(command)
			{
			case 'F':{
				newx=x;
				newy=y;
				if(direction==0){newy=y+1;}
				else if(direction==1) {newx=x+1;}
				else if(direction==2) {newy=y-1;}
				else if(direction==3) {newx=x-1;}
				bool baundary= (x<5 && y<5 && x>-5 && y>-5);
				if (!baundary)
        			        {
       				 cout<<"Baundary reached";

            				}
				else { x=newx; y=newy;
				
					if (x == pitX && y == pitY) {
     					   cout << "The rover has fallen into a pit. Mission failed." << endl;
     					   run = true; 
    									}
				else if (x == treasureX && y == treasureY) {
       					 cout << "Treasure found! Mission successful." << endl;
						run = true;  
  									  }
					}
				
				break;
					}
			case 'L': {direction=(direction+3)%4;break;}
			case 'R': {direction=(direction+1)%4;break;}
			case 'P': {
				
					
					cout<<"Position: ("<<x<<", "<<y<<")";
					cout<<endl;
				cout<<"Direcction: ";
				if(direction==0) cout<<"North";
				if(direction==1)
					cout<<"East";
				if(direction==2)
					cout<<"South";
				if(direction==3)
					cout<<"West";
					cout<<endl;
					break;}
			case 'Q':{run=true; break;}
			default : cout<<"Invalid Command. "<<endl;
			}

	}
cout << endl;
for (int row = 5; row >= -5; row--) {
    for (int col = -5; col <= 5; col++) {
        if (row == pitY && col == pitX && row == y && col == x) {
            cout << "X";   
        }
        else if (row == treasureY && col == treasureX && row == y && col == x) {
            cout << "X";  
        }
        else if (row == pitY && col == pitX) {
            cout << "P";
        }
        else if (row == treasureY && col == treasureX) {
            cout << "T";
        }
        else if (row == y && col == x) {
            cout << "R";
        }
        else {
            cout << "-";
        }

        if (col != 5) cout << " ";  
    }
    cout << endl;
}

}
