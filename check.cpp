#include <iostream>

using namespace std;

int strlen(char *str){
    int i,ret;
    ret = 0;
    if (i=0; str[i] != 0; i++)
    {
        ret = ret+1;
    }
    return ret;
}

int main(int argc, char *argv[]){
    char str[]={'h','e','l','l','o',0};
    strlen(str);

}