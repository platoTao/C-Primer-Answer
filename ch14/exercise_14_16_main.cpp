#include "exercise_14_16.h"
#include "exercise_14_16.cpp"

int main()
{

    StrBlob s2 = {"hello","world"};
    StrBlob s3 = {"hello","world","Good"};
    if(s2<=s3)
        std::cout << "Yes,s2 <= s3" << std::endl;
    std::cout << s2[1] << std::endl;
}
