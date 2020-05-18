#include <iostream>

using namespace std;
class Rectangle {
    protected:
    int width, height;
    public:
       void Display(){
           cout<<width<<' '<<height<<endl;
       }
};

class RectangleArea : public Rectangle {
    public:
    
       void Input() {
           cin>>width>>height;
       }
       void Display(){
           cout<<width*height;
       }
};/*
 * Create classes Rectangle and RectangleArea
 */


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}