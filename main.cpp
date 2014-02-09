//main.cpp
#include "My_vec.h"

using namespace std; 
int main(){

	My_vec vector;
	cout<<"There are several operations you can do."<<endl; 
	cout<<"The operations are: 1) element at rank (x)"<<endl; 
	cout<<"--------------------2) insert at rank (x,y)"<<endl;  
	cout<<"--------------------3) replace at rank (x,y)"<<endl; 
	cout<<"--------------------4) remove at rank (x)"<<endl; 
	cout<<"--------------------5) display vector"<<endl;
	cout<<"--------------------6) EXIT PROGRAM"<<endl; 
	
	char input; 
	cout<<"Please choose a number: ";
	while(cin>>input && input != '6'){ 
	switch(input){
		case '1': cout<<"What element would you like to view?: ";
			int one_answer; 
			cin>>one_answer; 

			cout<<"The element in rank "<<one_answer<<" is: " ; 
			cout<<vector.elem_at_rank(one_answer)<<endl; 
		break;

		case '2': cout<<"What would you like to insert?: "; 
			char two_char_answer;
			int two_rank_answer; 
			cin>>two_char_answer; 

			cout<<"What rank do you want to put it in?: "; 
			cin>>two_rank_answer; 
			vector.insert_at_rank(two_rank_answer,two_char_answer);

			cout<<"You inserted "<< two_char_answer<<" in the "<<two_rank_answer<< " rank!"<<endl; 
		break;

		case '3': cout<<"What would you like to replace?: "; 
			char three_char_answer; 
			int three_int_answer; 
			cin>>three_char_answer; 

			cout<<"What rank do you want to replace?: "; 
			cin>>three_int_answer; 
			vector.replace_at_rank(three_int_answer,three_char_answer); 

			cout<<"You replaced rank "<<three_int_answer<<" with: "<<three_char_answer<<endl; 
		break; 

		case '4': cout<<"What rank would you like to remove?: "; 
			int four_int_answer; 
			cin>>four_int_answer; 

			vector.remove_at_rank(four_int_answer); 
			cout<<"You have removed the "<< four_int_answer <<" rank."<<endl; 
		break; 

		case '5': cout<<"The vector is: "<< vector<<endl; 
		break; 
	}
	cout<<"Please choose a number: "; 
	}

	cout<<"The final vector is: "<<vector<<endl; 
	//cout<<"The final vector size is: "<<vector.get_size()<<endl; 



	My_vec v2=vector;
	cout<<v2<<endl; 

	v2=vector; 
	cout<<"Vector 2 is: "<<v2; 

	//My_vec vector2;
 	//vector = vector2;
 	//cout<<vector2<<endl; 


	return 0;
}