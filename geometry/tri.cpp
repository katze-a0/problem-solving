

// Basic Geometry Problems
// Problem 1: Triangle Hunter
// In a 20×20 grid of pofloats with floateger coordinates:

// Find the number of triangles with vertices on grid pofloats
// Area must be exactly 20 square units
// All sides must have floateger length

#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

float findCoordinates(vector<vector<pair<float, float>>>& v){

   vector<pair<float, float>> v1;
   for(float i=0;i<=2;i++){
    for(float j=0;j<=2;j++){
        
        v1.push_back({i,j});
    }
    v.push_back(v1);
   }


    return 0;
}

float displayCoordinates(vector<vector<pair<float, float>>>& v){

    for (const auto& row : v) {
        for (const auto& coord : row) {
            cout << "(" << coord.first << ", " << coord.second << ") ";
        }
        cout << endl; 
    }

    return 0;
}
int distanceCheck(pair<float,float> new_pair,vector<int>& distance_Vector){

    float float_f;
    int int_i;
    vector<int>vec;

    for(float p=new_pair.first;p<3;p++){
        for(float q=new_pair.second;q<3;q++){
              float_f=pow((((p-new_pair.first)*(p-new_pair.first)) +((q-new_pair.first)*(q-new_pair.first))), 0.5);
              int_i=pow((((p-new_pair.first)*(p-new_pair.first)) +((q-new_pair.first)*(q-new_pair.first))), 0.5);
              if(float_f-int_i==0){
                  vec.push_back(int_i);
                  cout<<int_i<<" ";
              }
              else{
                cout<<"("<<float_f<<")"<<" ";
              }
        }
    }
    cout<<"Vector Size:"<<vec.size()<<endl;
    return 0;
}

int makePair(){
  pair<float,float>newPair;
  vector<int>vec;
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
    newPair={i,j};
    distanceCheck(newPair,vec);
    }
   }

    return 0;
}




int main(){
vector< vector<pair<float, float>>> v;
vector<int> distanceVector;
cout<<"Hunting triangles....."<<endl;

findCoordinates(v);
displayCoordinates(v);
makePair();
// float a=25.1;
// cout<<sqrt(a);
//  cout<<pow(a,0.5);
cout<<endl<<endl;
for(auto i:distanceVector){
    cout<<i<<" ";
}
    return 0;
}
