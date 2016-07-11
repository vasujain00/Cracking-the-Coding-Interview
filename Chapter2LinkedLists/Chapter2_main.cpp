// Created by Abhinav Rathi on 07/11/2016

#include <iostream>
#include "Chapter2_main.hpp"
#include "Problem_1_Remove_Dups.hpp"
using namespace std;
void Chapter2_main::init(){
	Problem_1_Remove_Dups P1;
	int choice;
	do{
		cout<<"\n=======================\nCHAPTER 2. LINKED LISTS\n=======================\n";
		cout<<"Press 1 for 2.1 Remove Dups\n";
		cout<<"Press 2 for 2.2 Return Kth to Last\n";
		cout<<"Press 3 for 2.3 Delete Middle Node\n";
		cout<<"Press 4 for 2.4 Partition\n";
		cout<<"Press 5 for 2.5 Sum Lists\n";
		cout<<"Press 6 for 2.6 Palindrome\n";
		cout<<"Press 7 for 2.7 Intersection\n";
		cout<<"Press 8 for 2.8 Loop Detection\n";
		cout<<"Press -1 to Exit\n";
		cout<<"Enter your choice : ";
		cin>>choice;
		switch(choice){
			case -1:cout<<"\nGoing back to Main Menu!\n";
				break;
			case 1: P1.input();
				cout<<"\nOriginal List : ";
				P1.display();
				P1.remove();
				cout<<"\n\nModified List : ";
				P1.display();
				cout<<"\n";
				break;
			case 2: 
				break;
			case 3: 
				break;
			case 4: 
				break;
			case 5: 
				break;
			case 6: 
				break;
			case 7: 
				break;
			case 8: 
				break;
			default:cout<<"\nIllegal Choice!\n";	
		}
	}while(choice!=-1);
};