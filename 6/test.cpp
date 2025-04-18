#include <iostream>
#using namespace std;

int test(shrot x, short y, short z){
    __asm__(
        
    )
}


int main(int argc, char *argv[]){
    short x, y, z;
    if (argc != 4) {
        cout << "error: please try again with 3 numbers" << endl;
        return 1;
    }
    x = atoi(argv[1]); y = atoi(argv[2]); z = atoi(argv[3]);
    cout << "result: " << test(x, y, z) << endl; 
    return 0;
}
