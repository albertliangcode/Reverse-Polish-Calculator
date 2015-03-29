/**
* Reverse Polish Calculator - Baremetal Raspberry Pi
*
* 3/28/15
* Albert Liang
*
* This program generates a LIFO buffer where signed floats can be inputted.
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

#define MAX_SIZE 8

float stringToFloat( s* ) {
    float ans;
    return ans;
}

//Just for Testing right now - will add .h file and change name later
void notmain()
{
    float* buf[MAX_SIZE];
    size = 0;

    while(True) {
        input = "";  //Get input from console?
	if( size > 1) {
	    if( input == '+' ) {
		buf[size-2] = buf[size-1] + buf[size-2];
		size--;
		continue;
	    } else if( input == '-' ) {
		buf[size-2] = buf[size-1] - buf[size-2];
		size--;
		continue;
	    } else if( input == '*' ) {
		buf[size-2] = buf[size-1] * buf[size-2];
		size--;
		continue;
	    } else if( input == '/' ) {
		if( buf[size-2] == 0 ) { throw "Divide by Zero"; }
		buf[size-2] = buf[size-1] / buf[size-2];
		size--;
		continue;
	    } else {
	    }
	}
	if( /*input is a number &&*/ size < MAX_SIZE ) {
	    buf[size] = input; //input: convert string to float
	    size++;
	}
    }
}

