#include <iostream>
#include <vector>

using namespace std;

void maxelement(vector<int> arr) {
    int temp = arr[0], count = 0;
    for (int i = 0; i < arr.size(); i++) {
        count = 0;
        for (int j = i; j < arr.size(); j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > arr.size() / 2) {
            printf("The majority element is: %d\n", arr[i]);
            break;
        }
    }
}

int main() {
    vector<int> vec = {5, 1, 4, 1, 1, 5, 1,5,1,1,1,5,5,5,5,5,5,5,5,5,5};
    maxelement(vec);
    return 0;
}