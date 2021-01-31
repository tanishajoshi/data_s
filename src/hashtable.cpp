#include <iostream>
#include <list>
using namespace std;
#include <iterator>
class HashTable {
private:
	list<int> *table;
	int tot_elems;
	int getHash(int key) {
		return key & tot_elems;
	}
public:
	HashTable(int n) {
		tot_elems=n;
		table = new list<int>[tot_elems];
	}
	void insertElem(int key) {
		table[getHash(key)].push_back(key);

	}
	void removeElem(int key) {
		int x = getHash(key);
		list<int>::iterator i;
		for (i = table[x].begin(); i != table[x].end(); i++) { 
      if (*i == key) 
        break;		
		}
		if (i != table[x].end()) 
			table[x].erase(i);
  }
	void print(){
    // Traverse each index:
		for(int i = 0; i < tot_elems; i++){
			cout << "Index " << i << ": ";
      // Traverse the list at current index:
      for(int j : table[i])
        cout << j << " => ";

      cout << endl;
    }
  }
	
};
int main() {
  // Create a hash table with 3 indices:
  HashTable h(3);

  // data to be stored in the hash table:
  int arr[] = {2, 4, 6, 8, 10};

  //insert data into hash table:
  for(int i = 0; i < 5; i++)
    h.insertElem(arr[i]);

  cout << "..:: Hash Table ::.." << endl;
  h.print();
  
  h.removeElem(4);
  cout << endl << "..:: After deleting 4 ::.." << endl;
  h.print();

  return 0;
}

