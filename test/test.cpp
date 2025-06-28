#include <iostream>
#include <vector>
#include <string>
using namespace std;


unsigned char BitCnt(unsigned char x)
{
    if(x&0x02)x=x &(0xFF-0x02)+1;
    if(x&0x04)x=x &(0xFF-0x04)+1;
    if(x&0x08)x=x &(0xFF-0x08)+1;
    if(x&0x10)x=x &(0xFF-0x10)+1;
    if(x&0x20)x=x &(0xFF-0x20)+1;
    if(x&0x40)x=x &(0xFF-0x40)+1;
    if(x&0x80)x=x &(0xFF-0x80)+1;
    return x;   

}

int main() {
    int a = BitCnt(5);
    cout << "ttttt" << a << endl;
}