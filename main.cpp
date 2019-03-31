#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(int argc, char* argv[])
{
    string message;        
    string errorMessage("Invalid usage: msg hi <name> or: msg bye <name>");
    if (argc == 3 || argc == 4)
    {
        string arg1(argv[1]); 
        string arg2(argv[2]);
        if (arg1.compare("hi") == 0)
        {
            message = "Hello ";
            message += arg2;
            message += "!!!!!";
        }
        else if (arg1.compare("bye") == 0)
        {
            message = "Goodbye ";
            message += arg2;
            message += "!";
        }
        else
        {
            message += errorMessage; 
        }
    }
    else
    {
        message += errorMessage; 
    }
    cout << message << endl;

    if (argc == 4)
    {   // test call
        string arg3(argv[3]);
        if (message.compare(arg3) == 0)
        {
            cout << "Test passed." << endl;
            return 0;
        }
        else
        {
            cout << "Test failed." << endl;
            return 1;
        }
    }

    cout << endl;
    cout << "Command line arguments: " << argc << endl;
    for (int i = 0; i < argc; ++i)
    {
        printf("cmdline arg%d = %s\n", i, argv[i]);
    }

    return 0;
}
