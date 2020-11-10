//
//  main.c
//  
//
//  Created by kobi on 09/11/2020.
//
#include "myMath.h"
#include <stdio.h>
int main(){
    double in = 0;
    float func =0 ,func1 =0 , func2=0;
    
    printf("please enter a real num");
    scanf("%lf",&in);
    func=sub((float)add(Exp(int)in),(float)pow(in,3)),(float)2);
    func1=add((float)mul((float)3,(float)in),(float)mul((float)2,(float)pow(in,2)));
    func2=sub((float)(div((float)mul((float)4,(float)pow(in,3)),(float)5)),(float)(mul((float)2,(float)in)));
    printf("the ans of value of f(x) = 'e^x+x^3-2' in the point:%.4lf is : %.4l\n",in,func);
    printf("the ans of value of f(x) = '3x+2x^2' in the point:%.4lf is : %.4l\n",in,func1);
    printf("the ans of value of f(x) = '(4x^3)/5-2x' in the point:%.4lf is : %.4l\n",in,func2);
}
