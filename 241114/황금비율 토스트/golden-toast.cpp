#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    string initial_bread;
    cin >> initial_bread;
    
    deque<char> bread(initial_bread.begin(), initial_bread.end());
    int position = n;  // 초기 가리키는 위치는 맨 마지막
    
    // 명령어 처리
    for (int i = 0; i < m; ++i) {
        string command;
        cin >> command;
        
        if (command == "L") {
            if (position > 0) {
                position--;
            }
        } else if (command == "R") {
            if (position < bread.size()) {
                position++;
            }
        } else if (command == "D") {
            if (position < bread.size()) {
                bread.erase(bread.begin() + position);
            }
        } else if (command == "P") {
            char new_bread;
            cin >> new_bread;
            bread.insert(bread.begin() + position, new_bread);
            position++;
        }
    }
    
    // 결과 출력
    for (char c : bread) {
        cout << c;
    }
    cout << endl;
    
    return 0;
}