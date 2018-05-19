#include"exercise_14_38.h"
#include<vector>
int main()
{
    std::vector<std::string> vec = { "hello","world","one","two","four","an"};
    for(int i = 0;i < 10;++i)
    {
        StrLenIs sc(i);
        std::cout << "len:" << i << " "<< std::count_if(vec.begin(),vec.end(),sc) << std::endl;
    }
    return 0;
}
