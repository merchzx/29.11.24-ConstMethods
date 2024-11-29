#include <iostream>
using namespace std;


class Point {
	int x;
	int y; 
public:

	Point(){}
	Point(int _x, int _y) :x(_x), y(_y) {}
	void init(int a,int b) {
		x = a;
		y = b;
	}
	void Print() const{
		cout << "X - " << x<<endl<<"Y - "<<y<<endl;
	}

	void Print() {
		cout << "X - " << x << endl << "Y - " << y << endl;
	}

	int getX() const {
		return x;
	}
	//4
	int getY() const {
		return y;
	}
	Point summTochek(Point& obj1) const {
		return Point(x + obj1.x, y + obj1.y);
	}
	Point raznostTochek(Point& obj1) const {
		return Point(x - obj1.x, y - obj1.y);
	}
	Point umnoshTochek(Point& obj1) const {
		return Point(x * obj1.x, y * obj1.y);
	}


};

int main()
{
	Point a(10, 20);
	Point b(10, 20);
	const Point g(20,40);

	Point rz = g.summTochek(a);
	rz.Print();
}