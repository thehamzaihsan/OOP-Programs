#include <iostream>
using namespace std;


class Point
{
private:
    int x , y;
public:
    Point(int a , int b){
        x = a;
        y = b;
    }
    Point(){}
    
    int retx(){
       
        return x;
    }

    int rety(){
        
        return y;
    }
};



class Triangle
{
private:
    Point P1;
    Point P2;
    Point P3;
public:
    Triangle(Point P1_t , Point P2_t , Point P3_t);
     float CalculateArea();
};


Triangle::Triangle(Point P1_t , Point P2_t , Point P3_t){
    P1 = P1_t;
    P2 = P2_t;
    P3 = P3_t;

}

 float Triangle::CalculateArea(){
    float area = 0.5*((P1.retx()*(P2.rety()-P3.rety())) + (P2.retx()*(P3.rety()-P1.rety())) + (P3.retx()*(P1.rety()-P2.rety())));
    return area;
}


int main(){
    Point P1(9 , 3);
    Point P2(50 , 5);
    Point P3(88 , 8);
    Triangle T1(P1, P2, P3); 
    cout << "Area is " <<  T1.CalculateArea();
    return 0;
}

