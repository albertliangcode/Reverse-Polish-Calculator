/**
* Reverse Polish Calculator - Baremetal Raspberry Pi
*
* 3/28/15
* Albert Liang
*
* This program generates a LIFO buffer where signed ints can be inputted.
* When the user inputs an operator, the last two inputs are popped out for
* the operation. After the operation is finished, the result is pushed back
* onto the buffer. This allows for an easy implementation with a console.
* 
* Original idea: 
* //This program simply takes in a string and recursively parses it to get a
* //result. The result is returned as a string, and printed to Screen.
* This idea would have forced the user to type down an entire string before
* getting a result, rather than getting a result after each operator. Still
* I want to do in the future, just not right now (Spring Break ends in about
* 11 hours!) 
*
* After this is working, make this program should become executable in the 
* Framebuffer console.
**/

#define MAX_SIZE 64

// use a struct instead? This way you keep buffer and size packaged together?
int* init()
{
    int buf[64];
    size = 0;
}

void eval(*buf,size)
{

}

//Just for Testing right now - will add .h file and remove notmain() later
void notmain()
{

}

