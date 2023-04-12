     #include <iostream>
using namespace std ;

int main (){

	float code,option,MMpin, defpin,number,Rnum,new_pin, cfmnew_pin,oldpin,newpin ,newpin1,amount, pin;
	string name; int  max_attempt=2; 
     
			cout<< "MTN Mobile Money Services"<< endl; //This prompt the user on the kind of mobile money service provider 
	cout<< "---------------------------"<< endl; 
	cout<< "Yello, Kindly enter your name below"<< endl;
	cout<< "YourName: " ; getline(cin,name);
	cout<< "Welcome "<< name <<" Your DEFAULT MOMO PIN is 0000 "<<endl;
	
	//The following lines of codes enables the user to reset his/her default MOMO pin code
	cout<< "Kindly reset your PIN before you continue"<<endl;
	cout<< "RESET MMPIN"<<endl;
	cout<< "---------------------------"<< endl; 
	cout <<"Enter Default Pin To Reset" << endl; cin>>defpin;
	  if (cin,defpin!=0000){
	  	cout <<"Wrong Default Pin, Enter Again" << endl; cin>> defpin;
	  } if (cin,defpin==0000){
	   cout<< "Enter New Pin Code: " ; cin>> new_pin;
}
				    
	
   
	
	
	// The following lines of codes used a for loop confirm that the new pins match.
    for (int attempt = 0; max_attempt=2; attempt++) {
    	cout<< "Confirm your New Pin Code: " ; cin>> cfmnew_pin;
		
			if (cin,new_pin !=cfmnew_pin) {
				cout << "Error!! Pins Do Not Match" << endl;
				cout << "You have " <<max_attempt - attempt << " attempts left"<< endl;
			   if (max_attempt-attempt == 0 ){exit (0);
			   }
			} 		else  {
				cout<< "MMPin Reset Successful , Do Not Share Pin With Anyone "<< endl;
			 break;
			}	
	}

	
	
 cout<< "Mobile Money Services"<< endl;
  cout<<"-------------------------------"<< endl;
  cout<<" Menu" << endl;
   cout<<"1. Authentication " << endl;
    cout<<"2. Check Balance" << endl;
      cout<<"3. Send Money" << endl;
       cout<<"4. Buy Airtime" << endl;
       cout <<"--------------------------------" << endl;
        cin >> option ;
        
    // the following lines allows for authentication
      if (cin, option==1){
       	cout <<"Anthentication" << endl;
       	cout <<"--------------------------------" << endl;
       	cout<<"Enter Mobile Number" <<endl;
       	  cin >> number ;
			cout<<"Enter MMPin " << endl;
       	     cin >> pin ;
       	     
       	     if (cin,pin!=cfmnew_pin){
       	     	cout<< "Wrong Pin, Enter Pin Again: " ;cin >> pin ;
				} 
				if (cin,pin==cfmnew_pin){ 
					cout<< "Authentication Complete" ;
					exit(0);
       }
   }
       // the following lines allows user to check balance.
       else if (cin,option==2){
       	cout << "Check Balance" << endl;
       	cout <<"--------------------------------" << endl;
       	cout <<"Enter MMpin to Check Balance"<< endl;
       	cin>> MMpin;
       	
			 	if (cin, MMpin==cfmnew_pin){
       			cout << "Your Balance is $1,000.00"<< endl ;
       			exit(0);
			   }
       	 else if (cin, MMpin!=cfmnew_pin){
       		cout<<"Wrong Pin, Enter Pin Again: "; cin >> MMpin;
       	   if (cin, MMpin==cfmnew_pin){
       	   	    cout<< "                           " << endl;
       			cout << "Your Balance is $1,000.00"<< endl ;
       			exit(0);
			   }
		   }
	   }

           // the following lines allows user to send money
		else if (cin, option== 3){
	    	cout << "Send Money" << endl;
	    	cout <<"--------------------------------" << endl;
	    	cout<<"Enter Recepient's Number"<< endl;
	    	cin >> Rnum;
	    	cout << "Enter Amount To Transfer" << endl;
	    	cin >> amount ;
	    
	    	if (cin,amount>1000){
	   	cout <<"Not Enough Funds" ;
	   	exit(0);
	   }else 
	    	cout <<"Enter MMpin To Confirm Transaction"<<endl;
	    	cin>> MMpin; 
				if (cin,MMpin!=cfmnew_pin){
				cout<<"wrong Pin,Enter Pin Again: " ; cin >> MMpin;
			}if (MMpin==cfmnew_pin);{
	    	cout << "You Have Sent $" << amount<< " to " << Rnum << " Successfully" ;
		exit(0);	
}
}
		    // the following lines allows user to buy airtime
		
  		 else if (cin, option==4){
			cout << "Buy Airtime"<< endl;
			cout <<"--------------------------------" << endl;
			cout << "Enter Receipient's Number" << endl;
			cin>> Rnum ;
			cout << "Enter Amount"<< endl;
			cin>> amount ;
		}
			if (cin,amount>50){
				cout << "Airtime Can Not Exceed $50"<< endl; cin>> amount ;
			}if (cin,amount<=50){
      		cout << "Enter MMpin"<< endl;
      		cin>> MMpin;
      		}
      		if (cin,MMpin!=cfmnew_pin){
      			cout<<" Wrong Pin, Enter Pin Again: ";  cin >> MMpin;
			  }if (MMpin==cfmnew_pin);{
      		cout<< "You have sent $" <<amount<< " airtime to "<<Rnum<<" successfully"<< endl; 
      		exit(0);
		}
		
	
       	   
       	
	 
	     
       

	   

	
		
 	return 0;
}

