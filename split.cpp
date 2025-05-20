#include<bits/stdc++.h>
using namespace std;

vector<string> split(const string & input, string delimiter) {
    vector<string> result;
    auto start = 0;
    auto end = input.find(delimiter);
    while (end != string::npos) {
        result.push_back(input.substr(start, end-start));
        start = end + delimiter.size();
        end = input.find(delimiter, start);
    }
    result.push_back(input.substr(start));
    return result;
}

int main(){
    vector<string> str = split("hello,world", ",");

    for(string s : str) cout << s << " ";
    cout<< endl;
    return 0;
}

/*
void byValue(const std::string str) {
    std::cout << "byValue: " << str << std::endl;
}

void byConstRef(const std::string& str) {
    std::cout << "byConstRef: " << str << std::endl;
}

int main() {
    std::string s = "Hello world";
    byValue(s);      // 복사 발생
    byConstRef(s);   // 복사 없음
}
둘 다 같은 출력이 되지만, 내부적으로는 메모리 동작이 다름.
*/