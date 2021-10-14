#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<math.h>
using namespace std;

class Partners{
	public:
		int partnerid;
		double contribute_amount;
		static double companyfund;
		
		Partners(){ partnerid=0 , contribute_amount = 0.0 ;}
		
		Partners(int x,double y, double z){ 
			partnerid = x , contribute_amount = (y) , Partners::companyfund = (z); 
		}
		
		static double getFund(){
			return companyfund;
		}
		
		void addAmount(double x){
			contribute_amount += (x);
			companyfund += (x);
		}
		
		static void payBills(double x){
			Partners::companyfund -= (x);
			cout<<endl;
			cout<<fixed<<setprecision(10)<<"The Bill of "<<x<<" is Paid\n"<<"Current Comapany Fund :- "<<getFund()<<endl;
		}
		
		void withdrawamount(double x){
			contribute_amount -= (x);
			companyfund -= (x);
			cout<<endl;
			cout<<fixed<<setprecision(10)<<"The Withdrawen Amount is :- "<<x<<"\nCurrent Contribution Amount left is :- "<<this->contribute_amount<<endl;
			cout<<fixed<<setprecision(10)<<"Current Comapany Fund is            :- "<<getFund()<<endl;
		}
		
		void showDetails(){
			cout<<"The Partner Id is         :-  "<<partnerid<<endl;
			cout<<fixed<<setprecision(10)<<"The Contributed Amount is :-  "<<contribute_amount<<endl;
			cout<<fixed<<setprecision(10)<<"The Company Fund is       :-  "<<getFund()<<endl;
		}
		
};



   double Partners::companyfund = 0.0000000000 ;


int main(){
	Partners p;
	int x;
	double y,z,amt,withdraw,bill;
	cout<<"Enter the Partner ID          :-  " ;
	cin>>x;
	cout<<"Enter the Contribution Amount :-  " ;
	cin>>y;
	cout<<"Enter the Company Fund        :-  " ;
	cin>>z;
	p = Partners(x,y,z);
	cout<<endl;
	cout<<"The Details of the Partner    :-  \n";
	p.showDetails();
	cout<<endl;
	cout<<"Enter the Amount contributed by the Partner :- ";
	cin>>amt;
	p.addAmount(amt);
	cout<<"The Details of the Partner after updating   :-  \n";
	p.showDetails();
	cout<<endl;
	cout<<"Enter the Amount to Withdraw by the Partner :- ";
	cin>>withdraw;
	p.withdrawamount(withdraw);
	cout<<endl;
	cout<<"The Details of the Partner after updating   :-  \n";
	p.showDetails();
	cout<<endl;
	cout<<"Enter the Amount of the Bill to Be paid     :- ";
	cin>>bill;
	p.payBills(bill);
	cout<<endl;
	cout<<"The Details of the Partner after updating   :-  \n";
	p.showDetails();
	cout<<endl;
	
	return 0;
}
