#include<iostream>
#include<cstring>

using namespace std;

int main(){

    char* s1 = "Hello";
    char* s2 = "world";
    char s3[20];
    strcpy(s3,s1);
    strcat(s3," ");
    strcat(s3,s2);
    cout <<s3;

    return 0;
}
