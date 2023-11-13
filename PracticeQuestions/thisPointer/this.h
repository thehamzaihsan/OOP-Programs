//
// Created by Hamza on 11/6/2023.
//

#include <iostream>

class Rectangle{
private:
    int length;
    int width;
public:
    Rectangle(int a , int b){
        length = a;
        width = b;
    }
    int area(){
        return length*width;
    }
    void comp(Rectangle R){
        if (this->area() > R.area()){
            std::cout << "big";
        }
        else if(this->area() > R.area()){
            std::cout << "small";
        }
        else{
            std::cout << "same";
        }
    }
};