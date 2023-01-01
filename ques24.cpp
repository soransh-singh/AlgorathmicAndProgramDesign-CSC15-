#include<iostream>

using namespace std;

// .01 .05 .10 .20 .50 1
int main(){
	float valf = 99;
	cout<<"Enter the value : $";
	cin>>valf;
	int val = int(valf*100);
	int cent1=0, cent5=0, cent10=0, cent20=0, cent50=0, dol=0;
	while(val != 0){
		if(val - 100 >= 0){
			val -=100;
			dol++;	
		}else if(val - 50 >= 0){
			val -=50;
			cent50++;
		}else if(val - 20 >= 0){
			val -=20;
			cent20++;
		}else if(val - 10 >= 0){
			val -=10;
			cent10++;
		}else if(val - 5 >= 0){
			val -=5;
			cent5++;
		}else if(val - 1 >= 0){
			val -=1;
			cent1++;
		}
	}
	dol && cout<<"1 dollar coin: "<<dol<<endl;
	cent50 && cout<<"50 cent coin: "<<cent50<<endl;	
	cent20 && cout<<"20 cent coin: "<<cent20<<endl;
	cent10 && cout<<"10 cent coin: "<<cent10<<endl;	
	cent5 && cout<<"5 cent coin: "<<cent5<<endl;
	cent1 && cout<<"1 cent coin: "<<cent1<<endl;
	return 0;
}
