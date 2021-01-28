#include <iostream>
#include <queue>
using namespace std;
using std::queue;


int main () {
priority_queue<int> pq;
cout<<"0. size: " <<pq.size() << '\n';
for (int i=0; i <5; i++) 
	pq.push(i);
cout << "1. size: "<<pq.size() << '\n';
pq.pop();
cout << "2. size: "<<pq.size() << '\n';

pq.push(30);
pq.push(100);
pq.push(25);
pq.push(40);
while(!pq.empty()) {
	cout <<' '<< pq.top();
	pq.pop();
}
cout<< '\n';

priority_queue<int> pq1;
int sum(0);

for(int i=1; i<=10; i++) pq1.push(i);
while (!pq1.empty()) {
	sum+= pq1.top();
	pq1.pop();
}

cout << "total: " << sum << '\n';

priority_queue<int> foo,bar;
foo.push(15);
foo.push(30);
foo.push(10);

return 0;
}
