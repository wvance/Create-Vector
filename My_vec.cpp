//My_vec.cpp
#include "My_vec.h"

//This returns the elemet at a specific rank of r. 
char& My_vec::elem_at_rank(int r){
	if (r>= capacity || r<0){
		throw std::runtime_error("Out of bounds!"); 
	}
	else if (ptr[r]==0){
		cout<<"This is Empty"<<endl;  
	} 
	else {
		return ptr[r];
	}
}

//This command adds the desired character to a desired rank r, and sifts others over. 
void My_vec::insert_at_rank(int r, const char& elem){ // Shifts elements after index right. 
	if (r>= capacity || r<0 || size==capacity){
		throw runtime_error("Out of bounds!"); 
	}
	if (ptr[r]==0 && r<= size){
		for (int i=capacity-2; i>=r; --i){
			ptr[i+1]=ptr[i];
		}
		ptr[r]=elem; 
		size++;
	}
	else{
		throw runtime_error("Must add a value to a previous rank first");
	}
}

void My_vec::replace_at_rank(int r, const char& elem){ // Replace element at index by a new value
	if (r> capacity || r> size || ptr[r]==0) {
		throw runtime_error("Out of bounds!"); 
	}
	else {
	ptr[r]=elem; 
	}
}

//This should be done
void My_vec::remove_at_rank(int r){ // Remove element then move additional elements left.  
	for(int i=r; i<capacity; ++i){
		ptr[i]=ptr[i+1];
	}
	--size; 
}

void My_vec::display(){
	for (int i=0; i<=capacity-1; ++i){
		if (ptr[i]==0){
			cout<<"0"; 
		}
		cout<< ptr[i]; 
	}
	cout<<'\n'; 
}

//Copy constructor
My_vec::My_vec(const My_vec& vec){
	ptr = new char;
	*ptr = *vec.ptr;
}

