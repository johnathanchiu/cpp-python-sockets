# cpp-python-sockets

Python server with a c++ client. This utility is useful when you want to merge c++ code with python.

# Usage

Start up the server using the python script. Then run main.cpp. The python terminal should establish connection.

# Modifications that can be made

As of now, the socket can only send and receive a single unsigned int at a time. You can change the data structure 
to accept different packets and etc. by modifying the struct data type in the c++ header file. Also you can modify the code to receive any type of data. For more information see 
(https://docs.python.org/3/library/socket.html) for python uses and (https://www.geeksforgeeks.org/socket-programming-cc/)
for examples on how the socket can be rebuilt.

# Dependencies

## Python ##

- struct
- socket

## C++ ##

All dependencies are built-in
