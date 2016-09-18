#include <iostream> //Colton Shingler - 9/15/16 -- goal is to make a rocket out of '*' using the restrictions placed in the worksheet

using namespace std;

void rocket (char); // protoype - another name for declaration
void rectangle (char); // declaration of rectangle
void triangle (char); // declaraction for triangle

int main() { //initializing our main function
	char sym = '*';
	rocket(sym);

	cout << "Input any character:" << endl;
	cin >> sym;
	rocket(sym);
}
void rocket (char sym) { // given a parameter char - rocket returns the triangles and rectangles (sym)
	triangle (sym);
	rectangle (sym);
	rectangle (sym);
	rectangle (sym);
	triangle (sym);
}
void triangle (char sym) { // given a parameter char - triangle returns * in the shape of a wedge or cusp
	cout << "  " << sym << "  " << endl;
	cout << " " << sym << " " << sym << " " << endl;
	cout << sym << "   " << sym << endl;
}
void rectangle (char sym){ // given for parameter char - rectangle returns * in the shape of a rectangle
	cout << sym << sym << sym << sym << sym << endl;
	cout << sym << "   " << sym << endl;
	cout << sym << "   " << sym << endl;
	cout << sym << sym << sym << sym << sym << endl;
}
 // iteration 5 was null on worksheet make sure to change that for next year's class.
