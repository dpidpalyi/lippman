double calc(double);
int count(const string &, char);
int sum(vector<int>::iterator, vector<int>::iterator, int);
vector<int> vec(10);

// a)
calc(23.4, 55.1); // illegal, only one parameters exist
// b)
count("abcda", 'a'); // legal
// c)
calc(66); // legal
// d)
sum(vec.begin(), vec.end(), 3.8); // legal
