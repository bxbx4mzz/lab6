#include <iostream>
#include <cmath>
using namespace std;

    double deg2rad(double degg){
        return (degg*M_PI)/180 ;
    }

    double rad2deg(double rad){
        return (rad*180)/M_PI ;
    }

    double findXComponent(double lx1,double lx2,double ax1,double ax2){
        return  (lx1*cos(ax1)) + (lx2*cos(ax2)) ;
    }

    double findYComponent(double ly1,double ly2, double ay1,double ay2){
        return (ly1*sin(ay1)) + (ly2*sin(ay2)) ;
    }

    double pythagoras(double lx, double ly){
        return sqrt(pow(lx,2) + pow(ly,2)) ;
    }

    void showResult(double result_l,double result_d){
        cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
        cout << "Length of the resultant vector = " << result_l << "\n";
        cout << "Direction of the resultant vector (deg) = " << result_d<< "\n";
        cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
    }
    
int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;

    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
    
}
