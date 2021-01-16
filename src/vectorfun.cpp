/*
vector abstract data type (ADT)
vector = aka array list
supports these fundamental fxs.

at(i): return element of V w index i; error condition occurs if i out of range (OOR)
set(i,e): replace elem. at index i with 'e'; error condition occurs if 'i' OOR.
insert(i,e): inser a new elem. 'e' into V to have index i; error occur if 'i' is OOR.
erase(i): remove from V the element at index 'i'. error if 'i' is OOR. 



*/
//implement a vector using arrays!  


void insert(i,e) { //insert i at e
	for (int j = 

}
typedef in Elem;

class ArrayVector {
public: 
	ArrayVector();
	int size() const;
	Elem& operator[](int i);
	Elem& at(int i) throw(IndexOutOfBounds);
	void erase(int i);
	void insert(int i, const Elem& e);
}
