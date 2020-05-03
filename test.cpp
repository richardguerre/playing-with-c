#include<iostream>
using namespace std;

class Point
{
    int x;
    int halfPoint(int x);
  public:
    Point(int x) : x(x) {}
    Point(const Point& p) { x = p.x;}
    int getX() { return halfPoint(x); }
};

int Point::halfPoint(int x){
  x /= 2;
  return x;
}

int main()
{
   Point p1(10);
   Point p2 = p1;
   cout << p2.getX();
   return 0;
}
