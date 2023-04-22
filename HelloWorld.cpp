#using <mscorlib.dll>
#using <System.dll>

using namespace System;

int main(array<String ^> ^args)
{
    int pre(0), cur(1), nxt(0);
    do {
        Console::WriteLine(pre);
        nxt = pre + cur;
        pre = cur;
        cur = nxt;
    } while (pre < 255);
    return 0;
}