#include <iostream>
#include <list>
#include <iterator>
using namespace std;
using std::list;


void merge(list<int> list1, list<int> list2, list<int> *list3) {
			list<int>::const_iterator tmp1 = list1.begin();
      list<int>::const_iterator tmp2 = list2.begin();

			while(true) {
					if ((*list3).empty()) { //check syntax here
							if(*tmp1<*tmp2) {
									//i = *tmp1;
									(*list3).push_back(*tmp1);
									
									++tmp1;           //tmp = tmp.next
							} else if (*tmp1 == *tmp2) {
									//i = *tmp1;

									(*list3).push_back(*tmp1);
									(*list3).push_back(*tmp1);
									++tmp1;
									++tmp2;
							} else {
									 
									 (*list3).push_back(*tmp2);
									 ++tmp2;
							}

					
					 
					} else { 
							if (tmp1 ==list1.end()|| tmp2 == list2.end())
									break; 
							while(true) {	
							 		if (tmp1 ==list1.end()|| tmp2 == list2.end()) 
											break;
									if (*tmp1 <*tmp2) {
										
											(*list3).push_back(*tmp1);
											tmp1++;
									} else if (*tmp1==*tmp2) {
										 
											(*list3).push_back(*tmp1);
											(*list3).push_back(*tmp1);
											tmp1++;
											tmp2++; 
									} else {
										
											(*list3).push_back(*tmp2);
											tmp2++;	
									}			
							}
					} 
		}
		if(tmp1 == list1.end()) {
				while (!(tmp2 == list2.end())) {
						(*list3).push_back(*tmp2);
						tmp2++;
				} 

				return;
		} else { 	
				while(!(tmp1 == list1.end())) {
						(*list3).push_back(*tmp1);
						tmp1++;
				}
				return;
		}
}



int main () {
std::list<int> list3;
std::list<int> list1;
std::list<int> list2;


list1.push_back(2);
list1.push_back(7);
list1.push_back(12);
list1.push_back(15);
list2.push_back(3);
list2.push_back(8);
list2.push_back(12);
list2.push_back(19);
list2.push_back(21);

merge(list1,list2,&list3);
cout << "the merged sorted list is:  "<<endl;
for(list<int>::iterator iter = (list3).begin(); iter != (list3).end(); iter++){
     cout<<*iter<<endl;
}

}
