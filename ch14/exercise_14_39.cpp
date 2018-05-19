#include<string>
#include<algorithm>
#include<iostream>
#include<vector>

class StrLenBetween
{
public:
    StrLenBetween(int minlen,int maxlen) : minLen(minlen),maxLen(maxlen) {}
    bool operator()(const std::string &str) const
    {
        return minLen<=str.size()&&maxLen>=str.size();
    }

private:
    int minLen;
    int maxLen;
};

class StrNotShorterThan
{
public:
    StrNotShorterThan(int len):len(len) {}
    bool operator()(const std::string &str) const
    {
        return str.size() >= len;
    }
private:
    int len;
};

int main()
{
    std::vector<std::string> vec = { "hello","world","one","two","four","an","overfiting"};
    StrLenBetween slenbwteen(1,9);
    StrNotShorterThan snotshorterthan(10);

    std::cout << "len 1~9 : " << std::count_if(vec.begin(),vec.end(),slenbwteen) << std::endl;
    std::cout << "len >10 : " << std::count_if(vec.begin(),vec.end(),snotshorterthan) << std::endl;
    return 0;
}
