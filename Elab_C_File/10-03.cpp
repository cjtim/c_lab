#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

class Circle{
private:
    point center;
    double radius;
public:
    Circle(point pt, double radius){
        center.xPosition = pt.xPosition;
        center.yPosition = pt.yPosition;
        this->radius = radius;
    }
    double area(){
        return M_PI*powl(radius, 2);
    }
    double distanceFromCenter(point pt){
        return sqrtf(powl(pt.xPosition-center.xPosition, 2) + powl(pt.yPosition-center.yPosition, 2) );
    }
    int contains(point pt){
        double d = sqrtf(powl(pt.xPosition-center.xPosition, 2) + powl(pt.yPosition-center.yPosition, 2) );
        if(d <= radius ){
            return 1; // inside
        }
        else{
            return 0;
        }
    }
};


int main()
{
   // สร้าง Object เพื่อทดสอบด้วยตัวเอง
   double x, y, radius;
   double check1, check2;
   point check, circle_x_y;
   cout << "Center of Circle: ";
   cin >> circle_x_y.xPosition;
   cin >> circle_x_y.yPosition;
   cout << "Radius of Circle: ";
   cin >> radius;
   cout << "Point to Check: ";
   cin >> check1;
   cin >> check2;

   Circle c1(circle_x_y, radius);
   
   check.xPosition = check1;
   check.yPosition = check2;
   cout << "Area of Circle is " << c1.area() << endl;
   cout << "Distance from Center to Point (" << check1 << ", " << check2
         <<") is " << c1.distanceFromCenter(check) << endl;
    if(c1.contains(check) == 1){
        cout << "This circle contains this point.";
    }
    else if(c1.contains(check) == 0){
        cout << "This point is not in this circle.";
    }
    cout << endl;
}