
//maximum sum path problem using dynamic programming...

#include<iostream>
#include<math.h>

using namespace std;



int getmax(int  p,int q, int &upper_bound){ 

int a=p+upper_bound;
int b=q+upper_bound;
if(a>b){
    upper_bound=a;

}
else{
    upper_bound=b;
}
    return upper_bound;
}


int main(){
 int row,ROW;
 int el[20][20];
    cout<<"Enter no of rows:";

cin>>row;
ROW=row-1;
for(int i=0;i<=row-1;i++){     //input elements 
    for(int j=0;j<=i;j++){
        cin>>el[i][j];
        cout<<"\t";
    }
    cout<<endl;
}

while(ROW>0)
{

    for(int k=0;k<ROW;k++){
        el[ROW-1][k]= getmax(el[ROW][k],el[ROW][k+1],el[ROW-1][k]);
    }

    ROW--;
}

cout<<"Maximum sum path : "<<el[0][0];

    return 0;
}

//wooo done!