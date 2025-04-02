// 6. Write a program to classify a triangle as equilateral, isosceles, or scalene based on its side lengths
// using if-else.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int s1,s2,s3;
    cout<<"Enter three sides of the triangle"<<endl;
    cin>>s1>>s2>>s3;
    if(s1==s2==s3){
        cout<<"Equilateral Triangle";
    }else if((s1==s2!=s3) || (s1!=s2==s3)||(s1==s3!=s2)){
        cout<<"Isoceles Triangle";
    }else{
        cout<<"Scalene Triangle";
    }
    return 0;
}