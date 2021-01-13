#include <iostream>
#include <deque>
using std::deque;
using namespace std;

//double ended queue. 

/*
functions of the deque ADT include:

push_front(e) = insert elem e at beginning of deck
push_back(e) = insert elem at end of deck
pop_front() = remove 1st elem of deque. error if empty
pop_back(): remove last elem of deque; error if empty. 
front(): return ref to 1st elem of deck, error if empty
back(): return last elem of deck. error if empty. 
size(): no. elements
empty(): true if empty /o/w false
 
*/
void showdq(deque <int> g) {
        deque <int> :: iterator it;
        for (it = g.begin(); it != g.end(); ++it)
                cout << '\t' << *it;

}

int main() {

	deque <int> myDeck; //deque of ints. 
	myDeck.push_front(1);
	myDeck.push_front(2);
	showdq(myDeck);
	myDeck.push_back(5);
	myDeck.push_back(6);
	showdq(myDeck);

}
