//
//  main.cpp
//  Scenic-Socket
//
//  Created by Johnathan Chiu on 2/21/19.
//  Copyright © 2019 Johnathan Chiu. All rights reserved.
//

#include <iostream>
#include "socket.hpp"

using namespace std;
using namespace serversock;

struct serversock::objectData data;

int main(int argc, char *argv[]) {
    objectData *pointer = &data;
    scenicsocket::createConnection();
    while (1 == 1) {
        scenicsocket::readValues(pointer);
    }
    return 0;
}
