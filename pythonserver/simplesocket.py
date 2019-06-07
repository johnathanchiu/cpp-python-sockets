import socket
import struct

PORT, HOST_IP = 8080, '127.0.0.1'
key = 4

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.bind((HOST_IP, PORT))
    s.listen()
    print("starting to listen")
    conn, addr = s.accept()
    with conn:
        print('Connected by', addr)
        while True:
            t = int(input("value (int): "))
            assert t >= 0
            d = struct.pack('I', t)
            conn.sendall(d)
