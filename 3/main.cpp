#include <iostream>
#include <cmath>
using namespace std;



 struct point2d {
    string name;
    int x,y;

    void inputc(){
        cin >>name>>x>>y;
    }
    void outc(){
        std::cout<<name <<"("<< x<<"," << y<< ")";
        }
    

};

struct point3d {
   string name;
   int x,y,z;

   void inputc(){
       cin >>name>>x>>y;
   }
   void outc(){
       std::cout<<name <<"("<< x<<"," << y<< ")";
       }
   

};

double distance(double x, double y, double z,double x1, double y1, double z1){
    return sqrt(pow((x-x1),2) +pow((y-y1),2)+ pow((z-z1),2));
    }
double distance(double x, double y ,double x1, double y1){
        return distance(x,y,0,x1,y1,0 );
    }
double distance(point2d a, point2d b){
        return distance(a.x,b.y,0,b.x,b.y,0 );
    }
double distance(point3d a, point3d b){
        return distance(a.x,b.y,a.z,b.x,b.y,b.z );
    }

int main(){
    point3d a,b;
    a.x=1;
    b.x=3;
    a.y=1;
    b.y=3;
    a.z=1;
    b.z=3;
    
    cout<<distance(a,b);
    
}
