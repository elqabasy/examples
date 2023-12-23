#include <iostream>
using namespace std;

void Output() {
    cout << endl;
}

template<typename First, typename ... Strings>
void Output(First arg, const Strings&... rest) {
    cout<< arg << " ";
    Output(rest...);
}

int main() {
    Output("Mahros", "Mohamed", "Mahros", "Saad");
    Output("I", "am", "a", "sentence");
    Output("Let's", "try", 1, "or", 2, "digits", 1.5, 'a', true, false == true);
    return 0;
}
