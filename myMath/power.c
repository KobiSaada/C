//
//  power.c
//  myMath
//
//  Created by user on 09/11/2020.
//

#include "myMath.h"
#define E 2.71828182

double pow(double x , double y){
    int i =0,times=0;
    double res =1 ;
    
    if (y<0) {
        times=-1*y;
        <#statements#>
    }
    else{
        times=y;
    }
    for (i=0;i<times; i++) {
        res=res*x;
    }
    if (y>=0) {
        return res;
        <#statements#>
    }
    else{
        double res2 =0;
        res2=(1/res);
        return res2;
    }
}
double Exp(int x){
    int i = 0 ;
    int times=0;
    double res = 1;
    
    if (x<0) {
        times=-1*times;
    }
    else{
        
        times=x;
    }
for(i=0;i<times;i++){
    res=res*E;
}
    if(x>=0){
        return res;
    }
    else{
        double res2=0;
        res2=(1/res);
        return res2;

    }

}
