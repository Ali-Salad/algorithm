#include <iostream>
#include <vector>

int linearSearch(const std::vector<int>& A, int data) {
    // step 1
    int loc = -1;  
    int n = A.size();
    int i = 0;

    while (i < n) {   // step 2
        if (A[i] == data) {   // step 3
            loc = i;
            break;
        }
        i++;
    }

    // step 4
    if (loc >= 0) {
        std::cout << "Data is found and searching is successful." << std::endl;
    } else {
        std::cout << "Data is not found and searching is unsuccessful." << std::endl;
    }
    
    
}

int main() {
    std::vector<int> A = {10, 23, 45, 70, 11, 15};
    int data = 70;
    linearSearch(A, data);

    return 0;
}