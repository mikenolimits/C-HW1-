#include <iostream>
using namespace std;

int main(){

unsigned int width;
unsigned int height;
// Floating points in most languages will always give the same value, but it will be rounded off to an aproximate integer.
// This is due to the fact that more integers = more bbytes taken up & more inefficiency.
// Floating points remedy the preformance hit in exchange for less accurate calculations. 

cout<<"Hi. My name is Steve, the rectangle calculater."<<"\n"<<"Please note that I calculate longer integers as floating points, due to this, larger calculations might not appear to be as accurate."<<"\n"; 

cout<<"Now that we cleared that up....What is the width of your rectangle?";

cin>>width;

cout<<"Thanks! What is the height of your rectangle?";

cin>>height;

cout<<"Great. The area of your rectangle is aproximately equal to " << width * height <<"\n";
return 0;

}
