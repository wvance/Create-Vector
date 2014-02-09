//My_vec.h 
//This is a vector class. 
#include <iostream> 
#include <string>

class My_vec {
private:
	int size, capacity;
	char *ptr;

public:
	My_vec(): size(0), capacity(10),
	ptr(new char[capacity]) {}
	~My_vec() { delete ptr; }

	My_vec(const My_vec& vec); //copy

	//My_vec& operator=(const My_vec& vec);//Assignment opporator 

	int get_size() const { return size; }
	bool is_empty() const { return size==0; }

	
 	char& elem_at_rank(int r);
	void insert_at_rank(int r, const char& elem); // Shifts elements after index right. 
	void replace_at_rank(int r, const char& elem); // Replace element at index by a new value
	void remove_at_rank(int r); // Remove element then move additional elements left. 
	void display(); 

			My_vec& operator=(const My_vec&  vec){
			if(this != &vec){
				int new_size = vec.size;
				int new_capacity = vec.capacity;
				char *new_ptr = new char[new_capacity];
				std::copy(vec.ptr, vec.ptr + new_size, new_ptr);
				delete [] ptr;
				size = new_size;
				ptr =  new_ptr;
			}
			return *this;
		}

};

inline std::ostream& operator<<(std::ostream& out, My_vec& vec)
{
	for (int i=0; i<vec.get_size(); ++i){
		out<<vec.elem_at_rank(i);
	}
  	return out;
}


// int main(){
// 	my_vec v1; 
// 	My_vec v2=v1; 
// 	cout<<v1;
// }
//Copy: copy vector to a new vector. 
//Assignment: take a new vector and copy the vector to that?
//The << opporator will take output stream and print it to variable. 
//Using Main function to test the functions. 

