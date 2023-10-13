#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<string> v;
    for (string buffer; cin >> buffer; v.push_back(buffer))
        cout << "size = " << v.size() << ", capacity = " << v.capacity() << endl;

    return 0;
}
