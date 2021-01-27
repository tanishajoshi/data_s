#include <iostream>
using namespace std;
// ==, <=, <, +, -, *, 
class Point {
public:
	int x;
	int y;
Point(int x, int y) {
	this->x = x;
	this->y = y;
}
bool operator==(Point p) {
	return this->x == p.x && this->y == p.y;

}
};

class Node {
	public:
		int data;
		Node operator+(Node n) {
			Node m;
      m.data = this->data + n.data; 
      return m;
    }
};

int main() {
	Point p1(2, 3);
	Point p2(5, 4);
  cout << (p1 == p2) << endl;
  Node x1, x2, x3;
  x1.data = 5;
  x2.data = 7;
  x3 = x1 + x2; 
  cout << x3.data << endl;
  return 0;
}
