// Created by Abhinav Rathi on 07/03/2016

#include <iostream>
#include "Additional_main.hpp"
#include "IterativePermutation.hpp"
#include "RecursivePermutation.hpp"
#include "SortStringList.hpp"
using namespace std;
void Additional_main::init(){
	IterativePermutation IP;
	RecursivePermutation RP;
	SortStringList SSL;
	int choice;
	do{
		cout<<"\n===================\nADDITIONAL PROBLEMS\n===================\n";
		cout<<"String Permutation (Iterative). Press 1\n";
		cout<<"String Permutation (Recursive). Press 2\n";
		cout<<"Sort List of Strings. Press 3\n";
		cout<<"Find a,b,c,d s.t. a^3+b^3=c^3+d^3. Press 4\n";
		cout<<"Match permutation of smaller string in bigger string. Press 5\n";
		cout<<"Ransom Note out of a Magazine words. Press 6\n";
		cout<<"Find median of an expanding array. Press 7\n";
		cout<<"List Common Elements of two sorted arrays. Press 8\n";
		cout<<"Press -1 to Exit\n";
		cout<<"Enter your choice : ";
		cin>>choice;
		switch(choice){
			case -1:cout<<"\nGoing back to Main Menu!\n";
				break;
			case 1: IP.input();
				IP.display_permutation();
				break;
			case 2: RP.input();
				RP.display_permutation();
				break;
			case 3: SSL.input();
				SSL.sort();
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