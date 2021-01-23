#include <iostream>
#include <list>
#include <iterator>
using namespace std;
using std::list;

public void left(list<char> lst, const_iterator cursor, int numchars) {
cursor+= numchars;
for(list<int>::iterator iter = (lst).begin(); iter != (lst).end(); iter++){
     cout<<*iter<<endl;
}
}

public void right(list<char> lst, int numchars) {
cursor -= numchars;
for(list<int>::iterator iter = (lst).begin(); iter != (lst).end(); iter++){
     cout<<*iter<<endl;
}
}

public void delete (list<char> lst, int numchars) {

list<int>::iterator it, it2;
if (numchars>1) {
it = it2 = lst.begin();
advance(it2,numchars);
++it;
//
it=lst.erase(it);
it2 = lst.erase(it2);
++it;
--it2;
lst.erase(it,it2)
} else {


for(list<int>::iterator iter = (lst).begin(); iter != (lst).end(); iter++){
     cout<<*iter<<endl;
}
}



int main () {

list<int> list1;


list1.push_back('H')
list1.push_back('o')
list1.push_back('l')
list1.push_back('l')
list1.push_back('y')
list1.push_back('w')
list1.push_back('o')
list1.push_back('o')
list1.push_back('d')

list<int>::const_iterator cursor = list1.begin()


return 0;
}

